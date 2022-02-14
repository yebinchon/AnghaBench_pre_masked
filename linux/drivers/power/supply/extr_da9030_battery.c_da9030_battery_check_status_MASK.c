
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct da9030_charger {scalar_t__ is_on; scalar_t__ chdet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct da9030_charger *VAR_3,
        union power_supply_propval *VAR_4)
{
 if (VAR_3->chdet) {
  if (VAR_3->is_on)
   VAR_4->intval = VAR_0;
  else
   VAR_4->intval = VAR_2;
 } else {
  VAR_4->intval = VAR_1;
 }
}
