
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union power_supply_propval {int dummy; } power_supply_propval ;
struct power_supply {int dummy; } ;
struct bq24190_dev_info {int dev; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;


 int FUNC_0 (struct bq24190_dev_info*,union power_supply_propval const*) ;
 int FUNC_1 (struct bq24190_dev_info*,union power_supply_propval const*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct bq24190_dev_info* FUNC_7 (struct power_supply*) ;

__attribute__((used)) static int FUNC_8(struct power_supply *VAR_1,
  enum power_supply_property VAR_2,
  const union power_supply_propval *VAR_3)
{
 struct bq24190_dev_info *VAR_4 = FUNC_7(VAR_1);
 int VAR_5;

 FUNC_3(VAR_4->dev, "warning: /sys/class/power_supply/bq24190-battery is deprecated\n");
 FUNC_2(VAR_4->dev, "prop: %d\n", VAR_2);

 VAR_5 = FUNC_4(VAR_4->dev);
 if (VAR_5 < 0)
  return VAR_5;

 switch (VAR_2) {
 case 129:
  VAR_5 = FUNC_0(VAR_4, VAR_3);
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_4, VAR_3);
  break;
 default:
  VAR_5 = -VAR_0;
 }

 FUNC_5(VAR_4->dev);
 FUNC_6(VAR_4->dev);

 return VAR_5;
}
