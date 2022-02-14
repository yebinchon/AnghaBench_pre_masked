
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct da9062_regulator {int sleep; int mode; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct da9062_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,unsigned int*) ;

__attribute__((used)) static unsigned FUNC_2(struct regulator_dev *VAR_3)
{
 struct da9062_regulator *VAR_4 = FUNC_0(VAR_3);
 unsigned int VAR_5, VAR_6 = 0;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4->mode, &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_5) {
 default:
 case 130:
  VAR_6 = VAR_0 | VAR_2;

  break;
 case 129:
  return VAR_2;
 case 128:
  return VAR_0;
 case 131:
  return VAR_1;
 }

 VAR_7 = FUNC_1(VAR_4->sleep, &VAR_5);
 if (VAR_7 < 0)
  return 0;

 if (VAR_5)
  VAR_6 &= VAR_2;
 else
  VAR_6 &= VAR_1 | VAR_0;

 return VAR_6;
}
