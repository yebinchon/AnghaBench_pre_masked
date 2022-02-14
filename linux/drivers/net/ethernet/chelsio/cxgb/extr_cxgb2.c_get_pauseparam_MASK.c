
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int requested_fc; int fc; } ;
struct port_info {TYPE_1__ link_config; } ;
struct net_device {size_t if_port; struct adapter* ml_priv; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; } ;
struct adapter {struct port_info* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_3,
      struct ethtool_pauseparam *VAR_4)
{
 struct adapter *VAR_5 = VAR_3->ml_priv;
 struct port_info *VAR_6 = &VAR_5->port[VAR_3->if_port];

 VAR_4->autoneg = (VAR_6->link_config.requested_fc & VAR_0) != 0;
 VAR_4->rx_pause = (VAR_6->link_config.fc & VAR_1) != 0;
 VAR_4->tx_pause = (VAR_6->link_config.fc & VAR_2) != 0;
}
