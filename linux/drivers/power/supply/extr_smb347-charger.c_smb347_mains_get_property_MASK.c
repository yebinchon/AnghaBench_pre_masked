
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct smb347_charger {int mains_online; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;



 int FUNC_0 (struct smb347_charger*) ;
 int FUNC_1 (struct smb347_charger*) ;
 struct smb347_charger* FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_1,
         enum power_supply_property VAR_2,
         union power_supply_propval *VAR_3)
{
 struct smb347_charger *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 switch (VAR_2) {
 case 128:
  VAR_3->intval = VAR_4->mains_online;
  break;

 case 129:
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  else
   VAR_3->intval = VAR_5;
  break;

 case 130:
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  else
   VAR_3->intval = VAR_5;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
