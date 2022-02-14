
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;



__attribute__((used)) static inline int FUNC_0(u64 VAR_0, unsigned char *VAR_1, int VAR_2,
     int *VAR_3, int *VAR_4, int VAR_5)
{
 register unsigned long VAR_6 asm ("0") = *VAR_4;
 register unsigned long VAR_7 asm ("1") = VAR_0;
 unsigned long VAR_8 = ((unsigned long)VAR_2 << 32) | *VAR_3;
 unsigned long VAR_9 = (unsigned long)VAR_5 << 63;

 asm volatile(
  "	.insn	rrf,0xB99c0000,%1,%2,0,0"
  : "+d" (VAR_6), "+d" (VAR_8), "+d" (VAR_9)
  : "d" (VAR_7)
  : "memory", "cc");
 *VAR_4 = VAR_6 & 0xff;
 *VAR_3 = VAR_8 & 0xff;
 *VAR_1 = VAR_9 & 0xff;

 return (VAR_6 >> 32) & 0xff;
}
