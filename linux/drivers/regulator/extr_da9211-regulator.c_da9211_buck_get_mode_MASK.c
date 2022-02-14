
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct da9211 {int regmap; } ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct da9211* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_3(struct regulator_dev *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_4);
 struct da9211 *VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_8 = FUNC_2(VAR_6->regmap, VAR_0+VAR_5, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_7 & 0x03) {
 case 128:
  VAR_9 = VAR_1;
  break;
 case 130:
  VAR_9 = VAR_2;
  break;
 case 129:
  VAR_9 = VAR_3;
  break;
 }

 return VAR_9;
}
