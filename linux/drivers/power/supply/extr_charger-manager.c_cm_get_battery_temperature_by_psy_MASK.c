
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union power_supply_propval {int dummy; } power_supply_propval ;
struct power_supply {int dummy; } ;
struct charger_manager {TYPE_1__* desc; } ;
struct TYPE_2__ {int psy_fuel_gauge; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct power_supply* FUNC_0 (int ) ;
 int FUNC_1 (struct power_supply*,int ,union power_supply_propval*) ;
 int FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct charger_manager *VAR_2,
     int *VAR_3)
{
 struct power_supply *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2->desc->psy_fuel_gauge);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4,
    VAR_1,
    (union power_supply_propval *)VAR_3);
 FUNC_2(VAR_4);

 return VAR_5;
}
