
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_qcom_host {int tx_l1_sync_clk; int rx_l1_sync_clk; TYPE_1__* hba; int tx_l0_sync_clk; int rx_l0_sync_clk; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int lanes_per_direction; struct device* dev; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ufs_qcom_host *VAR_0)
{
 int VAR_1 = 0;
 struct device *VAR_2 = VAR_0->hba->dev;

 if (FUNC_0(VAR_2))
  return 0;

 VAR_1 = FUNC_1(VAR_2, "rx_lane0_sync_clk",
     &VAR_0->rx_l0_sync_clk, 0);
 if (VAR_1)
  goto out;

 VAR_1 = FUNC_1(VAR_2, "tx_lane0_sync_clk",
     &VAR_0->tx_l0_sync_clk, 0);
 if (VAR_1)
  goto out;


 if (VAR_0->hba->lanes_per_direction > 1) {
  VAR_1 = FUNC_1(VAR_2, "rx_lane1_sync_clk",
   &VAR_0->rx_l1_sync_clk, 0);
  if (VAR_1)
   goto out;

  VAR_1 = FUNC_1(VAR_2, "tx_lane1_sync_clk",
   &VAR_0->tx_l1_sync_clk, 1);
 }
out:
 return VAR_1;
}
