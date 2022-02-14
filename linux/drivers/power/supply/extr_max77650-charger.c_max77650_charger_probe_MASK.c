
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_config {struct max77650_charger_data* drv_data; int of_node; } ;
struct power_supply {int dummy; } ;
struct device {int of_node; struct device* parent; } ;
struct platform_device {struct device dev; } ;
struct max77650_charger_data {struct device* dev; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct power_supply*) ;
 int FUNC_2 (struct device*,int *) ;
 struct max77650_charger_data* FUNC_3 (struct device*,int,int ) ;
 struct power_supply* FUNC_4 (struct device*,int *,struct power_supply_config*) ;
 int FUNC_5 (struct device*,int,int ,int ,char*,struct max77650_charger_data*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct max77650_charger_data*) ;
 int FUNC_7 (struct max77650_charger_data*,unsigned int) ;
 int FUNC_8 (struct max77650_charger_data*,unsigned int) ;
 int FUNC_9 (int ,char*,unsigned int*) ;
 int FUNC_10 (struct platform_device*,char*) ;
 int FUNC_11 (struct platform_device*,struct max77650_charger_data*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_6)
{
 struct power_supply_config VAR_7 = {};
 struct max77650_charger_data *VAR_8;
 struct power_supply *VAR_9;
 struct device *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15;

 VAR_10 = &VAR_6->dev;
 VAR_11 = VAR_10->parent;

 VAR_8 = FUNC_3(VAR_10, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_11(VAR_6, VAR_8);

 VAR_8->map = FUNC_2(VAR_11, ((void*)0));
 if (!VAR_8->map)
  return -VAR_0;

 VAR_8->dev = VAR_10;

 VAR_7.of_node = VAR_10->of_node;
 VAR_7.drv_data = VAR_8;

 VAR_13 = FUNC_10(VAR_6, "CHG");
 if (VAR_13 < 0)
  return VAR_13;

 VAR_14 = FUNC_10(VAR_6, "CHGIN");
 if (VAR_14 < 0)
  return VAR_14;

 VAR_12 = FUNC_5(VAR_10, VAR_13,
       VAR_5,
       VAR_3, "chg", VAR_8);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_5(VAR_10, VAR_14,
       VAR_5,
       VAR_3, "chgin", VAR_8);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_9 = FUNC_4(VAR_10,
          &VAR_4, &VAR_7);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_12 = FUNC_9(VAR_10->of_node,
      "input-voltage-min-microvolt", &VAR_15);
 if (VAR_12 == 0) {
  VAR_12 = FUNC_8(VAR_8, VAR_15);
  if (VAR_12)
   return VAR_12;
 }

 VAR_12 = FUNC_9(VAR_10->of_node,
      "input-current-limit-microamp", &VAR_15);
 if (VAR_12 == 0) {
  VAR_12 = FUNC_7(VAR_8, VAR_15);
  if (VAR_12)
   return VAR_12;
 }

 return FUNC_6(VAR_8);
}
