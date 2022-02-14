
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {char* strval; int intval; } ;
struct power_supply {int dummy; } ;
struct isp1704_charger {char* model; int current_max; int online; int present; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;





 struct isp1704_charger* FUNC_0 (struct power_supply*) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_1,
    enum power_supply_property VAR_2,
    union power_supply_propval *VAR_3)
{
 struct isp1704_charger *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 128:
  VAR_3->intval = VAR_4->present;
  break;
 case 129:
  VAR_3->intval = VAR_4->online;
  break;
 case 132:
  VAR_3->intval = VAR_4->current_max;
  break;
 case 130:
  VAR_3->strval = VAR_4->model;
  break;
 case 131:
  VAR_3->strval = "NXP";
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
