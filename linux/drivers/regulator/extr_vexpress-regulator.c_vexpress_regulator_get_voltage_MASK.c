
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2 = FUNC_0(VAR_0->regmap, 0, &VAR_1);

 return VAR_2 ? VAR_2 : VAR_1;
}
