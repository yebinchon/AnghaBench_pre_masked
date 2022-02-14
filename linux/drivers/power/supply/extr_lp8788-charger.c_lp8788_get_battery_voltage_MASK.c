
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct lp8788_charger {int dummy; } ;


 int FUNC_0 (struct lp8788_charger*,int *) ;

__attribute__((used)) static int FUNC_1(struct lp8788_charger *VAR_0,
    union power_supply_propval *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_1->intval);
}
