
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct TYPE_4__ {int cv_active; int charger_connected; int charger_online; int wd_expired; } ;
struct TYPE_3__ {int ovv; int main_thermal_prot; int mainextchnotok; } ;
struct pm2xxx_charger {TYPE_2__ ac; TYPE_1__ flags; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (struct pm2xxx_charger*) ;
 int FUNC_1 (struct power_supply*) ;
 struct pm2xxx_charger* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_6,
 enum power_supply_property VAR_7,
 union power_supply_propval *VAR_8)
{
 struct pm2xxx_charger *VAR_9;

 VAR_9 = FUNC_2(FUNC_1(VAR_6));

 switch (VAR_7) {
 case 131:
  if (VAR_9->flags.mainextchnotok)
   VAR_8->intval = VAR_5;
  else if (VAR_9->ac.wd_expired)
   VAR_8->intval = VAR_1;
  else if (VAR_9->flags.main_thermal_prot)
   VAR_8->intval = VAR_3;
  else if (VAR_9->flags.ovv)
   VAR_8->intval = VAR_4;
  else
   VAR_8->intval = VAR_2;
  break;
 case 130:
  VAR_8->intval = VAR_9->ac.charger_online;
  break;
 case 129:
  VAR_8->intval = VAR_9->ac.charger_connected;
  break;
 case 128:
  VAR_9->ac.cv_active = FUNC_0(VAR_9);
  VAR_8->intval = VAR_9->ac.cv_active;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
