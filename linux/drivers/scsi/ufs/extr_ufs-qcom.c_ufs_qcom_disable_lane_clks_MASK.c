
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_host {int is_lane_clks_enabled; int rx_l0_sync_clk; int rx_l1_sync_clk; int tx_l0_sync_clk; int tx_l1_sync_clk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ufs_qcom_host *VAR_0)
{
 if (!VAR_0->is_lane_clks_enabled)
  return;

 FUNC_0(VAR_0->tx_l1_sync_clk);
 FUNC_0(VAR_0->tx_l0_sync_clk);
 FUNC_0(VAR_0->rx_l1_sync_clk);
 FUNC_0(VAR_0->rx_l0_sync_clk);

 VAR_0->is_lane_clks_enabled = 0;
}
