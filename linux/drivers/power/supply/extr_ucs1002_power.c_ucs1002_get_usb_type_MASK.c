
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct ucs1002_info {int regmap; } ;
typedef enum power_supply_usb_type { ____Placeholder_power_supply_usb_type } power_supply_usb_type ;






 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct ucs1002_info *VAR_7,
    union power_supply_propval *VAR_8)
{
 enum power_supply_usb_type VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_7->regmap, VAR_6, &VAR_10);
 if (VAR_11)
  return VAR_11;

 switch (VAR_10 & VAR_0) {
 default:
  VAR_9 = VAR_5;
  break;
 case 128:
  VAR_9 = VAR_3;
  break;
 case 129:
  VAR_9 = VAR_4;
  break;
 case 130:
  VAR_9 = VAR_2;
  break;
 case 131:
  VAR_9 = VAR_1;
  break;
 }

 VAR_8->intval = VAR_9;

 return 0;
}
