
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;
struct max8925_power_info {int ac_online; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct max8925_power_info* FUNC_0 (int ) ;
 int FUNC_1 (struct max8925_power_info*,int ) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_3,
          enum power_supply_property VAR_4,
          union power_supply_propval *VAR_5)
{
 struct max8925_power_info *VAR_6 = FUNC_0(VAR_3->dev.parent);
 int VAR_7 = 0;

 switch (VAR_4) {
 case 129:
  VAR_5->intval = VAR_6->ac_online;
  break;
 case 128:
  if (VAR_6->ac_online) {
   VAR_7 = FUNC_1(VAR_6, VAR_2);
   if (VAR_7 >= 0) {
    VAR_5->intval = VAR_7 * 2000;
    goto out;
   }
  }
  VAR_7 = -VAR_0;
  break;
 default:
  VAR_7 = -VAR_1;
  break;
 }
out:
 return VAR_7;
}
