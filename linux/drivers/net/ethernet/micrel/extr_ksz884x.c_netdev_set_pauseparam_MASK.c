
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ksz_port {scalar_t__ force_link; int flow_ctrl; } ;
struct ksz_hw {scalar_t__ ksz_switch; int overrides; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; scalar_t__ autoneg; } ;
struct dev_priv {struct ksz_port port; struct dev_info* adapter; } ;
struct dev_info {int lock; struct ksz_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ksz_port*) ;
 int FUNC_4 (struct ksz_hw*,int,int) ;
 int FUNC_5 (struct ksz_hw*,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6,
 struct ethtool_pauseparam *VAR_7)
{
 struct dev_priv *VAR_8 = FUNC_2(VAR_6);
 struct dev_info *VAR_9 = VAR_8->adapter;
 struct ksz_hw *VAR_10 = &VAR_9->hw;
 struct ksz_port *VAR_11 = &VAR_8->port;

 FUNC_0(&VAR_9->lock);
 if (VAR_7->autoneg) {
  if (!VAR_7->rx_pause && !VAR_7->tx_pause)
   VAR_11->flow_ctrl = VAR_3;
  else
   VAR_11->flow_ctrl = VAR_2;
  VAR_10->overrides &= ~VAR_1;
  VAR_11->force_link = 0;
  if (VAR_10->ksz_switch) {
   FUNC_5(VAR_10, VAR_0,
    VAR_4, 1);
   FUNC_5(VAR_10, VAR_0,
    VAR_5, 1);
  }
  FUNC_3(VAR_11);
 } else {
  VAR_10->overrides |= VAR_1;
  if (VAR_10->ksz_switch) {
   FUNC_5(VAR_10, VAR_0,
    VAR_4, VAR_7->rx_pause);
   FUNC_5(VAR_10, VAR_0,
    VAR_5, VAR_7->tx_pause);
  } else
   FUNC_4(VAR_10, VAR_7->rx_pause, VAR_7->tx_pause);
 }
 FUNC_1(&VAR_9->lock);

 return 0;
}
