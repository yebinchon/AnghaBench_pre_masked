
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;
struct pv88080_regulator {int mode_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 struct pv88080_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_5,
     unsigned int VAR_6)
{
 struct pv88080_regulator *VAR_7 = FUNC_0(VAR_5);
 int VAR_8 = 0;

 switch (VAR_6) {
 case 130:
  VAR_8 = VAR_4;
  break;
 case 129:
  VAR_8 = VAR_2;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_5->regmap, VAR_7->mode_reg,
     VAR_1, VAR_8);
}
