
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct power_supply_config {int of_node; struct regmap* drv_data; } ;
struct power_supply {int dummy; } ;
struct device {int of_node; } ;


 int FUNC_0 (struct power_supply*) ;
 int VAR_0 ;
 struct power_supply* FUNC_1 (struct device*,int *,struct power_supply_config*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct regmap *VAR_2)
{
 struct power_supply *VAR_3;
 struct power_supply_config VAR_4 = {
  .drv_data = VAR_2,
  .of_node = VAR_1->of_node,
 };

 VAR_3 = FUNC_1(VAR_1, &VAR_0, &VAR_4);

 return FUNC_0(VAR_3);
}
