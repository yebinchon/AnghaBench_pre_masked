
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_4,
    enum power_supply_property VAR_5,
    const union power_supply_propval *VAR_6)
{
 int VAR_7;

 switch (VAR_5) {
 case 128:
  VAR_7 = VAR_6->intval;
  if (VAR_7 < 0 || VAR_7 > VAR_1)
   return -VAR_2;
  if (FUNC_0(VAR_0, VAR_7) < 0)
   return -VAR_3;
  break;
 default:
  break;
 }
 return 0;
}
