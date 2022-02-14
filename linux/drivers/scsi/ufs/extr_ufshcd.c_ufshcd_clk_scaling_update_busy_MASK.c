
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_clk_scaling {int is_busy_started; scalar_t__ busy_start_t; int tot_busy_t; } ;
struct ufs_hba {int outstanding_reqs; struct ufs_clk_scaling clk_scaling; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_4(struct ufs_hba *VAR_0)
{
 struct ufs_clk_scaling *VAR_1 = &VAR_0->clk_scaling;

 if (!FUNC_3(VAR_0))
  return;

 if (!VAR_0->outstanding_reqs && VAR_1->is_busy_started) {
  VAR_1->tot_busy_t += FUNC_2(FUNC_1(FUNC_0(),
     VAR_1->busy_start_t));
  VAR_1->busy_start_t = 0;
  VAR_1->is_busy_started = 0;
 }
}
