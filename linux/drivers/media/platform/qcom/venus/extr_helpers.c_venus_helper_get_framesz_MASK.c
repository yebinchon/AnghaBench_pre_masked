
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;

u32 FUNC_3(u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;
 bool VAR_6;

 switch (VAR_1) {
 case 136:
 case 140:
 case 138:
 case 139:
 case 141:
 case 135:
 case 134:
 case 133:
 case 128:
 case 132:
 case 131:
 case 130:
 case 129:
 case 137:
  VAR_6 = 1;
  break;
 default:
  VAR_6 = 0;
  break;
 }

 if (VAR_6) {
  VAR_5 = FUNC_0(VAR_3, 32) * FUNC_0(VAR_2, 32) * 3 / 2 / 2;
  return FUNC_0(VAR_5, VAR_0);
 }

 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4)
  return 0;

 return FUNC_2(VAR_4, VAR_2, VAR_3);
}
