
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clk_gating_workq; int gate_work; int ungate_work; int enable_attr; int delay_attr; } ;
struct ufs_hba {TYPE_1__ clk_gating; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_5(struct ufs_hba *VAR_0)
{
 if (!FUNC_4(VAR_0))
  return;
 FUNC_3(VAR_0->dev, &VAR_0->clk_gating.delay_attr);
 FUNC_3(VAR_0->dev, &VAR_0->clk_gating.enable_attr);
 FUNC_1(&VAR_0->clk_gating.ungate_work);
 FUNC_0(&VAR_0->clk_gating.gate_work);
 FUNC_2(VAR_0->clk_gating.clk_gating_workq);
}
