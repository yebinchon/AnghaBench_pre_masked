
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int delay_ms; int gate_work; int clk_gating_workq; int state; scalar_t__ is_suspended; scalar_t__ active_reqs; } ;
struct ufs_hba {scalar_t__ ufshcd_state; TYPE_1__ clk_gating; int dev; scalar_t__ uic_async_done; scalar_t__ active_uic_cmd; scalar_t__ outstanding_tasks; scalar_t__ lrb_in_use; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct ufs_hba*) ;
 int FUNC_5 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_6(struct ufs_hba *VAR_2)
{
 if (!FUNC_5(VAR_2))
  return;

 VAR_2->clk_gating.active_reqs--;

 if (VAR_2->clk_gating.active_reqs || VAR_2->clk_gating.is_suspended
  || VAR_2->ufshcd_state != VAR_1
  || VAR_2->lrb_in_use || VAR_2->outstanding_tasks
  || VAR_2->active_uic_cmd || VAR_2->uic_async_done
  || FUNC_4(VAR_2))
  return;

 VAR_2->clk_gating.state = VAR_0;
 FUNC_3(FUNC_0(VAR_2->dev), VAR_2->clk_gating.state);
 FUNC_2(VAR_2->clk_gating.clk_gating_workq,
      &VAR_2->clk_gating.gate_work,
      FUNC_1(VAR_2->clk_gating.delay_ms));
}
