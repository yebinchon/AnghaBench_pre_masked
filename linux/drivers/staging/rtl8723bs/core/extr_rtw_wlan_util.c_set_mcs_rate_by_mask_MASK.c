
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



void FUNC_0(u8 *VAR_0, u32 VAR_1)
{
 u8 VAR_2 = (u8)(VAR_1&0xff);
 u8 VAR_3 = (u8)((VAR_1>>8)&0xff);
 u8 VAR_4 = (u8)((VAR_1>>16)&0xff);
 u8 VAR_5 = (u8)((VAR_1>>24)&0xff);

 VAR_0[0] &= VAR_2;
 VAR_0[1] &= VAR_3;
 VAR_0[2] &= VAR_4;
 VAR_0[3] &= VAR_5;
}
