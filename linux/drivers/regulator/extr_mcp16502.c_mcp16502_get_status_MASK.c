
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_2(VAR_6->regmap, FUNC_0(FUNC_1(VAR_6)),
     &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 & VAR_1)
  return VAR_2;
 else if (VAR_8 & VAR_0)
  return VAR_4;
 else if (!(VAR_8 & VAR_0))
  return VAR_3;

 return VAR_5;
}
