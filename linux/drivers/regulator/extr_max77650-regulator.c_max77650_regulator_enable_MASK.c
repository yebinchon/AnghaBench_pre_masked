
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct regmap {int dummy; } ;
struct max77650_regulator_desc {int regB; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct max77650_regulator_desc* FUNC_0 (struct regulator_dev*) ;
 struct regmap* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2)
{
 struct max77650_regulator_desc *VAR_3;
 struct regmap *VAR_4;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_1(VAR_2);

 return FUNC_2(VAR_4, VAR_3->regB,
      VAR_1,
      VAR_0);
}
