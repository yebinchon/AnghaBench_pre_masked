
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct tcpm_port {int usb_type; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;







 struct tcpm_port* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct tcpm_port*,union power_supply_propval*) ;
 int FUNC_2 (struct tcpm_port*,union power_supply_propval*) ;
 int FUNC_3 (struct tcpm_port*,union power_supply_propval*) ;
 int FUNC_4 (struct tcpm_port*,union power_supply_propval*) ;
 int FUNC_5 (struct tcpm_port*,union power_supply_propval*) ;
 int FUNC_6 (struct tcpm_port*,union power_supply_propval*) ;

__attribute__((used)) static int FUNC_7(struct power_supply *VAR_1,
        enum power_supply_property VAR_2,
        union power_supply_propval *VAR_3)
{
 struct tcpm_port *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;

 switch (VAR_2) {
 case 131:
  VAR_3->intval = VAR_4->usb_type;
  break;
 case 132:
  VAR_5 = FUNC_3(VAR_4, VAR_3);
  break;
 case 129:
  VAR_5 = FUNC_5(VAR_4, VAR_3);
  break;
 case 130:
  VAR_5 = FUNC_4(VAR_4, VAR_3);
  break;
 case 128:
  VAR_5 = FUNC_6(VAR_4, VAR_3);
  break;
 case 134:
  VAR_5 = FUNC_1(VAR_4, VAR_3);
  break;
 case 133:
  VAR_5 = FUNC_2(VAR_4, VAR_3);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
