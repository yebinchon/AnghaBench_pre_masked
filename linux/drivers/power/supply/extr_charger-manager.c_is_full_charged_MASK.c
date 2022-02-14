
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {scalar_t__ intval; } ;
struct power_supply {int dummy; } ;
struct charger_manager {struct charger_desc* desc; } ;
struct charger_desc {scalar_t__ fullbatt_full_capacity; int fullbatt_uV; scalar_t__ fullbatt_soc; int psy_fuel_gauge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct charger_manager*,int*) ;
 int FUNC_1 (struct charger_manager*) ;
 struct power_supply* FUNC_2 (int ) ;
 int FUNC_3 (struct power_supply*,int ,union power_supply_propval*) ;
 int FUNC_4 (struct power_supply*) ;

__attribute__((used)) static bool FUNC_5(struct charger_manager *VAR_2)
{
 struct charger_desc *VAR_3 = VAR_2->desc;
 union power_supply_propval VAR_4;
 struct power_supply *VAR_5;
 bool VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8;


 if (!FUNC_1(VAR_2))
  return 0;

 VAR_5 = FUNC_2(VAR_2->desc->psy_fuel_gauge);
 if (!VAR_5)
  return 0;

 if (VAR_3->fullbatt_full_capacity > 0) {
  VAR_4.intval = 0;


  VAR_7 = FUNC_3(VAR_5,
    VAR_1, &VAR_4);
  if (!VAR_7 && VAR_4.intval > VAR_3->fullbatt_full_capacity) {
   VAR_6 = 1;
   goto out;
  }
 }


 if (VAR_3->fullbatt_uV > 0) {
  VAR_7 = FUNC_0(VAR_2, &VAR_8);
  if (!VAR_7 && VAR_8 >= VAR_3->fullbatt_uV) {
   VAR_6 = 1;
   goto out;
  }
 }


 if (VAR_3->fullbatt_soc > 0) {
  VAR_4.intval = 0;

  VAR_7 = FUNC_3(VAR_5,
    VAR_0, &VAR_4);
  if (!VAR_7 && VAR_4.intval >= VAR_3->fullbatt_soc) {
   VAR_6 = 1;
   goto out;
  }
 }

out:
 FUNC_4(VAR_5);
 return VAR_6;
}
