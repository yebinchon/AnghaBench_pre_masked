
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct regmap {int dummy; } ;
struct max77650_regulator_desc {int regB; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct max77650_regulator_desc* FUNC_1 (struct regulator_dev*) ;
 struct regmap* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regmap*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1)
{
 struct max77650_regulator_desc *VAR_2;
 struct regmap *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = FUNC_2(VAR_1);

 VAR_5 = FUNC_3(VAR_3, VAR_2->regB, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_0(VAR_4);

 return VAR_6 != VAR_0;
}
