
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mwifiex_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

u8 FUNC_0(struct mwifiex_private *VAR_3, u8 VAR_4,
     u32 VAR_5, u8 VAR_6)
{
 u8 VAR_7 = 0;

 if (VAR_4 & VAR_0) {
  switch (VAR_5) {
  case 36:
  case 40:
  case 44:
  case 48:
   if (VAR_6 == VAR_2)
    VAR_7 = 42;
   break;
  case 52:
  case 56:
  case 60:
  case 64:
   if (VAR_6 == VAR_2)
    VAR_7 = 58;
   else if (VAR_6 == VAR_1)
    VAR_7 = 50;
   break;
  case 100:
  case 104:
  case 108:
  case 112:
   if (VAR_6 == VAR_2)
    VAR_7 = 106;
   break;
  case 116:
  case 120:
  case 124:
  case 128:
   if (VAR_6 == VAR_2)
    VAR_7 = 122;
   else if (VAR_6 == VAR_1)
    VAR_7 = 114;
   break;
  case 132:
  case 136:
  case 140:
  case 144:
   if (VAR_6 == VAR_2)
    VAR_7 = 138;
   break;
  case 149:
  case 153:
  case 157:
  case 161:
   if (VAR_6 == VAR_2)
    VAR_7 = 155;
   break;
  default:
   VAR_7 = 42;
  }
 }

 return VAR_7;
}
