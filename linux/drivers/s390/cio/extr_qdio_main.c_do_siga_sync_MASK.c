
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(unsigned long VAR_0,
          unsigned int VAR_1, unsigned int VAR_2,
          unsigned int VAR_3)
{
 register unsigned long VAR_4 asm ("0") = VAR_3;
 register unsigned long VAR_5 asm ("1") = VAR_0;
 register unsigned long VAR_6 asm ("2") = VAR_1;
 register unsigned long VAR_7 asm ("3") = VAR_2;
 int VAR_8;

 asm volatile(
  "	siga	0\n"
  "	ipm	%0\n"
  "	srl	%0,28\n"
  : "=d" (VAR_8)
  : "d" (VAR_4), "d" (VAR_5), "d" (VAR_6), "d" (VAR_7) : "cc");
 return VAR_8;
}
