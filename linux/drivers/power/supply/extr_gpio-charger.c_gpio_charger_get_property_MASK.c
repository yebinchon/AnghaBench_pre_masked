
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct gpio_charger {int charge_status; int gpiod; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct gpio_charger* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_3,
  enum power_supply_property VAR_4, union power_supply_propval *VAR_5)
{
 struct gpio_charger *VAR_6 = FUNC_1(VAR_3);

 switch (VAR_4) {
 case 129:
  VAR_5->intval = FUNC_0(VAR_6->gpiod);
  break;
 case 128:
  if (FUNC_0(VAR_6->charge_status))
   VAR_5->intval = VAR_1;
  else
   VAR_5->intval = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
