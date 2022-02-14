
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int resume_err; } ;
struct TYPE_5__ {scalar_t__ is_allowed; } ;
struct TYPE_4__ {int is_suspended; } ;
struct ufs_hba {int pm_op_in_progress; int uic_link_state; TYPE_3__ ufs_stats; TYPE_2__ clk_scaling; TYPE_1__ clk_gating; } ;
typedef enum uic_link_state { ____Placeholder_uic_link_state } uic_link_state ;
typedef enum ufs_pm_op { ____Placeholder_ufs_pm_op } ufs_pm_op ;


 int VAR_0 ;
 int FUNC_0 (struct ufs_hba*) ;
 int FUNC_1 (struct ufs_hba*) ;
 int FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (struct ufs_hba*) ;
 int FUNC_5 (struct ufs_hba*) ;
 int FUNC_6 (struct ufs_hba*) ;
 scalar_t__ FUNC_7 (struct ufs_hba*) ;
 scalar_t__ FUNC_8 (struct ufs_hba*) ;
 int FUNC_9 (struct ufs_hba*) ;
 scalar_t__ FUNC_10 (struct ufs_hba*) ;
 int FUNC_11 (struct ufs_hba*,int,int ) ;
 int FUNC_12 (struct ufs_hba*) ;
 int FUNC_13 (struct ufs_hba*) ;
 int FUNC_14 (struct ufs_hba*,int ) ;
 int FUNC_15 (struct ufs_hba*) ;
 int FUNC_16 (struct ufs_hba*,int) ;
 int FUNC_17 (struct ufs_hba*) ;
 int FUNC_18 (struct ufs_hba*) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (struct ufs_hba*) ;
 int FUNC_21 (struct ufs_hba*,int) ;
 int FUNC_22 (struct ufs_hba*,int) ;
 int FUNC_23 (struct ufs_hba*) ;
 int FUNC_24 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_25(struct ufs_hba *VAR_1, enum ufs_pm_op VAR_2)
{
 int VAR_3;
 enum uic_link_state VAR_4;

 VAR_1->pm_op_in_progress = 1;
 VAR_4 = VAR_1->uic_link_state;

 FUNC_4(VAR_1);

 VAR_3 = FUNC_16(VAR_1, 1);
 if (VAR_3)
  goto out;


 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  goto disable_irq_and_vops_clks;

 VAR_3 = FUNC_23(VAR_1);
 if (VAR_3)
  goto disable_irq_and_vops_clks;






 VAR_3 = FUNC_21(VAR_1, VAR_2);
 if (VAR_3)
  goto disable_vreg;

 if (FUNC_7(VAR_1)) {
  VAR_3 = FUNC_18(VAR_1);
  if (!VAR_3)
   FUNC_15(VAR_1);
  else
   goto vendor_suspend;
 } else if (FUNC_8(VAR_1)) {
  VAR_3 = FUNC_5(VAR_1);




  if (VAR_3 || !FUNC_6(VAR_1))
   goto vendor_suspend;
 }

 if (!FUNC_9(VAR_1)) {
  VAR_3 = FUNC_14(VAR_1, VAR_0);
  if (VAR_3)
   goto set_old_link_state;
 }

 if (FUNC_10(VAR_1))
  FUNC_2(VAR_1);
 else




  FUNC_20(VAR_1);

 VAR_1->clk_gating.is_suspended = 0;

 if (VAR_1->clk_scaling.is_allowed)
  FUNC_13(VAR_1);


 FUNC_12(VAR_1);


 FUNC_0(VAR_1);

 goto out;

set_old_link_state:
 FUNC_11(VAR_1, VAR_4, 0);
vendor_suspend:
 FUNC_22(VAR_1, VAR_2);
disable_vreg:
 FUNC_24(VAR_1);
disable_irq_and_vops_clks:
 FUNC_1(VAR_1);
 if (VAR_1->clk_scaling.is_allowed)
  FUNC_17(VAR_1);
 FUNC_16(VAR_1, 0);
out:
 VAR_1->pm_op_in_progress = 0;
 if (VAR_3)
  FUNC_19(&VAR_1->ufs_stats.resume_err, (u32)VAR_3);
 return VAR_3;
}
