
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_max_pending; int rx_max_pending; int tx_pending; int rx_pending; } ;
struct aq_nic_s {int dummy; } ;
struct aq_nic_cfg_s {TYPE_1__* aq_hw_caps; int txds; int rxds; } ;
struct TYPE_2__ {int txds_max; int rxds_max; } ;


 struct aq_nic_cfg_s* FUNC_0 (struct aq_nic_s*) ;
 struct aq_nic_s* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
        struct ethtool_ringparam *VAR_1)
{
 struct aq_nic_s *VAR_2 = FUNC_1(VAR_0);
 struct aq_nic_cfg_s *VAR_3 = FUNC_0(VAR_2);

 VAR_1->rx_pending = VAR_3->rxds;
 VAR_1->tx_pending = VAR_3->txds;

 VAR_1->rx_max_pending = VAR_3->aq_hw_caps->rxds_max;
 VAR_1->tx_max_pending = VAR_3->aq_hw_caps->txds_max;
}
