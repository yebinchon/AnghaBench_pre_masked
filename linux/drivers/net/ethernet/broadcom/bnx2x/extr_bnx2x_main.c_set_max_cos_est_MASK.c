
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_4)
{
 switch (VAR_4) {
 case 148:
 case 147:
 case 146:
  return VAR_0;
 case 145:
 case 144:
  return VAR_1;
 case 142:
 case 141:
 case 139:
 case 138:
 case 132:
 case 133:
 case 129:
 case 130:
 case 131:
 case 136:
 case 135:
  return VAR_2;
 case 143:
 case 140:
 case 137:
 case 128:
 case 134:
  return 1;
 default:
  FUNC_0("Unknown board_type (%d), aborting\n", VAR_4);
  return -VAR_3;
 }
}
