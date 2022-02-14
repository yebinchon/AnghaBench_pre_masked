
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ufs_qcom_phy {int ref_clk; TYPE_1__* dev; int ref_clk_parent; int ref_clk_src; int rx_iface_clk; int tx_iface_clk; } ;
struct TYPE_3__ {int of_node; } ;


 int FUNC_0 (TYPE_1__*,char*,int *,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int *) ;

int FUNC_3(struct ufs_qcom_phy *VAR_0)
{
 int VAR_1;

 if (FUNC_1(VAR_0->dev->of_node,
    "qcom,msm8996-ufs-phy-qmp-14nm"))
  goto skip_txrx_clk;

 VAR_1 = FUNC_2(VAR_0->dev, "tx_iface_clk",
       &VAR_0->tx_iface_clk);
 if (VAR_1)
  goto out;

 VAR_1 = FUNC_2(VAR_0->dev, "rx_iface_clk",
       &VAR_0->rx_iface_clk);
 if (VAR_1)
  goto out;

skip_txrx_clk:
 VAR_1 = FUNC_2(VAR_0->dev, "ref_clk_src",
       &VAR_0->ref_clk_src);
 if (VAR_1)
  goto out;





 FUNC_0(VAR_0->dev, "ref_clk_parent",
       &VAR_0->ref_clk_parent, 0);

 VAR_1 = FUNC_2(VAR_0->dev, "ref_clk",
       &VAR_0->ref_clk);

out:
 return VAR_1;
}
