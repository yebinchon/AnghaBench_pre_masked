
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct axp20x_usb_power {int axp20x_id; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct axp20x_usb_power*,int ) ;
 int FUNC_1 (struct axp20x_usb_power*,int ) ;
 int FUNC_2 (struct axp20x_usb_power*,int ) ;
 struct axp20x_usb_power* FUNC_3 (struct power_supply*) ;

__attribute__((used)) static int FUNC_4(struct power_supply *VAR_2,
      enum power_supply_property VAR_3,
      const union power_supply_propval *VAR_4)
{
 struct axp20x_usb_power *VAR_5 = FUNC_3(VAR_2);

 switch (VAR_3) {
 case 128:
  return FUNC_1(VAR_5, VAR_4->intval);

 case 129:
  if (VAR_5->axp20x_id == VAR_0)
   return FUNC_2(VAR_5,
        VAR_4->intval);
  return FUNC_0(VAR_5, VAR_4->intval);

 default:
  return -VAR_1;
 }

 return -VAR_1;
}
