
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
typedef int u8 ;
struct TYPE_3__ {int parent; } ;
struct power_supply {TYPE_2__* desc; TYPE_1__ dev; } ;
struct lp8727_platform_data {int (* get_batt_temp ) () ;int (* get_batt_capacity ) () ;int (* get_batt_level ) () ;int (* get_batt_present ) () ;} ;
struct lp8727_chg {int devid; struct lp8727_platform_data* pdata; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
typedef enum lp8727_die_temp { ____Placeholder_lp8727_die_temp } lp8727_die_temp ;
struct TYPE_4__ {int name; } ;


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
 struct lp8727_chg* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct lp8727_chg*,int ,int*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct power_supply *VAR_12,
           enum power_supply_property VAR_13,
           union power_supply_propval *VAR_14)
{
 struct lp8727_chg *VAR_15 = FUNC_0(VAR_12->dev.parent);
 struct lp8727_platform_data *VAR_16 = VAR_15->pdata;
 enum lp8727_die_temp VAR_17;
 u8 VAR_18;

 switch (VAR_13) {
 case 130:
  if (!FUNC_1(VAR_12->desc->name, VAR_15->devid)) {
   VAR_14->intval = VAR_10;
   return 0;
  }

  FUNC_3(VAR_15, VAR_2, &VAR_18);

  VAR_14->intval = (VAR_18 & VAR_1) == VAR_4 ?
    VAR_11 :
    VAR_9;
  break;
 case 132:
  FUNC_3(VAR_15, VAR_3, &VAR_18);
  VAR_17 = (VAR_18 & VAR_6) >> VAR_5;

  VAR_14->intval = FUNC_2(VAR_17) ?
   VAR_8 :
   VAR_7;
  break;
 case 131:
  if (!VAR_16)
   return -VAR_0;

  if (VAR_16->get_batt_present)
   VAR_14->intval = VAR_16->get_batt_present();
  break;
 case 128:
  if (!VAR_16)
   return -VAR_0;

  if (VAR_16->get_batt_level)
   VAR_14->intval = VAR_16->get_batt_level();
  break;
 case 133:
  if (!VAR_16)
   return -VAR_0;

  if (VAR_16->get_batt_capacity)
   VAR_14->intval = VAR_16->get_batt_capacity();
  break;
 case 129:
  if (!VAR_16)
   return -VAR_0;

  if (VAR_16->get_batt_temp)
   VAR_14->intval = VAR_16->get_batt_temp();
  break;
 default:
  break;
 }

 return 0;
}
