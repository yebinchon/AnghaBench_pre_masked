
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; int strval; } ;
struct TYPE_2__ {int technology; int voltage_min_design; int voltage_max_design; int charge_full_design; int name; } ;
struct smb347_charger_platform_data {TYPE_1__ battery_info; } ;
struct smb347_charger {struct smb347_charger_platform_data* pdata; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 struct smb347_charger* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct smb347_charger*) ;
 int FUNC_2 (struct smb347_charger*) ;
 int FUNC_3 (struct smb347_charger*) ;
 int FUNC_4 (struct smb347_charger*) ;

__attribute__((used)) static int FUNC_5(struct power_supply *VAR_5,
           enum power_supply_property VAR_6,
           union power_supply_propval *VAR_7)
{
 struct smb347_charger *VAR_8 = FUNC_0(VAR_5);
 const struct smb347_charger_platform_data *VAR_9 = VAR_8->pdata;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 switch (VAR_6) {
 case 131:
  VAR_10 = FUNC_2(VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_7->intval = VAR_10;
  break;

 case 133:
  if (!FUNC_3(VAR_8))
   return -VAR_1;





  switch (FUNC_1(VAR_8)) {
  case 1:
   VAR_7->intval = VAR_4;
   break;
  case 2:
   VAR_7->intval = VAR_2;
   break;
  default:
   VAR_7->intval = VAR_3;
   break;
  }
  break;

 case 130:
  VAR_7->intval = VAR_9->battery_info.technology;
  break;

 case 128:
  VAR_7->intval = VAR_9->battery_info.voltage_min_design;
  break;

 case 129:
  VAR_7->intval = VAR_9->battery_info.voltage_max_design;
  break;

 case 134:
  VAR_7->intval = VAR_9->battery_info.charge_full_design;
  break;

 case 132:
  VAR_7->strval = VAR_9->battery_info.name;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
