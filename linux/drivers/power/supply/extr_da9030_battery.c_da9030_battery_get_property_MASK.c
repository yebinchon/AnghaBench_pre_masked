
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union power_supply_propval {int intval; int strval; } ;
struct power_supply {int dummy; } ;
struct TYPE_3__ {int ichaverage_res; int vbat_res; } ;
struct da9030_charger {TYPE_2__* battery_info; TYPE_1__ adc; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_4__ {int technology; int voltage_max_design; int voltage_min_design; int name; } ;
 int FUNC_0 (struct da9030_charger*,union power_supply_propval*) ;
 int FUNC_1 (struct da9030_charger*,union power_supply_propval*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct da9030_charger* FUNC_4 (struct power_supply*) ;

__attribute__((used)) static int FUNC_5(struct power_supply *VAR_0,
       enum power_supply_property VAR_1,
       union power_supply_propval *VAR_2)
{
 struct da9030_charger *VAR_3 = FUNC_4(VAR_0);

 switch (VAR_1) {
 case 132:
  FUNC_1(VAR_3, VAR_2);
  break;
 case 134:
  FUNC_0(VAR_3, VAR_2);
  break;
 case 131:
  VAR_2->intval = VAR_3->battery_info->technology;
  break;
 case 130:
  VAR_2->intval = VAR_3->battery_info->voltage_max_design;
  break;
 case 129:
  VAR_2->intval = VAR_3->battery_info->voltage_min_design;
  break;
 case 128:
  VAR_2->intval = FUNC_3(VAR_3->adc.vbat_res) * 1000;
  break;
 case 135:
  VAR_2->intval =
   FUNC_2(VAR_3->adc.ichaverage_res) * 1000;
  break;
 case 133:
  VAR_2->strval = VAR_3->battery_info->name;
  break;
 default:
  break;
 }

 return 0;
}
