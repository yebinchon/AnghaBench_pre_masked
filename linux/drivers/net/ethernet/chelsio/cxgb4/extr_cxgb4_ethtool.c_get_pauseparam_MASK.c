
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int requested_fc; int fc; } ;
struct port_info {TYPE_1__ link_cfg; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3,
      struct ethtool_pauseparam *VAR_4)
{
 struct port_info *VAR_5 = FUNC_0(VAR_3);

 VAR_4->autoneg = (VAR_5->link_cfg.requested_fc & VAR_0) != 0;
 VAR_4->rx_pause = (VAR_5->link_cfg.fc & VAR_1) != 0;
 VAR_4->tx_pause = (VAR_5->link_cfg.fc & VAR_2) != 0;
}
