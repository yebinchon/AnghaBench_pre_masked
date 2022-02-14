
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_phy {int is_iface_clk_enabled; int rx_iface_clk; int tx_iface_clk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ufs_qcom_phy *VAR_0)
{
 if (VAR_0->is_iface_clk_enabled) {
  FUNC_0(VAR_0->tx_iface_clk);
  FUNC_0(VAR_0->rx_iface_clk);
  VAR_0->is_iface_clk_enabled = 0;
 }
}
