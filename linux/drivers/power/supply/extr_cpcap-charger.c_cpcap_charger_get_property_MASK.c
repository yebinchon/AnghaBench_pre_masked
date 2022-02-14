
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;
struct cpcap_charger_ddata {int status; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct cpcap_charger_ddata*) ;
 int FUNC_1 (struct cpcap_charger_ddata*) ;
 struct cpcap_charger_ddata* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_2,
          enum power_supply_property VAR_3,
          union power_supply_propval *VAR_4)
{
 struct cpcap_charger_ddata *VAR_5 = FUNC_2(VAR_2->dev.parent);

 switch (VAR_3) {
 case 129:
  VAR_4->intval = VAR_5->status;
  break;
 case 128:
  if (VAR_5->status == VAR_1)
   VAR_4->intval = FUNC_1(VAR_5) *
    1000;
  else
   VAR_4->intval = 0;
  break;
 case 131:
  if (VAR_5->status == VAR_1)
   VAR_4->intval = FUNC_0(VAR_5) *
    1000;
  else
   VAR_4->intval = 0;
  break;
 case 130:
  VAR_4->intval = VAR_5->status == VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
