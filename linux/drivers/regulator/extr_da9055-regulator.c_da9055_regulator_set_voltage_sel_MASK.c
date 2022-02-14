
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct TYPE_4__ {int v_mask; int reg_b; int reg_a; } ;
struct TYPE_3__ {int sel_mask; int reg; } ;
struct da9055_regulator_info {TYPE_2__ volt; TYPE_1__ conf; } ;
struct da9055_regulator {scalar_t__ reg_rselect; int da9055; struct da9055_regulator_info* info; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int,unsigned int) ;
 struct da9055_regulator* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3,
         unsigned int VAR_4)
{
 struct da9055_regulator *VAR_5 = FUNC_2(VAR_3);
 struct da9055_regulator_info *VAR_6 = VAR_5->info;
 int VAR_7;





 if (VAR_5->reg_rselect == VAR_2) {

  VAR_7 = FUNC_1(VAR_5->da9055, VAR_6->conf.reg,
     VAR_6->conf.sel_mask, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;


  return FUNC_1(VAR_5->da9055, VAR_6->volt.reg_a,
      VAR_6->volt.v_mask, VAR_4);
 }






 VAR_7 = FUNC_0(VAR_5->da9055, VAR_6->conf.reg);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 &= VAR_6->conf.sel_mask;


 if (VAR_7 == VAR_0)
  return FUNC_1(VAR_5->da9055, VAR_6->volt.reg_a,
      VAR_6->volt.v_mask, VAR_4);
 else
  return FUNC_1(VAR_5->da9055, VAR_6->volt.reg_b,
      VAR_6->volt.v_mask, VAR_4);
}
