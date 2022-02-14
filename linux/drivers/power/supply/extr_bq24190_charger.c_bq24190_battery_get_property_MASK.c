
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct bq24190_dev_info {int dev; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_1 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_2 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_3 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct bq24190_dev_info* FUNC_9 (struct power_supply*) ;

__attribute__((used)) static int FUNC_10(struct power_supply *VAR_3,
  enum power_supply_property VAR_4, union power_supply_propval *VAR_5)
{
 struct bq24190_dev_info *VAR_6 = FUNC_9(VAR_3);
 int VAR_7;

 FUNC_5(VAR_6->dev, "warning: /sys/class/power_supply/bq24190-battery is deprecated\n");
 FUNC_4(VAR_6->dev, "prop: %d\n", VAR_4);

 VAR_7 = FUNC_6(VAR_6->dev);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_4) {
 case 130:
  VAR_7 = FUNC_2(VAR_6, VAR_5);
  break;
 case 133:
  VAR_7 = FUNC_0(VAR_6, VAR_5);
  break;
 case 132:
  VAR_7 = FUNC_1(VAR_6, VAR_5);
  break;
 case 129:

  VAR_5->intval = VAR_2;
  VAR_7 = 0;
  break;
 case 128:
  VAR_7 = FUNC_3(VAR_6, VAR_5);
  break;
 case 131:
  VAR_5->intval = VAR_1;
  VAR_7 = 0;
  break;
 default:
  VAR_7 = -VAR_0;
 }

 FUNC_7(VAR_6->dev);
 FUNC_8(VAR_6->dev);

 return VAR_7;
}
