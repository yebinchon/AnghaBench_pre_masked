
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct regmap_field {int dummy; } ;
struct da9063_regulator {struct regmap_field* sleep; struct regmap_field* suspend_sleep; struct regmap_field* suspend; struct regmap_field* mode; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct da9063_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regmap_field*,unsigned int*) ;

__attribute__((used)) static unsigned FUNC_2(struct regulator_dev *VAR_3)
{
 struct da9063_regulator *VAR_4 = FUNC_0(VAR_3);
 struct regmap_field *VAR_5;
 unsigned int VAR_6, VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4->mode, &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_6) {
 default:
 case 130:
  VAR_7 = VAR_0 | VAR_2;

  break;
 case 129:
  return VAR_2;
 case 128:
  return VAR_0;
 case 131:
  return VAR_1;
 }


 VAR_8 = FUNC_1(VAR_4->suspend, &VAR_6);
 if (VAR_8 < 0)
  return 0;


 if (VAR_6)
  VAR_5 = VAR_4->suspend_sleep;
 else
  VAR_5 = VAR_4->sleep;

 VAR_8 = FUNC_1(VAR_5, &VAR_6);
 if (VAR_8 < 0)
  return 0;

 if (VAR_6)
  VAR_7 &= VAR_2;
 else
  VAR_7 &= VAR_1 | VAR_0;

 return VAR_7;
}
