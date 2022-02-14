
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(u8 VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  if ((VAR_0 ^ VAR_1) & (1 << 7)) {
   VAR_0 <<= 1;
   VAR_0 ^= VAR_2;
  } else {
   VAR_0 <<= 1;
  }
  VAR_1 <<= 1;
 }
 return VAR_0;
}
