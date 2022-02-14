
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; int strval; } ;
struct power_supply {int dummy; } ;
struct ds2781_device_info {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ds2781_device_info*,int *) ;
 int FUNC_1 (struct ds2781_device_info*,int *) ;
 int FUNC_2 (struct ds2781_device_info*,int *) ;
 int FUNC_3 (struct ds2781_device_info*,int ,int *) ;
 int FUNC_4 (struct ds2781_device_info*,int *) ;
 int FUNC_5 (struct ds2781_device_info*,int *) ;
 int FUNC_6 (struct ds2781_device_info*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ds2781_device_info* FUNC_7 (struct power_supply*) ;

__attribute__((used)) static int FUNC_8(struct power_supply *VAR_5,
 enum power_supply_property VAR_6,
 union power_supply_propval *VAR_7)
{
 int VAR_8 = 0;
 struct ds2781_device_info *VAR_9 = FUNC_7(VAR_5);

 switch (VAR_6) {
 case 128:
  VAR_8 = FUNC_6(VAR_9, &VAR_7->intval);
  break;

 case 129:
  VAR_8 = FUNC_5(VAR_9, &VAR_7->intval);
  break;

 case 131:
  VAR_7->strval = VAR_4;
  break;

 case 132:
  VAR_7->strval = VAR_3;
  break;

 case 133:
  VAR_8 = FUNC_3(VAR_9, VAR_1, &VAR_7->intval);
  break;

 case 134:
  VAR_8 = FUNC_3(VAR_9, VAR_0, &VAR_7->intval);
  break;

 case 130:
  VAR_8 = FUNC_4(VAR_9, &VAR_7->intval);
  break;

 case 137:
  VAR_8 = FUNC_1(VAR_9, &VAR_7->intval);
  break;

 case 136:
  VAR_8 = FUNC_0(VAR_9, &VAR_7->intval);
  break;

 case 135:
  VAR_8 = FUNC_2(VAR_9, &VAR_7->intval);
  break;

 default:
  VAR_8 = -VAR_2;
 }

 return VAR_8;
}
