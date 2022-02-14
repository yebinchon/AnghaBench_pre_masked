
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static u8 FUNC_1(enum radio_path VAR_2,
         u8 VAR_3)
{
 u8 VAR_4 = 0;

 switch (VAR_3) {
 case 152:
  VAR_4 = 2;
  break;

 case 150:
 case 146:
  if (VAR_2 == VAR_0)
   VAR_4 = 3;
  else if (VAR_2 == VAR_1)
   VAR_4 = 2;
  break;

 case 155:
  VAR_4 = 3;
  break;

 case 145:
 case 144:
 case 154:
 case 153:
  VAR_4 = 0;
  break;

 case 151:
 case 149:
 case 148:
 case 147:
  VAR_4 = 1;
  break;

 case 143:
 case 142:
 case 135:
 case 134:
  VAR_4 = 4;
  break;

 case 133:
 case 132:
 case 131:
 case 130:
  VAR_4 = 5;
  break;

 case 129:
 case 128:
 case 141:
 case 140:
  VAR_4 = 6;
  break;

 case 139:
 case 138:
 case 137:
 case 136:
  VAR_4 = 7;
  break;

 default:
  FUNC_0(1, "rtl8723be: Rate_Section is Illegal\n");
  break;
 }

 return VAR_4;
}
