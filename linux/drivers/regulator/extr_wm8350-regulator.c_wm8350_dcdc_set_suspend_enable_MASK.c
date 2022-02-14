
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int dcdc1_hib_mode; int dcdc3_hib_mode; int dcdc4_hib_mode; int dcdc6_hib_mode; } ;
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
 int FUNC_2 (struct wm8350*,int ) ;
 int FUNC_3 (struct wm8350*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_6)
{
 struct wm8350 *VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = FUNC_1(VAR_6);
 u16 VAR_9;

 switch (VAR_8) {
 case 133:
  VAR_9 = FUNC_2(VAR_7, VAR_1)
   & ~VAR_5;
  FUNC_3(VAR_7, VAR_1,
   VAR_9 | VAR_7->pmic.dcdc1_hib_mode);
  break;
 case 131:
  VAR_9 = FUNC_2(VAR_7, VAR_2)
   & ~VAR_5;
  FUNC_3(VAR_7, VAR_2,
   VAR_9 | VAR_7->pmic.dcdc3_hib_mode);
  break;
 case 130:
  VAR_9 = FUNC_2(VAR_7, VAR_3)
   & ~VAR_5;
  FUNC_3(VAR_7, VAR_3,
   VAR_9 | VAR_7->pmic.dcdc4_hib_mode);
  break;
 case 128:
  VAR_9 = FUNC_2(VAR_7, VAR_4)
   & ~VAR_5;
  FUNC_3(VAR_7, VAR_4,
   VAR_9 | VAR_7->pmic.dcdc6_hib_mode);
  break;
 case 132:
 case 129:
 default:
  return -VAR_0;
 }

 return 0;
}
