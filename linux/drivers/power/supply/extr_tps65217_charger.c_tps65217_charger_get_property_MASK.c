
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct tps65217_charger {int online; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 struct tps65217_charger* FUNC_0 (struct power_supply*) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_2,
      enum power_supply_property VAR_3,
      union power_supply_propval *VAR_4)
{
 struct tps65217_charger *VAR_5 = FUNC_0(VAR_2);

 if (VAR_3 == VAR_1) {
  VAR_4->intval = VAR_5->online;
  return 0;
 }
 return -VAR_0;
}
