
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct da9055_volt_reg {int sl_shift; int reg_b; } ;
struct da9055_regulator_info {struct da9055_volt_reg volt; } ;
struct da9055_regulator {int da9055; struct da9055_regulator_info* info; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,int ,int,int) ;
 struct da9055_regulator* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2, unsigned int VAR_3)
{
 struct da9055_regulator *VAR_4 = FUNC_1(VAR_2);
 struct da9055_regulator_info *VAR_5 = VAR_4->info;
 struct da9055_volt_reg VAR_6 = VAR_5->volt;
 int VAR_7 = 0;

 switch (VAR_3) {
 case 129:
 case 130:
  VAR_7 = VAR_1;
  break;
 case 128:
  VAR_7 = VAR_0;
  break;
 }

 return FUNC_0(VAR_4->da9055, VAR_6.reg_b,
     1 << VAR_6.sl_shift,
     VAR_7 << VAR_6.sl_shift);
}
