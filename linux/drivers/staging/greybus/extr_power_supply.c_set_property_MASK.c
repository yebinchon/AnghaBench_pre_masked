
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct gb_power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int FUNC_0 (struct gb_power_supply*,int,int ) ;
 struct gb_power_supply* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_0,
   enum power_supply_property VAR_1,
   const union power_supply_propval *VAR_2)
{
 struct gb_power_supply *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_1, VAR_2->intval);
}
