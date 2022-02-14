
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int strval; } ;
struct gb_power_supply {int serial_number; int manufacturer; int model_name; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;






__attribute__((used)) static int FUNC_0(struct gb_power_supply *VAR_0,
      enum power_supply_property VAR_1,
      union power_supply_propval *VAR_2)
{
 switch (VAR_1) {
 case 129:
  VAR_2->strval = VAR_0->model_name;
  break;
 case 130:
  VAR_2->strval = VAR_0->manufacturer;
  break;
 case 128:
  VAR_2->strval = VAR_0->serial_number;
  break;
 default:
  break;
 }

 return 0;
}
