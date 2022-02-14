
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,int,int,int,int*,int,int) ;

int FUNC_1(struct adapter *VAR_0, u32 VAR_1, u8 VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;
 u16 VAR_5;
 u16 VAR_6;
 u16 VAR_7;
 u8 VAR_8;

 VAR_3 = 0x05;
 VAR_4 = 0x00;
 VAR_6 = 0;
 VAR_5 = (u16)(VAR_1 & 0x0000ffff);
 VAR_7 = 1;
 VAR_8 = VAR_2;
 return FUNC_0(VAR_0, VAR_3, VAR_5,
     VAR_6, &VAR_8, VAR_7, VAR_4);
}
