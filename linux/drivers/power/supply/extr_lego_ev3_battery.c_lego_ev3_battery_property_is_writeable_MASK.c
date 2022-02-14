
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct lego_ev3_battery {scalar_t__ technology; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct lego_ev3_battery* FUNC_0 (struct power_supply*) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_2,
        enum power_supply_property VAR_3)
{
 struct lego_ev3_battery *VAR_4 = FUNC_0(VAR_2);

 return VAR_3 == VAR_0 &&
  VAR_4->technology == VAR_1;
}
