
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union power_supply_propval {int dummy; } power_supply_propval ;
struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;
struct pm860x_battery_info {int start_soc; int dev; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct pm860x_battery_info*,int *) ;
 int FUNC_1 (int ,char*,int) ;
 struct pm860x_battery_info* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_2,
           enum power_supply_property VAR_3,
           const union power_supply_propval *VAR_4)
{
 struct pm860x_battery_info *VAR_5 = FUNC_2(VAR_2->dev.parent);

 switch (VAR_3) {
 case 128:
  FUNC_0(VAR_5, &VAR_1);
  VAR_5->start_soc = 100;
  FUNC_1(VAR_5->dev, "chg done, update soc = %d\n",
   VAR_5->start_soc);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
