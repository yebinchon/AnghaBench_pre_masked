
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
typedef int u8 ;
struct twl4030_bci {int ac_cur; int usb_cur_target; int ac_is_active; } ;
struct TYPE_3__ {int parent; } ;
struct power_supply {TYPE_2__* desc; TYPE_1__ dev; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;





 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct twl4030_bci* FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 () ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct twl4030_bci*) ;

__attribute__((used)) static int FUNC_7(struct power_supply *VAR_13,
        enum power_supply_property VAR_14,
        union power_supply_propval *VAR_15)
{
 struct twl4030_bci *VAR_16 = FUNC_0(VAR_13->dev.parent);
 int VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_18 = FUNC_6(VAR_16);
 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_13->desc->type == VAR_3)
  VAR_17 = VAR_18 & VAR_12;
 else
  VAR_17 = VAR_18 & VAR_10;
 if (!VAR_17) {
  u8 VAR_20;
  VAR_19 = FUNC_2(VAR_6, &VAR_20);
  if (VAR_19 < 0)
   return VAR_19;
  if (VAR_13->desc->type == VAR_3)
   VAR_17 = VAR_20 & 1;
  else
   VAR_17 = VAR_20 & 2;
  if (VAR_17)

   VAR_18 = VAR_11;
 }

 switch (VAR_14) {
 case 129:
  if (VAR_17)
   VAR_15->intval = FUNC_3(VAR_18);
  else
   VAR_15->intval = VAR_2;
  break;
 case 128:

  if (!VAR_17)
   return -VAR_1;
  if (VAR_13->desc->type == VAR_3) {
   VAR_19 = FUNC_5(VAR_8);
   if (VAR_19 < 0)
    return VAR_19;

   VAR_15->intval = VAR_19 * 6843;
  } else {
   VAR_19 = FUNC_5(VAR_7);
   if (VAR_19 < 0)
    return VAR_19;

   VAR_15->intval = VAR_19 * 9775;
  }
  break;
 case 132:
  if (!VAR_17)
   return -VAR_1;

  VAR_19 = FUNC_4();
  if (VAR_19 < 0)
   return VAR_19;
  VAR_15->intval = VAR_19;
  break;
 case 130:
  VAR_15->intval = VAR_17 &&
   FUNC_3(VAR_18) !=
    VAR_2;
  break;
 case 131:
  VAR_15->intval = -1;
  if (VAR_13->desc->type != VAR_3) {
   if (!VAR_16->ac_is_active)
    VAR_15->intval = VAR_16->ac_cur;
  } else {
   if (VAR_16->ac_is_active)
    VAR_15->intval = VAR_16->usb_cur_target;
  }
  if (VAR_15->intval < 0) {
   u8 VAR_21;

   VAR_15->intval = FUNC_5(VAR_5);
   if (VAR_15->intval < 0)
    return VAR_15->intval;
   VAR_19 = FUNC_2(VAR_4, &VAR_21);
   if (VAR_19 < 0)
    return VAR_19;
   VAR_15->intval = FUNC_1(VAR_15->intval, VAR_21 &
       VAR_9);
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
