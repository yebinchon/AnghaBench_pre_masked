
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct TYPE_6__ {int vbus_collapse; int vbus_ovv; int usb_thermal_prot; int usbchargernotok; } ;
struct TYPE_5__ {int charger_online; int charger_connected; int charger_voltage; int cv_active; int charger_current; int wd_expired; } ;
struct TYPE_4__ {int wd_expired; } ;
struct ab8500_charger {TYPE_3__ flags; TYPE_2__ usb; TYPE_1__ ac; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







 int FUNC_0 (struct ab8500_charger*) ;
 int FUNC_1 (struct ab8500_charger*) ;
 int FUNC_2 (struct ab8500_charger*) ;
 int FUNC_3 (struct power_supply*) ;
 struct ab8500_charger* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct power_supply *VAR_6,
 enum power_supply_property VAR_7,
 union power_supply_propval *VAR_8)
{
 struct ab8500_charger *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(FUNC_3(VAR_6));

 switch (VAR_7) {
 case 132:
  if (VAR_9->flags.usbchargernotok)
   VAR_8->intval = VAR_5;
  else if (VAR_9->ac.wd_expired || VAR_9->usb.wd_expired)
   VAR_8->intval = VAR_1;
  else if (VAR_9->flags.usb_thermal_prot)
   VAR_8->intval = VAR_3;
  else if (VAR_9->flags.vbus_ovv)
   VAR_8->intval = VAR_4;
  else
   VAR_8->intval = VAR_2;
  break;
 case 131:
  VAR_8->intval = VAR_9->usb.charger_online;
  break;
 case 130:
  VAR_8->intval = VAR_9->usb.charger_connected;
  break;
 case 128:
  VAR_10 = FUNC_1(VAR_9);
  if (VAR_10 >= 0)
   VAR_9->usb.charger_voltage = VAR_10;
  VAR_8->intval = VAR_9->usb.charger_voltage * 1000;
  break;
 case 129:




  VAR_9->usb.cv_active = FUNC_2(VAR_9);
  VAR_8->intval = VAR_9->usb.cv_active;
  break;
 case 133:
  VAR_10 = FUNC_0(VAR_9);
  if (VAR_10 >= 0)
   VAR_9->usb.charger_current = VAR_10;
  VAR_8->intval = VAR_9->usb.charger_current * 1000;
  break;
 case 134:




  if (VAR_9->flags.vbus_collapse)
   VAR_8->intval = 1;
  else
   VAR_8->intval = 0;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
