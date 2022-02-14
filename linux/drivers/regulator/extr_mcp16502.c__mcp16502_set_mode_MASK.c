
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct regulator_dev*,unsigned int) ;
 int FUNC_1 (int ,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_4, unsigned int VAR_5,
         unsigned int VAR_6)
{
 int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_5) {
 case 128:
  VAR_7 = VAR_3;
  break;
 case 129:
  VAR_7 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_4->regmap, VAR_8, VAR_1, VAR_7);
 return VAR_8;
}
