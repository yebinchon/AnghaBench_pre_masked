
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
 int VAR_2 ;


 struct smbb_charger* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct smbb_charger*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_3,
  enum power_supply_property VAR_4,
  const union power_supply_propval *VAR_5)
{
 struct smbb_charger *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 switch (VAR_4) {
 case 129:
  VAR_7 = FUNC_1(VAR_6, VAR_0, VAR_5->intval);
  break;
 case 128:
  VAR_7 = FUNC_1(VAR_6, VAR_1, VAR_5->intval);
  break;
 default:
  VAR_7 = -VAR_2;
  break;
 }

 return VAR_7;
}
