
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct rt5033_battery {int client; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;





 struct rt5033_battery* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct power_supply *VAR_1,
  enum power_supply_property VAR_2,
  union power_supply_propval *VAR_3)
{
 struct rt5033_battery *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 129:
 case 130:
 case 128:
  VAR_3->intval = FUNC_3(VAR_4->client,
         VAR_2);
  break;
 case 131:
  VAR_3->intval = FUNC_2(VAR_4->client);
  break;
 case 132:
  VAR_3->intval = FUNC_1(VAR_4->client);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
