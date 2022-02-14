
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ksz_hw {int overrides; int rx_cfg; int tx_cfg; int ksz_switch; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {struct ksz_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dev_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct ksz_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_6,
 struct ethtool_pauseparam *VAR_7)
{
 struct dev_priv *VAR_8 = FUNC_0(VAR_6);
 struct dev_info *VAR_9 = VAR_8->adapter;
 struct ksz_hw *VAR_10 = &VAR_9->hw;

 VAR_7->autoneg = (VAR_10->overrides & VAR_3) ? 0 : 1;
 if (!VAR_10->ksz_switch) {
  VAR_7->rx_pause =
   (VAR_10->rx_cfg & VAR_0) ? 1 : 0;
  VAR_7->tx_pause =
   (VAR_10->tx_cfg & VAR_1) ? 1 : 0;
 } else {
  VAR_7->rx_pause =
   (FUNC_1(VAR_10, VAR_2,
    VAR_4)) ? 1 : 0;
  VAR_7->tx_pause =
   (FUNC_1(VAR_10, VAR_2,
    VAR_5)) ? 1 : 0;
 }
}
