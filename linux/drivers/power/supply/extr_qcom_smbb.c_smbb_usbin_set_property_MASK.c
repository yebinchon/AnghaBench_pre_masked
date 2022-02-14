
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct smbb_charger {int dummy; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;

 struct smbb_charger* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct smbb_charger*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_2,
  enum power_supply_property VAR_3,
  const union power_supply_propval *VAR_4)
{
 struct smbb_charger *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 switch (VAR_3) {
 case 128:
  VAR_6 = FUNC_1(VAR_5, VAR_0,
    VAR_4->intval);
  break;
 default:
  VAR_6 = -VAR_1;
  break;
 }

 return VAR_6;
}
