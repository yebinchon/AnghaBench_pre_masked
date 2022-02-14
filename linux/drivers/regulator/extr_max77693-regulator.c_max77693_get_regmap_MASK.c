
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct max77693_dev {struct regmap* regmap; struct regmap* regmap_chg; } ;
typedef enum max77693_types { ____Placeholder_max77693_types } max77693_types ;





 int VAR_0 ;

__attribute__((used)) static struct regmap *FUNC_0(enum max77693_types VAR_1,
       struct max77693_dev *VAR_2,
       int VAR_3)
{
 if (VAR_1 == VAR_0)
  return VAR_2->regmap;


 switch (VAR_3) {
 case 129:
 case 128:
  return VAR_2->regmap;
 case 130:
  return VAR_2->regmap_chg;
 default:
  return VAR_2->regmap;
 }
}
