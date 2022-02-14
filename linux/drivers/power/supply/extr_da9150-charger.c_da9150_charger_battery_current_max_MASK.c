
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct da9150_charger {int da9150; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct da9150_charger *VAR_1,
           union power_supply_propval *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->da9150, VAR_0);


 VAR_2->intval = VAR_3 * 25000;

 return 0;
}
