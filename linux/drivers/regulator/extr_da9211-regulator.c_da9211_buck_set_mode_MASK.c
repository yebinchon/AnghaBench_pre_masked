
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct da9211 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;



 struct da9211* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_4,
     unsigned int VAR_5)
{
 int VAR_6 = FUNC_1(VAR_4);
 struct da9211 *VAR_7 = FUNC_0(VAR_4);
 int VAR_8 = 0;

 switch (VAR_5) {
 case 130:
  VAR_8 = VAR_2;
  break;
 case 129:
  VAR_8 = VAR_0;
  break;
 case 128:
  VAR_8 = VAR_1;
  break;
 }

 return FUNC_2(VAR_7->regmap, VAR_3+VAR_6,
     0x03, VAR_8);
}
