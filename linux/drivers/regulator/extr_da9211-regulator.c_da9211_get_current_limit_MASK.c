
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct da9211 {int chip_id; int regmap; } ;



 int VAR_0 ;


 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 struct da9211* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_5);
 struct da9211 *VAR_7 = FUNC_0(VAR_5);
 unsigned int VAR_8;
 int VAR_9;
 const int *VAR_10;

 switch (VAR_7->chip_id) {
 case 130:
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_10 = VAR_3;
  break;
 case 128:
  VAR_10 = VAR_4;
  break;
 default:
  return -VAR_1;
 }

 VAR_9 = FUNC_2(VAR_7->regmap, VAR_0, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;




 VAR_8 = (VAR_8 >> VAR_6*4) & 0x0F;
 return VAR_10[VAR_8];
}
