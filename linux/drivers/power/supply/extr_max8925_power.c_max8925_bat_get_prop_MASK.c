
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;
struct max8925_power_info {int bat_online; int ac_online; int usb_online; int gpm; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;





 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct max8925_power_info* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct max8925_power_info*,int ) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_13,
    enum power_supply_property VAR_14,
    union power_supply_propval *VAR_15)
{
 struct max8925_power_info *VAR_16 = FUNC_0(VAR_13->dev.parent);
 int VAR_17 = 0;

 switch (VAR_14) {
 case 130:
  VAR_15->intval = VAR_16->bat_online;
  break;
 case 128:
  if (VAR_16->bat_online) {
   VAR_17 = FUNC_2(VAR_16, VAR_6);
   if (VAR_17 >= 0) {
    VAR_15->intval = VAR_17 * 2000;
    VAR_17 = 0;
    break;
   }
  }
  VAR_17 = -VAR_0;
  break;
 case 131:
  if (VAR_16->bat_online) {
   VAR_17 = FUNC_2(VAR_16, VAR_5);
   if (VAR_17 >= 0) {

    VAR_17 = ((VAR_17 * 6250) - 3125) ;
    VAR_15->intval = 0;
    if (VAR_17 > 0)
     VAR_15->intval = VAR_17;
    VAR_17 = 0;
    break;
   }
  }
  VAR_17 = -VAR_0;
  break;
 case 132:
  if (!VAR_16->bat_online) {
   VAR_17 = -VAR_0;
   break;
  }
  VAR_17 = FUNC_1(VAR_16->gpm, VAR_2);
  VAR_17 = (VAR_17 & VAR_4) >> 2;
  switch (VAR_17) {
  case 1:
   VAR_15->intval = VAR_7;
   break;
  case 0:
  case 2:
   VAR_15->intval = VAR_9;
   break;
  case 3:
   VAR_15->intval = VAR_8;
   break;
  }
  VAR_17 = 0;
  break;
 case 129:
  if (!VAR_16->bat_online) {
   VAR_17 = -VAR_0;
   break;
  }
  VAR_17 = FUNC_1(VAR_16->gpm, VAR_2);
  if (VAR_16->usb_online || VAR_16->ac_online) {
   VAR_15->intval = VAR_12;
   if (VAR_17 & VAR_3)
    VAR_15->intval = VAR_10;
  } else
   VAR_15->intval = VAR_11;
  VAR_17 = 0;
  break;
 default:
  VAR_17 = -VAR_1;
  break;
 }
 return VAR_17;
}
