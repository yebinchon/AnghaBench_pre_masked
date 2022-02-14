
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct da9062_regulator {int sleep; } ;


 int VAR_0 ;


 struct da9062_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1, unsigned VAR_2)
{
 struct da9062_regulator *VAR_3 = FUNC_0(VAR_1);
 unsigned VAR_4;

 switch (VAR_2) {
 case 129:
  VAR_4 = 0;
  break;
 case 128:
  VAR_4 = 1;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_3->sleep, VAR_4);
}
