
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct TYPE_3__ {int v_mask; int reg_b; } ;
struct TYPE_4__ {int sel_mask; int reg; } ;
struct da9055_regulator_info {TYPE_1__ volt; TYPE_2__ conf; } ;
struct da9055_regulator {scalar_t__ reg_rselect; int da9055; struct da9055_regulator_info* info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct da9055_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*,int,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2,
      int VAR_3)
{
 struct da9055_regulator *VAR_4 = FUNC_1(VAR_2);
 struct da9055_regulator_info *VAR_5 = VAR_4->info;
 int VAR_6;


 if (VAR_4->reg_rselect == VAR_1) {
  VAR_6 = FUNC_0(VAR_4->da9055, VAR_5->conf.reg,
     VAR_5->conf.sel_mask, VAR_0);
  if (VAR_6 < 0)
   return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_0(VAR_4->da9055, VAR_5->volt.reg_b,
     VAR_5->volt.v_mask, VAR_6);
}
