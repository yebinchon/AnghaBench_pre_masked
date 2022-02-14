
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct charger_manager {TYPE_1__* desc; } ;
struct TYPE_2__ {int psy_fuel_gauge; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct power_supply* FUNC_0 (int ) ;
 int FUNC_1 (struct power_supply*,int ,union power_supply_propval*) ;
 int FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct charger_manager *VAR_2, int *VAR_3)
{
 union power_supply_propval VAR_4;
 struct power_supply *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2->desc->psy_fuel_gauge);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5,
    VAR_1, &VAR_4);
 FUNC_2(VAR_5);
 if (VAR_6)
  return VAR_6;

 *VAR_3 = VAR_4.intval;
 return 0;
}
