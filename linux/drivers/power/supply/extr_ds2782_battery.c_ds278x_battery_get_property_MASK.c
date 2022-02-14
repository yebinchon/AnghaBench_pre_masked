
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct ds278x_info {TYPE_1__* ops; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int (* get_battery_capacity ) (struct ds278x_info*,int *) ;int (* get_battery_voltage ) (struct ds278x_info*,int *) ;int (* get_battery_current ) (struct ds278x_info*,int *) ;} ;


 int VAR_0 ;





 int FUNC_0 (struct ds278x_info*,int *) ;
 int FUNC_1 (struct ds278x_info*,int *) ;
 int FUNC_2 (struct ds278x_info*,int *) ;
 int FUNC_3 (struct ds278x_info*,int *) ;
 int FUNC_4 (struct ds278x_info*,int *) ;
 struct ds278x_info* FUNC_5 (struct power_supply*) ;

__attribute__((used)) static int FUNC_6(struct power_supply *VAR_1,
           enum power_supply_property VAR_2,
           union power_supply_propval *VAR_3)
{
 struct ds278x_info *VAR_4 = FUNC_5(VAR_1);
 int VAR_5;

 switch (VAR_2) {
 case 130:
  VAR_5 = FUNC_0(VAR_4, &VAR_3->intval);
  break;

 case 132:
  VAR_5 = VAR_4->ops->get_battery_capacity(VAR_4, &VAR_3->intval);
  break;

 case 128:
  VAR_5 = VAR_4->ops->get_battery_voltage(VAR_4, &VAR_3->intval);
  break;

 case 131:
  VAR_5 = VAR_4->ops->get_battery_current(VAR_4, &VAR_3->intval);
  break;

 case 129:
  VAR_5 = FUNC_1(VAR_4, &VAR_3->intval);
  break;

 default:
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
