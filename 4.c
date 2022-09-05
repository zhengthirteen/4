#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	scanf(" %d+%d", &a, &b);
	int sum = a + b;
	printf("sum=%d\n", sum);

	float c = 0;
	float d = 0;
	scanf("%f*%f",&c,&d);
	float product = c * d;
	printf("product=%f\n",product);
	return 0;

}