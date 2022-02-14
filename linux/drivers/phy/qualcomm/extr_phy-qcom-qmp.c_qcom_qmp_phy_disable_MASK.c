
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmp_phy_cfg {scalar_t__ has_lane_rst; int pwrdn_ctrl; int start_ctrl; int * regs; int no_pcs_sw_reset; } ;
struct qmp_phy {int lane_rst; int pcs; int pipe_clk; struct qcom_qmp* qmp; } ;
struct qcom_qmp {int phy_initialized; struct qmp_phy_cfg* cfg; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct qmp_phy* FUNC_1 (struct phy*) ;
 int FUNC_2 (struct qcom_qmp*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_4)
{
 struct qmp_phy *VAR_5 = FUNC_1(VAR_4);
 struct qcom_qmp *VAR_6 = VAR_5->qmp;
 const struct qmp_phy_cfg *VAR_7 = VAR_6->cfg;

 FUNC_0(VAR_5->pipe_clk);


 if (!VAR_7->no_pcs_sw_reset)
  FUNC_4(VAR_5->pcs, VAR_7->regs[VAR_2], VAR_3);


 FUNC_3(VAR_5->pcs, VAR_7->regs[VAR_1], VAR_7->start_ctrl);


 FUNC_3(VAR_5->pcs, VAR_0, VAR_7->pwrdn_ctrl);

 if (VAR_7->has_lane_rst)
  FUNC_5(VAR_5->lane_rst);

 FUNC_2(VAR_6);

 VAR_6->phy_initialized = 0;

 return 0;
}
