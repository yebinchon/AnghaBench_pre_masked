
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;
struct pv88060_regulator {int conf; } ;



 unsigned int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pv88060_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_4)
{
 struct pv88060_regulator *VAR_5 = FUNC_0(VAR_4);
 unsigned int VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_7 = FUNC_1(VAR_4->regmap, VAR_5->conf, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_6 & VAR_0) {
 case 128:
  VAR_8 = VAR_1;
  break;
 case 130:
  VAR_8 = VAR_2;
  break;
 case 129:
  VAR_8 = VAR_3;
  break;
 }

 return VAR_8;
}
