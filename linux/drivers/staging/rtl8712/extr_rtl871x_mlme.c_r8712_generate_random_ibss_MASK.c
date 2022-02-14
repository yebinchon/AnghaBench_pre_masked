
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;

void FUNC_0(u8 *VAR_1)
{
 u32 VAR_2 = VAR_0;

 VAR_1[0] = 0x02;
 VAR_1[1] = 0x11;
 VAR_1[2] = 0x87;
 VAR_1[3] = (u8)(VAR_2 & 0xff);
 VAR_1[4] = (u8)((VAR_2 >> 8) & 0xff);
 VAR_1[5] = (u8)((VAR_2 >> 16) & 0xff);
}
