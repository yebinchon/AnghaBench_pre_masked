
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_busy_started; int busy_start_t; scalar_t__ tot_busy_t; scalar_t__ window_start_t; int resume_work; int workq; int is_allowed; int active_reqs; } ;
struct ufs_hba {TYPE_1__ clk_scaling; scalar_t__ pm_op_in_progress; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_3(struct ufs_hba *VAR_1)
{
 bool VAR_2 = 0;

 if (!FUNC_2(VAR_1))
  return;

 if (!VAR_1->clk_scaling.active_reqs++)
  VAR_2 = 1;

 if (!VAR_1->clk_scaling.is_allowed || VAR_1->pm_op_in_progress)
  return;

 if (VAR_2)
  FUNC_1(VAR_1->clk_scaling.workq,
      &VAR_1->clk_scaling.resume_work);

 if (!VAR_1->clk_scaling.window_start_t) {
  VAR_1->clk_scaling.window_start_t = VAR_0;
  VAR_1->clk_scaling.tot_busy_t = 0;
  VAR_1->clk_scaling.is_busy_started = 0;
 }

 if (!VAR_1->clk_scaling.is_busy_started) {
  VAR_1->clk_scaling.busy_start_t = FUNC_0();
  VAR_1->clk_scaling.is_busy_started = 1;
 }
}
