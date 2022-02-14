
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,unsigned char const) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_5)
{
 int VAR_6;

 switch (VAR_5[0]) {
 case 152:
 case 155:
 case 154:
 case 153:
 case 164:
 case 159:
 case 158:
 case 140:
 case 163:
 case 157:
 case 143:
 case 168:
 case 146:
 case 151:
 case 148:
 case 150:
 case 147:
 case 149:
 case 145:
  VAR_6 = VAR_1;
  break;

 case 131:
 case 134:
 case 133:
 case 132:
 case 161:
 case 160:
 case 129:
 case 128:
 case 156:
 case 162:
 case 142:
 case 167:
  VAR_6 = VAR_3;
  break;
 case 166:
 case 136:
 case 137:
 case 138:
 case 165:
 case 144:
 case 141:
 case 139:
 case 135:
 case 130:
  VAR_6 = VAR_2;
  break;
 default:

  FUNC_0("target: Unknown data direction for SCSI Opcode 0x%02x\n", VAR_5[0]);

  VAR_6 = -VAR_4;
 }
 return VAR_6;
}
