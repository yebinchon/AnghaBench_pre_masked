
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct TYPE_2__ {int min_volt; int max_volt; int max_curr; } ;
struct tcpm_port {TYPE_1__ pps_data; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;



 struct tcpm_port* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct tcpm_port*,int) ;
 int FUNC_2 (struct tcpm_port*,int) ;
 int FUNC_3 (struct tcpm_port*,union power_supply_propval const*) ;

__attribute__((used)) static int FUNC_4(struct power_supply *VAR_1,
        enum power_supply_property VAR_2,
        const union power_supply_propval *VAR_3)
{
 struct tcpm_port *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 switch (VAR_2) {
 case 129:
  VAR_5 = FUNC_3(VAR_4, VAR_3);
  break;
 case 128:
  if (VAR_3->intval < VAR_4->pps_data.min_volt * 1000 ||
      VAR_3->intval > VAR_4->pps_data.max_volt * 1000)
   VAR_5 = -VAR_0;
  else
   VAR_5 = FUNC_2(VAR_4, VAR_3->intval / 1000);
  break;
 case 130:
  if (VAR_3->intval > VAR_4->pps_data.max_curr * 1000)
   VAR_5 = -VAR_0;
  else
   VAR_5 = FUNC_1(VAR_4, VAR_3->intval / 1000);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
