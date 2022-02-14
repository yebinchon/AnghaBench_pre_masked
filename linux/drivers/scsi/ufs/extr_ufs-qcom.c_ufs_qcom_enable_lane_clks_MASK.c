
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_qcom_host {int is_lane_clks_enabled; int rx_l0_sync_clk; int tx_l0_sync_clk; int rx_l1_sync_clk; int tx_l1_sync_clk; TYPE_1__* hba; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct ufs_qcom_host *VAR_0)
{
 int VAR_1 = 0;
 struct device *VAR_2 = VAR_0->hba->dev;

 if (VAR_0->is_lane_clks_enabled)
  return 0;

 VAR_1 = FUNC_1(VAR_2, "rx_lane0_sync_clk",
  VAR_0->rx_l0_sync_clk);
 if (VAR_1)
  goto out;

 VAR_1 = FUNC_1(VAR_2, "tx_lane0_sync_clk",
  VAR_0->tx_l0_sync_clk);
 if (VAR_1)
  goto disable_rx_l0;

 VAR_1 = FUNC_1(VAR_2, "rx_lane1_sync_clk",
   VAR_0->rx_l1_sync_clk);
 if (VAR_1)
  goto disable_tx_l0;

 VAR_1 = FUNC_1(VAR_2, "tx_lane1_sync_clk",
   VAR_0->tx_l1_sync_clk);
 if (VAR_1)
  goto disable_rx_l1;

 VAR_0->is_lane_clks_enabled = 1;
 goto out;

disable_rx_l1:
 FUNC_0(VAR_0->rx_l1_sync_clk);
disable_tx_l0:
 FUNC_0(VAR_0->tx_l0_sync_clk);
disable_rx_l0:
 FUNC_0(VAR_0->rx_l0_sync_clk);
out:
 return VAR_1;
}
