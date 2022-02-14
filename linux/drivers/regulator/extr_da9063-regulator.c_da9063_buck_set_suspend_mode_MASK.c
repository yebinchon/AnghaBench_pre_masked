
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct da9063_regulator {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 struct da9063_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_4, unsigned VAR_5)
{
 struct da9063_regulator *VAR_6 = FUNC_0(VAR_4);
 int VAR_7;

 switch (VAR_5) {
 case 130:
  VAR_7 = VAR_2;
  break;
 case 129:
  VAR_7 = VAR_0;
  break;
 case 128:
  VAR_7 = VAR_1;
  break;
 default:
  return -VAR_3;
 }

 return FUNC_1(VAR_6->mode, VAR_7);
}
