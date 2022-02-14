
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct regmap_field {int dummy; } ;
struct da9063_regulator {struct regmap_field* sleep; struct regmap_field* suspend_sleep; struct regmap_field* suspend; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct da9063_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regmap_field*,int*) ;

__attribute__((used)) static unsigned FUNC_2(struct regulator_dev *VAR_2)
{
 struct da9063_regulator *VAR_3 = FUNC_0(VAR_2);
 struct regmap_field *VAR_4;
 int VAR_5, VAR_6;


 VAR_5 = FUNC_1(VAR_3->suspend, &VAR_6);
 if (VAR_5 < 0)
  return 0;


 if (VAR_6)
  VAR_4 = VAR_3->suspend_sleep;
 else
  VAR_4 = VAR_3->sleep;

 VAR_5 = FUNC_1(VAR_4, &VAR_6);
 if (VAR_5 < 0)
  return 0;

 if (VAR_6)
  return VAR_1;
 else
  return VAR_0;
}
