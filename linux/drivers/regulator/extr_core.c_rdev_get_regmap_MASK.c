
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {struct regmap* regmap; } ;
struct regmap {int dummy; } ;



struct regmap *FUNC_0(struct regulator_dev *VAR_0)
{
 return VAR_0->regmap;
}
