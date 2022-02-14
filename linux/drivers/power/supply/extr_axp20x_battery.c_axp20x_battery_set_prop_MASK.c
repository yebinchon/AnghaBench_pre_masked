
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct axp20x_batt_ps {TYPE_1__* data; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int (* set_max_voltage ) (struct axp20x_batt_ps*,int ) ;} ;


 int VAR_0 ;




 int FUNC_0 (struct axp20x_batt_ps*,int ) ;
 int FUNC_1 (struct axp20x_batt_ps*,int ) ;
 int FUNC_2 (struct axp20x_batt_ps*,int ) ;
 struct axp20x_batt_ps* FUNC_3 (struct power_supply*) ;
 int FUNC_4 (struct axp20x_batt_ps*,int ) ;

__attribute__((used)) static int FUNC_5(struct power_supply *VAR_1,
       enum power_supply_property VAR_2,
       const union power_supply_propval *VAR_3)
{
 struct axp20x_batt_ps *VAR_4 = FUNC_3(VAR_1);

 switch (VAR_2) {
 case 128:
  return FUNC_2(VAR_4, VAR_3->intval);

 case 129:
  return VAR_4->data->set_max_voltage(VAR_4, VAR_3->intval);

 case 131:
  return FUNC_0(VAR_4,
         VAR_3->intval);
 case 130:
  return FUNC_1(VAR_4,
             VAR_3->intval);

 default:
  return -VAR_0;
 }
}
