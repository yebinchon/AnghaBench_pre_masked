
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int sl_shift; int reg_b; } ;
struct da9055_regulator_info {TYPE_1__ volt; } ;
struct da9055_regulator {int da9055; struct da9055_regulator_info* info; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct da9055_regulator* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_2)
{
 struct da9055_regulator *VAR_3 = FUNC_1(VAR_2);
 struct da9055_regulator_info *VAR_4 = VAR_3->info;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->da9055, VAR_4->volt.reg_b);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_5 >> VAR_4->volt.sl_shift)
  return VAR_1;
 else
  return VAR_0;
}
