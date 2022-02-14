
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u8 FUNC_0(u32 VAR_6)
{
 u8 VAR_7;
 u16 VAR_8;


 VAR_8 = (u16)(VAR_6 >> 16);
 switch (VAR_8) {
 case 0x1025:
  VAR_7 = VAR_0;
  break;

 case 0x1026:
  VAR_7 = VAR_1;
  break;





 case 0x1031:
  VAR_7 = VAR_3;
  break;

 case 0x1032:
  VAR_7 = VAR_5;
  break;

 case 0x1033:
  VAR_7 = VAR_4;
  break;

 case 0x1034:
  VAR_7 = VAR_2;
  break;

 default:

  VAR_7 = VAR_1;
  break;
 }

 return VAR_7;
}
