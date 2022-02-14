
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct max8903_data {int fault; int ta_in; int usb_in; TYPE_1__* pdata; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int chg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct max8903_data* FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_7,
  enum power_supply_property VAR_8,
  union power_supply_propval *VAR_9)
{
 struct max8903_data *VAR_10 = FUNC_2(VAR_7);

 switch (VAR_8) {
 case 128:
  VAR_9->intval = VAR_6;
  if (FUNC_1(VAR_10->pdata->chg)) {
   if (FUNC_0(VAR_10->pdata->chg) == 0)
    VAR_9->intval = VAR_3;
   else if (VAR_10->usb_in || VAR_10->ta_in)
    VAR_9->intval = VAR_5;
   else
    VAR_9->intval = VAR_4;
  }
  break;
 case 129:
  VAR_9->intval = 0;
  if (VAR_10->usb_in || VAR_10->ta_in)
   VAR_9->intval = 1;
  break;
 case 130:
  VAR_9->intval = VAR_1;
  if (VAR_10->fault)
   VAR_9->intval = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
