
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct collie_bat {int (* is_present ) (struct collie_bat*) ;int status; int technology; int full_chrg; int bat_max; int bat_min; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct collie_bat*) ;
 int FUNC_1 (struct collie_bat*) ;
 struct collie_bat* FUNC_2 (struct power_supply*) ;
 int FUNC_3 (struct collie_bat*) ;
 int FUNC_4 (struct collie_bat*) ;

__attribute__((used)) static int FUNC_5(struct power_supply *VAR_2,
       enum power_supply_property VAR_3,
       union power_supply_propval *VAR_4)
{
 int VAR_5 = 0;
 struct collie_bat *VAR_6 = FUNC_2(VAR_2);

 if (VAR_6->is_present && !VAR_6->is_present(VAR_6)
   && VAR_3 != 135) {
  return -VAR_1;
 }

 switch (VAR_3) {
 case 134:
  VAR_4->intval = VAR_6->status;
  break;
 case 133:
  VAR_4->intval = VAR_6->technology;
  break;
 case 128:
  VAR_4->intval = FUNC_0(VAR_6);
  break;
 case 131:
  if (VAR_6->full_chrg == -1)
   VAR_4->intval = VAR_6->bat_max;
  else
   VAR_4->intval = VAR_6->full_chrg;
  break;
 case 130:
  VAR_4->intval = VAR_6->bat_max;
  break;
 case 129:
  VAR_4->intval = VAR_6->bat_min;
  break;
 case 132:
  VAR_4->intval = FUNC_1(VAR_6);
  break;
 case 135:
  VAR_4->intval = VAR_6->is_present ? VAR_6->is_present(VAR_6) : 1;
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 return VAR_5;
}
