
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u8 const *VAR_0, size_t VAR_1)
{
 u16 VAR_2 = 0xffff;

 while (VAR_1--) {
  VAR_2 = ((VAR_2 >> 8) | (VAR_2 << 8)) ^ *VAR_0++;
  VAR_2 ^= (VAR_2 & 0xff) >> 4;
  VAR_2 ^= (VAR_2 & 0xff) << 12;
  VAR_2 ^= (VAR_2 & 0xff) << 5;
 }

 return VAR_2;
}
