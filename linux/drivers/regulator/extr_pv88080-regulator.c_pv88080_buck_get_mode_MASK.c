
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;
struct pv88080_regulator {int mode_reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pv88080_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_5)
{
 struct pv88080_regulator *VAR_6 = FUNC_0(VAR_5);
 unsigned int VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_8 = FUNC_1(VAR_5->regmap, VAR_6->mode_reg, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_7 & VAR_1) {
 case 128:
  VAR_9 = VAR_2;
  break;
 case 130:
  VAR_9 = VAR_3;
  break;
 case 129:
  VAR_9 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 return VAR_9;
}
