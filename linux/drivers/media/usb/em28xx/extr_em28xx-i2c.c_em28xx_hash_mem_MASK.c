
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long FUNC_0(char *VAR_0, int VAR_1, int VAR_2)
{
 unsigned long VAR_3 = 0;
 unsigned long VAR_4 = 0;
 int VAR_5 = 0;
 unsigned char VAR_6;

 do {
  if (VAR_5 == VAR_1) {
   VAR_6 = (char)VAR_5;
   VAR_5 = -1;
  } else {
   VAR_6 = *VAR_0++;
  }
  VAR_4 = (VAR_4 << 8) | VAR_6;
  VAR_5++;
  if ((VAR_5 & (32 / 8 - 1)) == 0)
   VAR_3 = ((VAR_3 ^ VAR_4) * 0x9e370001UL);
 } while (VAR_5);

 return (VAR_3 >> (32 - VAR_2)) & 0xffffffffUL;
}
