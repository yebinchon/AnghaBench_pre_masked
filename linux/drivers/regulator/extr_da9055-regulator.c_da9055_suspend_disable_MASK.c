
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int sel_mask; int reg; } ;
struct da9055_regulator_info {TYPE_1__ conf; } ;
struct da9055_regulator {scalar_t__ reg_rselect; int da9055; struct da9055_regulator_info* info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct da9055_regulator* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2)
{
 struct da9055_regulator *VAR_3 = FUNC_1(VAR_2);
 struct da9055_regulator_info *VAR_4 = VAR_3->info;


 if (VAR_3->reg_rselect == VAR_1)
  return FUNC_0(VAR_3->da9055, VAR_4->conf.reg,
     VAR_4->conf.sel_mask, VAR_0);
 else
  return 0;
}
