
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct da9150_charger {struct power_supply* supply_online; } ;



__attribute__((used)) static inline int FUNC_0(struct da9150_charger *VAR_0,
            struct power_supply *VAR_1,
            union power_supply_propval *VAR_2)
{
 VAR_2->intval = (VAR_1 == VAR_0->supply_online) ? 1 : 0;

 return 0;
}
