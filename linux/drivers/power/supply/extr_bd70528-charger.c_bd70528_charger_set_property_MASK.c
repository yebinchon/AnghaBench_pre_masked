
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct bd70528_psy {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;


 struct bd70528_psy* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct bd70528_psy*,int) ;
 int FUNC_2 (struct bd70528_psy*,int) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_1,
     enum power_supply_property VAR_2,
     const union power_supply_propval *VAR_3)
{
 struct bd70528_psy *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 128:
  return FUNC_2(VAR_4, VAR_3->intval / 1000);
 case 129:
  return FUNC_1(VAR_4, VAR_3->intval / 1000);
 default:
  break;
 }
 return -VAR_0;
}
