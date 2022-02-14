
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct TYPE_6__ {int charger_online; int charger_connected; int charger_voltage; int cv_active; int charger_current; int wd_expired; } ;
struct TYPE_5__ {int main_thermal_prot; int mainextchnotok; } ;
struct TYPE_4__ {int wd_expired; } ;
struct ab8500_charger {TYPE_3__ ac; TYPE_2__ flags; TYPE_1__ usb; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (struct ab8500_charger*) ;
 int FUNC_1 (struct ab8500_charger*) ;
 int FUNC_2 (struct ab8500_charger*) ;
 int FUNC_3 (struct power_supply*) ;
 struct ab8500_charger* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct power_supply *VAR_5,
 enum power_supply_property VAR_6,
 union power_supply_propval *VAR_7)
{
 struct ab8500_charger *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(FUNC_3(VAR_5));

 switch (VAR_6) {
 case 132:
  if (VAR_8->flags.mainextchnotok)
   VAR_7->intval = VAR_4;
  else if (VAR_8->ac.wd_expired || VAR_8->usb.wd_expired)
   VAR_7->intval = VAR_1;
  else if (VAR_8->flags.main_thermal_prot)
   VAR_7->intval = VAR_3;
  else
   VAR_7->intval = VAR_2;
  break;
 case 131:
  VAR_7->intval = VAR_8->ac.charger_online;
  break;
 case 130:
  VAR_7->intval = VAR_8->ac.charger_connected;
  break;
 case 128:
  VAR_9 = FUNC_2(VAR_8);
  if (VAR_9 >= 0)
   VAR_8->ac.charger_voltage = VAR_9;

  VAR_7->intval = VAR_8->ac.charger_voltage * 1000;
  break;
 case 129:




  VAR_8->ac.cv_active = FUNC_0(VAR_8);
  VAR_7->intval = VAR_8->ac.cv_active;
  break;
 case 133:
  VAR_9 = FUNC_1(VAR_8);
  if (VAR_9 >= 0)
   VAR_8->ac.charger_current = VAR_9;
  VAR_7->intval = VAR_8->ac.charger_current * 1000;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
