
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_abb_reg {int fbb_sel_mask; int rbb_sel_mask; int opp_sel_mask; int opp_change_mask; } ;
struct ti_abb_info {int opp_sel; } ;
struct ti_abb {scalar_t__ ldo_base; int control_reg; int setup_reg; struct ti_abb_reg* regs; } ;
struct device {int dummy; } ;
struct regulator_dev {struct device dev; } ;



 int VAR_0 ;

 int FUNC_0 (struct device*,struct ti_abb*) ;
 int FUNC_1 (struct device*,struct ti_abb*,struct ti_abb_info*) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct device*,struct ti_abb*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1, struct ti_abb *VAR_2,
     struct ti_abb_info *VAR_3)
{
 const struct ti_abb_reg *VAR_4 = VAR_2->regs;
 struct device *VAR_5 = &VAR_1->dev;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_2);
 if (VAR_6)
  goto out;

 FUNC_2(VAR_4->fbb_sel_mask | VAR_4->rbb_sel_mask, 0, VAR_2->setup_reg);

 switch (VAR_3->opp_sel) {
 case 128:
  FUNC_2(VAR_4->rbb_sel_mask, 1, VAR_2->setup_reg);
  break;
 case 129:
  FUNC_2(VAR_4->fbb_sel_mask, 1, VAR_2->setup_reg);
  break;
 }


 FUNC_2(VAR_4->opp_sel_mask, VAR_3->opp_sel, VAR_2->control_reg);






 if (VAR_2->ldo_base && VAR_3->opp_sel != VAR_0)
  FUNC_1(VAR_5, VAR_2, VAR_3);


 FUNC_2(VAR_4->opp_change_mask, 1, VAR_2->control_reg);


 VAR_6 = FUNC_3(VAR_5, VAR_2);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_0(VAR_5, VAR_2);
 if (VAR_6)
  goto out;






 if (VAR_2->ldo_base && VAR_3->opp_sel == VAR_0)
  FUNC_1(VAR_5, VAR_2, VAR_3);

out:
 return VAR_6;
}
