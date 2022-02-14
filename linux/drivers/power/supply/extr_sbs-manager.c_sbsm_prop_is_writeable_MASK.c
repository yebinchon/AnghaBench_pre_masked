
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbsm_data {scalar_t__ is_ltc1760; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 struct sbsm_data* FUNC_0 (struct power_supply*) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_1,
      enum power_supply_property VAR_2)
{
 struct sbsm_data *VAR_3 = FUNC_0(VAR_1);

 return (VAR_2 == VAR_0) && VAR_3->is_ltc1760;
}
