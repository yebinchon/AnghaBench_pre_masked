
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static unsigned short FUNC_0(u8 VAR_0, u8 VAR_1)
{
 u8 VAR_2;
 unsigned int VAR_3;

 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
  if (VAR_0 & 1)
   VAR_2 ^= VAR_1;
  VAR_0 >>= 1;
  VAR_1 <<= 1;
  if ((VAR_1 & 0x40) != 0)
   VAR_1 ^= 0x43;
 }

 return VAR_2;
}
