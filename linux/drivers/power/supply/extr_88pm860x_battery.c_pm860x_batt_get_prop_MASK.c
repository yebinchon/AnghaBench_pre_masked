
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;
struct pm860x_battery_info {int present; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int FUNC_0 (struct pm860x_battery_info*,int*) ;
 int FUNC_1 (struct pm860x_battery_info*,int*) ;
 struct pm860x_battery_info* FUNC_2 (int ) ;
 int FUNC_3 (struct pm860x_battery_info*,int*) ;
 int FUNC_4 (struct pm860x_battery_info*,int*) ;
 int FUNC_5 (struct pm860x_battery_info*,int ,int*) ;

__attribute__((used)) static int FUNC_6(struct power_supply *VAR_3,
    enum power_supply_property VAR_4,
    union power_supply_propval *VAR_5)
{
 struct pm860x_battery_info *VAR_6 = FUNC_2(VAR_3->dev.parent);
 int VAR_7;
 int VAR_8;

 switch (VAR_4) {
 case 132:
  VAR_5->intval = VAR_6->present;
  break;
 case 134:
  VAR_8 = FUNC_0(VAR_6, &VAR_7);
  if (VAR_8)
   return VAR_8;
  if (VAR_7 < 0)
   VAR_7 = 0;
  else if (VAR_7 > 100)
   VAR_7 = 100;

  if (!VAR_6->present)
   VAR_7 = 100;
  VAR_5->intval = VAR_7;
  break;
 case 131:
  VAR_5->intval = VAR_2;
  break;
 case 128:

  VAR_8 = FUNC_5(VAR_6, VAR_1, &VAR_7);
  if (VAR_8)
   return VAR_8;
  VAR_5->intval = VAR_7 * 1000;
  break;
 case 129:

  VAR_8 = FUNC_1(VAR_6, &VAR_7);
  if (VAR_8)
   return VAR_8;
  VAR_5->intval = VAR_7 * 1000;
  break;
 case 133:
  VAR_8 = FUNC_3(VAR_6, &VAR_7);
  if (VAR_8)
   return VAR_8;
  VAR_5->intval = VAR_7;
  break;
 case 130:
  if (VAR_6->present) {
   VAR_8 = FUNC_4(VAR_6, &VAR_7);
   if (VAR_8)
    return VAR_8;
   VAR_7 *= 10;
  } else {

   VAR_7 = 250;
  }
  VAR_5->intval = VAR_7;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
