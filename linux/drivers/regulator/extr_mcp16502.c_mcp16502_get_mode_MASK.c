
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;


 unsigned int VAR_0 ;


 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct regulator_dev*,int ) ;
 int FUNC_1 (int ,int,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_1(VAR_5->regmap, VAR_8, &VAR_6);
 if (VAR_7)
  return VAR_7;

 switch (VAR_6 & VAR_0) {
 case 128:
  return VAR_4;
 case 129:
  return VAR_2;
 default:
  return VAR_3;
 }
}
