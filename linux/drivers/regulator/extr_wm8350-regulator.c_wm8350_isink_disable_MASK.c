
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int isink_A_dcdc; int isink_B_dcdc; } ;
struct wm8350 {TYPE_1__ pmic; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;
 struct wm8350* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm8350*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_6)
{
 struct wm8350 *VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = FUNC_1(VAR_6);

 switch (VAR_8) {
 case 129:
  switch (VAR_7->pmic.isink_A_dcdc) {
  case 131:
  case 130:
   FUNC_2(VAR_7, VAR_4,
       1 << (VAR_7->pmic.isink_A_dcdc -
      VAR_3));
   FUNC_2(VAR_7, VAR_5,
       VAR_1);
   break;
  default:
   return -VAR_0;
  }
  break;
 case 128:
  switch (VAR_7->pmic.isink_B_dcdc) {
  case 131:
  case 130:
   FUNC_2(VAR_7, VAR_4,
       1 << (VAR_7->pmic.isink_B_dcdc -
      VAR_3));
   FUNC_2(VAR_7, VAR_5,
       VAR_2);
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
