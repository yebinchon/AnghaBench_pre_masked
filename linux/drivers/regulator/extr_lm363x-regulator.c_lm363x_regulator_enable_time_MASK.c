
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;
typedef enum lm363x_regulator_id { ____Placeholder_lm363x_regulator_id } lm363x_regulator_id ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;




 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int* VAR_9 ;
 int FUNC_0 (struct regulator_dev*) ;
 scalar_t__ FUNC_1 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_10)
{
 enum lm363x_regulator_id VAR_11 = FUNC_0(VAR_10);
 unsigned int VAR_12, VAR_13, VAR_14;

 switch (VAR_11) {
 case 131:
  VAR_13 = VAR_5;
  VAR_14 = VAR_2;
  break;
 case 129:
  VAR_13 = VAR_7;
  VAR_14 = VAR_3;
  break;
 case 128:
  VAR_13 = VAR_8;
  VAR_14 = VAR_3;
  break;
 case 130:
  VAR_13 = VAR_6;
  VAR_14 = VAR_3;
  break;
 default:
  return 0;
 }

 if (FUNC_1(VAR_10->regmap, VAR_13, &VAR_12))
  return -VAR_0;

 VAR_12 = (VAR_12 & VAR_14) >> VAR_4;

 if (VAR_11 == 131)
  return VAR_9[VAR_12];
 else
  return VAR_1 * VAR_12;
}
