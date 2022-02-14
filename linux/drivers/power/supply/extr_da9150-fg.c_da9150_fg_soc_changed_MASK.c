
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {scalar_t__ intval; } ;
struct da9150_fg {scalar_t__ soc; } ;


 int FUNC_0 (struct da9150_fg*,union power_supply_propval*) ;

__attribute__((used)) static bool FUNC_1(struct da9150_fg *VAR_0)
{
 union power_supply_propval VAR_1;

 FUNC_0(VAR_0, &VAR_1);
 if (VAR_1.intval != VAR_0->soc) {
  VAR_0->soc = VAR_1.intval;
  return 1;
 }

 return 0;
}
