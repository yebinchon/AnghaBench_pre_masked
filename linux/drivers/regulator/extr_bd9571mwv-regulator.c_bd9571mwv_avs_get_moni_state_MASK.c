
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->regmap, VAR_0, &VAR_3);
 if (VAR_4 != 0)
  return VAR_4;

 return VAR_3 & VAR_1;
}
