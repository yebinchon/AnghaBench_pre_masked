
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = (VAR_0 >> 14) * VAR_1;
 u32 VAR_4 = VAR_3 / VAR_2;
 u32 VAR_5 = VAR_3 % VAR_2;
 u32 VAR_6 =
     (((VAR_0 & 0x00003FFF) * VAR_1 + (VAR_5 << 14)) + (VAR_2 / 2)) / VAR_2;
 return (VAR_4 << 14) + VAR_6;
}
