
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(const u8 *VAR_0, int VAR_1)
{
 const u16 VAR_2 = 0x8005;
 int VAR_3;
 u16 VAR_4, VAR_5, VAR_6;
 u8 VAR_7;

 VAR_5 = 0xFFFF;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_7 = *VAR_0++;
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
   VAR_6 = VAR_5 >> 15;
   VAR_5 <<= 1;

   if (VAR_6 ^ (u16)(VAR_7 & 1)) {
    VAR_5 ^= VAR_2;
    VAR_5 |= (u16)0x0001U;
   }
   VAR_7 >>= 1;
  }
 }

 return VAR_5;
}
