
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int suspend_err; } ;
struct TYPE_5__ {int is_suspended; int state; } ;
struct TYPE_4__ {scalar_t__ is_allowed; int resume_work; int suspend_work; } ;
struct ufs_hba {int pm_op_in_progress; int rpm_lvl; int spm_lvl; int curr_dev_pwr_mode; int uic_link_state; TYPE_3__ ufs_stats; TYPE_2__ clk_gating; TYPE_1__ clk_scaling; int dev; int auto_bkops_enabled; } ;
typedef enum uic_link_state { ____Placeholder_uic_link_state } uic_link_state ;
typedef enum ufs_pm_op { ____Placeholder_ufs_pm_op } ufs_pm_op ;
typedef enum ufs_pm_level { ____Placeholder_ufs_pm_level } ufs_pm_level ;
typedef enum ufs_dev_pwr_mode { ____Placeholder_ufs_dev_pwr_mode } ufs_dev_pwr_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ufs_hba*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct ufs_hba*) ;
 int FUNC_7 (struct ufs_hba*) ;
 int FUNC_8 (struct ufs_hba*) ;
 int FUNC_9 (struct ufs_hba*) ;
 int FUNC_10 (struct ufs_hba*,int) ;
 int FUNC_11 (struct ufs_hba*) ;
 int FUNC_12 (struct ufs_hba*) ;
 scalar_t__ FUNC_13 (struct ufs_hba*) ;
 scalar_t__ FUNC_14 (struct ufs_hba*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct ufs_hba*) ;
 int FUNC_18 (struct ufs_hba*,int,int) ;
 int FUNC_19 (struct ufs_hba*) ;
 int FUNC_20 (struct ufs_hba*) ;
 int FUNC_21 (struct ufs_hba*,int) ;
 int FUNC_22 (struct ufs_hba*) ;
 int FUNC_23 (struct ufs_hba*,int) ;
 int FUNC_24 (struct ufs_hba*) ;
 int FUNC_25 (struct ufs_hba*) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (struct ufs_hba*) ;
 int FUNC_28 (struct ufs_hba*,int) ;
 int FUNC_29 (struct ufs_hba*) ;
 int FUNC_30 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_31(struct ufs_hba *VAR_6, enum ufs_pm_op VAR_7)
{
 int VAR_8 = 0;
 enum ufs_pm_level VAR_9;
 enum ufs_dev_pwr_mode VAR_10;
 enum uic_link_state VAR_11;

 VAR_6->pm_op_in_progress = 1;
 if (!FUNC_16(VAR_7)) {
  VAR_9 = FUNC_15(VAR_7) ?
    VAR_6->rpm_lvl : VAR_6->spm_lvl;
  VAR_10 = FUNC_4(VAR_9);
  VAR_11 = FUNC_5(VAR_9);
 } else {
  VAR_10 = VAR_3;
  VAR_11 = VAR_5;
 }





 FUNC_10(VAR_6, 0);
 VAR_6->clk_gating.is_suspended = 1;

 if (VAR_6->clk_scaling.is_allowed) {
  FUNC_1(&VAR_6->clk_scaling.suspend_work);
  FUNC_1(&VAR_6->clk_scaling.resume_work);
  FUNC_24(VAR_6);
 }

 if (VAR_10 == VAR_2 &&
   VAR_11 == VAR_4) {
  goto disable_clks;
 }

 if ((VAR_10 == VAR_6->curr_dev_pwr_mode) &&
     (VAR_11 == VAR_6->uic_link_state))
  goto enable_gating;


 if (!FUNC_17(VAR_6) || !FUNC_12(VAR_6)) {
  VAR_8 = -VAR_1;
  goto enable_gating;
 }

 if (FUNC_15(VAR_7)) {
  if (FUNC_6(VAR_6)) {





   VAR_8 = FUNC_27(VAR_6);
   if (VAR_8)
    goto enable_gating;
  } else {

   FUNC_7(VAR_6);
  }
 }

 if ((VAR_10 != VAR_6->curr_dev_pwr_mode) &&
      ((FUNC_15(VAR_7) && !VAR_6->auto_bkops_enabled) ||
        !FUNC_15(VAR_7))) {

  FUNC_7(VAR_6);
  VAR_8 = FUNC_21(VAR_6, VAR_10);
  if (VAR_8)
   goto enable_gating;
 }

 VAR_8 = FUNC_18(VAR_6, VAR_11, 1);
 if (VAR_8)
  goto set_dev_active;

 FUNC_30(VAR_6);

disable_clks:





 VAR_8 = FUNC_28(VAR_6, VAR_7);
 if (VAR_8)
  goto set_link_active;

 if (!FUNC_12(VAR_6))
  FUNC_23(VAR_6, 0);
 else

  FUNC_0(VAR_6, 0, 1);

 VAR_6->clk_gating.state = VAR_0;
 FUNC_3(FUNC_2(VAR_6->dev), VAR_6->clk_gating.state);




 FUNC_8(VAR_6);

 FUNC_9(VAR_6);
 goto out;

set_link_active:
 if (VAR_6->clk_scaling.is_allowed)
  FUNC_20(VAR_6);
 FUNC_29(VAR_6);
 if (FUNC_13(VAR_6) && !FUNC_25(VAR_6))
  FUNC_22(VAR_6);
 else if (FUNC_14(VAR_6))
  FUNC_11(VAR_6);
set_dev_active:
 if (!FUNC_21(VAR_6, VAR_2))
  FUNC_7(VAR_6);
enable_gating:
 if (VAR_6->clk_scaling.is_allowed)
  FUNC_20(VAR_6);
 VAR_6->clk_gating.is_suspended = 0;
 FUNC_19(VAR_6);
out:
 VAR_6->pm_op_in_progress = 0;
 if (VAR_8)
  FUNC_26(&VAR_6->ufs_stats.suspend_err, (u32)VAR_8);
 return VAR_8;
}
