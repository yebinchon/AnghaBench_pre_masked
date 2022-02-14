
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; scalar_t__ autoneg; } ;
struct TYPE_2__ {int flow_control; } ;
struct aq_nic_s {TYPE_1__ aq_nic_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct aq_nic_s* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
          struct ethtool_pauseparam *VAR_3)
{
 struct aq_nic_s *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5 = VAR_4->aq_nic_cfg.flow_control;

 VAR_3->autoneg = 0;

 VAR_3->rx_pause = !!(VAR_5 & VAR_0);
 VAR_3->tx_pause = !!(VAR_5 & VAR_1);

}
