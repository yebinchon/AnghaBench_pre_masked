
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,int,int,int,int*,int,int) ;

u8 FUNC_1(struct adapter *VAR_0, u32 VAR_1)
{
 u8 VAR_2;
 u8 VAR_3;
 u16 VAR_4;
 u16 VAR_5;
 u16 VAR_6;
 u8 VAR_7 = 0;

 VAR_2 = 0x05;
 VAR_3 = 0x01;
 VAR_5 = 0;

 VAR_4 = (u16)(VAR_1 & 0x0000ffff);
 VAR_6 = 1;

 FUNC_0(VAR_0, VAR_2, VAR_4, VAR_5, &VAR_7, VAR_6, VAR_3);

 return VAR_7;
}
