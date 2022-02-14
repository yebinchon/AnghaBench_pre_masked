
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct da9055_volt_reg {int v_mask; int reg_b; int reg_a; } ;
struct TYPE_2__ {int sel_mask; int reg; } ;
struct da9055_regulator_info {TYPE_1__ conf; struct da9055_volt_reg volt; } ;
struct da9055_regulator {int da9055; struct da9055_regulator_info* info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct da9055_regulator* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1)
{
 struct da9055_regulator *VAR_2 = FUNC_1(VAR_1);
 struct da9055_regulator_info *VAR_3 = VAR_2->info;
 struct da9055_volt_reg VAR_4 = VAR_3->volt;
 int VAR_5, VAR_6;






 VAR_5 = FUNC_0(VAR_2->da9055, VAR_3->conf.reg);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 &= VAR_3->conf.sel_mask;


 if (VAR_5 == VAR_0)
  VAR_5 = FUNC_0(VAR_2->da9055, VAR_4.reg_a);
 else
  VAR_5 = FUNC_0(VAR_2->da9055, VAR_4.reg_b);

 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = (VAR_5 & VAR_4.v_mask);
 return VAR_6;
}
