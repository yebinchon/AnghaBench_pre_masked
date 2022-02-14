
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct TYPE_2__ {int id_short; } ;
struct axp288_chrg_info {int cc; int max_cc; int cv; int max_cv; TYPE_1__ otg; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int FUNC_0 (struct axp288_chrg_info*) ;
 int FUNC_1 (struct axp288_chrg_info*) ;
 int FUNC_2 (struct axp288_chrg_info*) ;
 int FUNC_3 (struct axp288_chrg_info*) ;
 struct axp288_chrg_info* FUNC_4 (struct power_supply*) ;

__attribute__((used)) static int FUNC_5(struct power_supply *VAR_1,
        enum power_supply_property VAR_2,
        union power_supply_propval *VAR_3)
{
 struct axp288_chrg_info *VAR_4 = FUNC_4(VAR_1);
 int VAR_5;

 switch (VAR_2) {
 case 128:

  if (VAR_4->otg.id_short) {
   VAR_3->intval = 0;
   break;
  }
  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_3->intval = VAR_5;
  break;
 case 129:

  if (VAR_4->otg.id_short) {
   VAR_3->intval = 0;
   break;
  }
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_3->intval = VAR_5;
  break;
 case 131:
  VAR_3->intval = FUNC_3(VAR_4);
  break;
 case 135:
  VAR_3->intval = VAR_4->cc * 1000;
  break;
 case 134:
  VAR_3->intval = VAR_4->max_cc * 1000;
  break;
 case 133:
  VAR_3->intval = VAR_4->cv * 1000;
  break;
 case 132:
  VAR_3->intval = VAR_4->max_cv * 1000;
  break;
 case 130:
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_3->intval = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
