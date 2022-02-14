
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmp_overlay {int dummy; } ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct mmp_overlay*) ;

__attribute__((used)) static u32 FUNC_7(struct mmp_overlay *VAR_0, int VAR_1)
{
 u32 VAR_2 = 0, VAR_3 = 0, VAR_4 = 0,
  VAR_5 = 0, VAR_6 = 0,
  VAR_7 = FUNC_6(VAR_0);

 switch (VAR_1) {
 case 138:
 case 139:
 case 137:
 case 136:
 case 135:
  VAR_2 = 1;
  break;
 case 133:
 case 128:
 case 129:
  VAR_3 = 1;
  break;
 case 130:
  VAR_4 = 1;
  break;
 default:
  break;
 }

 switch (VAR_1) {
 case 138:
 case 143:
  break;
 case 139:
 case 144:
  VAR_6 = 0x1;
  break;
 case 137:
 case 142:
  VAR_6 = 0x2;
  break;
 case 136:
 case 141:
  VAR_6 = 0x3;
  break;
 case 135:
 case 140:
  VAR_6 = 0x4;
  break;
 case 134:
 case 133:
 case 130:
  VAR_6 = 0x5;
  VAR_5 = 1;
  break;
 case 131:
 case 128:
  VAR_6 = 0x6;
  VAR_5 = 1;
  break;
 case 132:
 case 129:
  VAR_6 = 0x7;
  VAR_5 = 1;
  break;
 default:
  break;
 }

 return (FUNC_2(0) | FUNC_1(VAR_7, VAR_6) |
  FUNC_3(VAR_7, VAR_2) | FUNC_4(VAR_7, VAR_3) |
  FUNC_5(VAR_7, VAR_4) | FUNC_0(VAR_7, VAR_5));
}
