
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hal_com_data {void* Regulation5G; void* Regulation2_4G; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

void FUNC_1(struct adapter *VAR_4, u16 VAR_5)
{
 struct hal_com_data *VAR_6 = FUNC_0(VAR_4);
 VAR_6->Regulation2_4G = VAR_3;
 VAR_6->Regulation5G = VAR_3;

 switch (VAR_5) {
 case 128:
  VAR_6->Regulation2_4G = VAR_3;
  break;
 case 165:
  VAR_6->Regulation2_4G = VAR_0;
  break;
 case 153:
  VAR_6->Regulation2_4G = VAR_1;
  break;
 case 148:
  VAR_6->Regulation2_4G = VAR_2;
  break;
 case 164:
  VAR_6->Regulation2_4G = VAR_0;
  break;
 case 163:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 146:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_0;
  break;
 case 151:
  VAR_6->Regulation2_4G = VAR_2;
  VAR_6->Regulation5G = VAR_2;
  break;
 case 129:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_2;
  break;
 case 134:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 133:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 132:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 131:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 130:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 160:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 141:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 140:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 150:
  VAR_6->Regulation2_4G = VAR_2;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 149:
  VAR_6->Regulation2_4G = VAR_2;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 157:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 156:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 152:
  VAR_6->Regulation2_4G = VAR_3;
  VAR_6->Regulation5G = VAR_3;
  break;
 case 166:
  VAR_6->Regulation2_4G = VAR_0;
  VAR_6->Regulation5G = VAR_0;
  break;
 case 161:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 155:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 139:
  VAR_6->Regulation2_4G = VAR_0;
  VAR_6->Regulation5G = VAR_0;
  break;
 case 159:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 138:
  VAR_6->Regulation2_4G = VAR_0;
  VAR_6->Regulation5G = VAR_0;
  break;
 case 137:
  VAR_6->Regulation2_4G = VAR_0;
  VAR_6->Regulation5G = VAR_0;
  break;
 case 136:
  VAR_6->Regulation2_4G = VAR_0;
  VAR_6->Regulation5G = VAR_0;
  break;
 case 135:
  VAR_6->Regulation2_4G = VAR_0;
  VAR_6->Regulation5G = VAR_0;
  break;
 case 145:
  VAR_6->Regulation2_4G = VAR_0;
  VAR_6->Regulation5G = VAR_0;
  break;
 case 144:
  VAR_6->Regulation2_4G = VAR_0;
  VAR_6->Regulation5G = VAR_0;
  break;
 case 154:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 143:
  VAR_6->Regulation2_4G = VAR_0;
  VAR_6->Regulation5G = VAR_0;
  break;
 case 158:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 142:
  VAR_6->Regulation2_4G = VAR_0;
  VAR_6->Regulation5G = VAR_0;
  break;
 case 162:
  VAR_6->Regulation2_4G = VAR_1;
  VAR_6->Regulation5G = VAR_1;
  break;
 case 147:
  VAR_6->Regulation2_4G = VAR_3;
  VAR_6->Regulation5G = VAR_3;
  break;
 default:
  break;
 }
}
