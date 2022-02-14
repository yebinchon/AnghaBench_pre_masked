
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, u8 *VAR_1, unsigned int VAR_2)
{
 u8 VAR_3, VAR_4 = 0xff;

 while (VAR_2--) {
  VAR_3 = *VAR_1++;
  if ((VAR_3 & 0xf0) == VAR_4) {
   *VAR_0++ = 0x70 | (VAR_3 & 0xf);
  } else {
   *VAR_0++ = VAR_3;
   VAR_4 = VAR_3 & 0xf0;
  }
 }
}
