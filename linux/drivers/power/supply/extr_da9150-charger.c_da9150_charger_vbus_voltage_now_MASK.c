
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct da9150_charger {int vbus_chan; } ;


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static int FUNC_1(struct da9150_charger *VAR_0,
        union power_supply_propval *VAR_1)
{
 int VAR_2, VAR_3;


 VAR_3 = FUNC_0(VAR_0->vbus_chan, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;


 VAR_1->intval = VAR_2 * 1000;

 return 0;
}
