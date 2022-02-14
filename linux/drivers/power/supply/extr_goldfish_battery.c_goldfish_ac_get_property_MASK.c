
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {void* intval; } ;
struct power_supply {int dummy; } ;
struct goldfish_battery_data {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct goldfish_battery_data*,int ) ;



 struct goldfish_battery_data* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_4,
   enum power_supply_property VAR_5,
   union power_supply_propval *VAR_6)
{
 struct goldfish_battery_data *VAR_7 = FUNC_1(VAR_4);
 int VAR_8 = 0;

 switch (VAR_5) {
 case 129:
  VAR_6->intval = FUNC_0(VAR_7, VAR_0);
  break;
 case 128:
  VAR_6->intval = FUNC_0(VAR_7, VAR_2);
  break;
 case 130:
  VAR_6->intval = FUNC_0(VAR_7, VAR_1);
  break;
 default:
  VAR_8 = -VAR_3;
  break;
 }
 return VAR_8;
}
