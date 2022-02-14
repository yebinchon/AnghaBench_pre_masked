
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int strval; int intval; } ;
struct power_supply {int dummy; } ;
struct bq24190_dev_info {int dev; int model_name; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_1 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_2 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_3 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_4 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_5 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_6 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_7 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_8 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_9 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_10 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_11 (struct bq24190_dev_info*,union power_supply_propval*) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 struct bq24190_dev_info* FUNC_16 (struct power_supply*) ;

__attribute__((used)) static int FUNC_17(struct power_supply *VAR_3,
  enum power_supply_property VAR_4, union power_supply_propval *VAR_5)
{
 struct bq24190_dev_info *VAR_6 = FUNC_16(VAR_3);
 int VAR_7;

 FUNC_12(VAR_6->dev, "prop: %d\n", VAR_4);

 VAR_7 = FUNC_13(VAR_6->dev);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_4) {
 case 141:
  VAR_7 = FUNC_1(VAR_6, VAR_5);
  break;
 case 136:
  VAR_7 = FUNC_4(VAR_6, VAR_5);
  break;
 case 132:
  VAR_7 = FUNC_6(VAR_6, VAR_5);
  break;
 case 129:
  VAR_7 = FUNC_8(VAR_6, VAR_5);
  break;
 case 128:
  VAR_7 = FUNC_9(VAR_6, VAR_5);
  break;
 case 131:
  VAR_7 = FUNC_7(VAR_6, VAR_5);
  break;
 case 142:
  VAR_7 = FUNC_0(VAR_6, VAR_5);
  break;
 case 140:
  VAR_7 = FUNC_2(VAR_6, VAR_5);
  break;
 case 139:
  VAR_7 = FUNC_3(VAR_6, VAR_5);
  break;
 case 138:
  VAR_7 = FUNC_10(VAR_6, VAR_5);
  break;
 case 137:
  VAR_7 = FUNC_11(VAR_6, VAR_5);
  break;
 case 135:
  VAR_7 = FUNC_5(VAR_6, VAR_5);
  break;
 case 130:
  VAR_5->intval = VAR_2;
  VAR_7 = 0;
  break;
 case 133:
  VAR_5->strval = VAR_6->model_name;
  VAR_7 = 0;
  break;
 case 134:
  VAR_5->strval = VAR_0;
  VAR_7 = 0;
  break;
 default:
  VAR_7 = -VAR_1;
 }

 FUNC_14(VAR_6->dev);
 FUNC_15(VAR_6->dev);

 return VAR_7;
}
