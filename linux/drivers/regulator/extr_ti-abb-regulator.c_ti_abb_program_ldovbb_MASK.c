
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_abb_info {int opp_sel; int vset; } ;
struct ti_abb {int ldovbb_override_mask; int ldovbb_vset_mask; int ldo_base; } ;
struct device {int dummy; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, const struct ti_abb *VAR_1,
      struct ti_abb_info *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_1->ldo_base);

 VAR_3 &= ~(VAR_1->ldovbb_override_mask | VAR_1->ldovbb_vset_mask);

 switch (VAR_2->opp_sel) {
 case 128:
 case 129:
  VAR_3 |= VAR_1->ldovbb_override_mask;
  VAR_3 |= VAR_2->vset << FUNC_0(VAR_1->ldovbb_vset_mask);
  break;
 }

 FUNC_2(VAR_3, VAR_1->ldo_base);
}
