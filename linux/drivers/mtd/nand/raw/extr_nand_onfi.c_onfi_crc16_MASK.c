
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



u16 FUNC_0(u16 VAR_0, u8 const *VAR_1, size_t VAR_2)
{
 int VAR_3;
 while (VAR_2--) {
  VAR_0 ^= *VAR_1++ << 8;
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
   VAR_0 = (VAR_0 << 1) ^ ((VAR_0 & 0x8000) ? 0x8005 : 0);
 }

 return VAR_0;
}
