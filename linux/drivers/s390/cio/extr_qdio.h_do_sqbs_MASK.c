
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;



__attribute__((used)) static inline int FUNC_0(u64 VAR_0, unsigned char VAR_1, int VAR_2,
     int *VAR_3, int *VAR_4)
{
 register unsigned long VAR_5 asm ("0") = *VAR_4;
 register unsigned long VAR_6 asm ("1") = VAR_0;
 unsigned long VAR_7 = ((unsigned long)VAR_2 << 32) | *VAR_3;

 asm volatile(
  "	.insn	rsy,0xeb000000008A,%1,0,0(%2)"
  : "+d" (VAR_5), "+d" (VAR_7)
  : "d" ((unsigned long)VAR_1), "d" (VAR_6)
  : "memory", "cc");
 *VAR_4 = VAR_5 & 0xff;
 *VAR_3 = VAR_7 & 0xff;

 return (VAR_5 >> 32) & 0xff;
}
