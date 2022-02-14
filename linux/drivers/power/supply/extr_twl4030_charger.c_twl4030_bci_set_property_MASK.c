
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct twl4030_bci {int ac_cur; int usb_cur_target; } ;
struct TYPE_3__ {int parent; } ;
struct power_supply {TYPE_2__* desc; TYPE_1__ dev; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;

 int VAR_1 ;
 struct twl4030_bci* FUNC_0 (int ) ;
 int FUNC_1 (struct twl4030_bci*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_2,
        enum power_supply_property VAR_3,
        const union power_supply_propval *VAR_4)
{
 struct twl4030_bci *VAR_5 = FUNC_0(VAR_2->dev.parent);

 switch (VAR_3) {
 case 128:
  if (VAR_2->desc->type == VAR_1)
   VAR_5->usb_cur_target = VAR_4->intval;
  else
   VAR_5->ac_cur = VAR_4->intval;
  FUNC_1(VAR_5);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
