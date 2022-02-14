
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
struct ufs_hba {int dev_quirks; int quirks; int dev; int caps; int capabilities; int req_abort_count; int eh_flags; TYPE_2__ clk_gating; TYPE_1__* host; int auto_bkops_enabled; int is_sys_suspended; int pm_op_in_progress; int uic_link_state; int curr_dev_pwr_mode; int saved_uic_err; int saved_err; int outstanding_tasks; int outstanding_reqs; int lrb_in_use; int ufshcd_state; } ;
struct TYPE_3__ {int host_self_blocked; } ;


 int FUNC_0 (int ,char*,int ,...) ;

__attribute__((used)) static void FUNC_1(struct ufs_hba *VAR_0)
{
 FUNC_0(VAR_0->dev, "UFS Host state=%d\n", VAR_0->ufshcd_state);
 FUNC_0(VAR_0->dev, "lrb in use=0x%lx, outstanding reqs=0x%lx tasks=0x%lx\n",
  VAR_0->lrb_in_use, VAR_0->outstanding_reqs, VAR_0->outstanding_tasks);
 FUNC_0(VAR_0->dev, "saved_err=0x%x, saved_uic_err=0x%x\n",
  VAR_0->saved_err, VAR_0->saved_uic_err);
 FUNC_0(VAR_0->dev, "Device power mode=%d, UIC link state=%d\n",
  VAR_0->curr_dev_pwr_mode, VAR_0->uic_link_state);
 FUNC_0(VAR_0->dev, "PM in progress=%d, sys. suspended=%d\n",
  VAR_0->pm_op_in_progress, VAR_0->is_sys_suspended);
 FUNC_0(VAR_0->dev, "Auto BKOPS=%d, Host self-block=%d\n",
  VAR_0->auto_bkops_enabled, VAR_0->host->host_self_blocked);
 FUNC_0(VAR_0->dev, "Clk gate=%d\n", VAR_0->clk_gating.state);
 FUNC_0(VAR_0->dev, "error handling flags=0x%x, req. abort count=%d\n",
  VAR_0->eh_flags, VAR_0->req_abort_count);
 FUNC_0(VAR_0->dev, "Host capabilities=0x%x, caps=0x%x\n",
  VAR_0->capabilities, VAR_0->caps);
 FUNC_0(VAR_0->dev, "quirks=0x%x, dev. quirks=0x%x\n", VAR_0->quirks,
  VAR_0->dev_quirks);
}
