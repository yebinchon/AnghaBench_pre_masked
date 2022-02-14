
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crw {int dummy; } ;


 int FUNC_0 (struct crw*,int) ;

int FUNC_1(struct crw *VAR_0)
{
 int VAR_1;

 asm volatile(
  "	stcrw	0(%2)\n"
  "	ipm	%0\n"
  "	srl	%0,28\n"
  : "=d" (VAR_1), "=m" (*VAR_0)
  : "a" (VAR_0)
  : "cc");
 FUNC_0(VAR_0, VAR_1);

 return VAR_1;
}
