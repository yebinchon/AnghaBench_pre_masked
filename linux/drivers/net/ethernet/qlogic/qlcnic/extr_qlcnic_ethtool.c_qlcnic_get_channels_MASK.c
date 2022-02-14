
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int drv_tx_rings; int drv_sds_rings; int max_tx_rings; int max_sds_rings; } ;
struct net_device {int dummy; } ;
struct ethtool_channels {int tx_count; int rx_count; int max_tx; int max_rx; } ;


 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
  struct ethtool_channels *VAR_1)
{
 struct qlcnic_adapter *VAR_2 = FUNC_0(VAR_0);

 VAR_1->max_rx = VAR_2->max_sds_rings;
 VAR_1->max_tx = VAR_2->max_tx_rings;
 VAR_1->rx_count = VAR_2->drv_sds_rings;
 VAR_1->tx_count = VAR_2->drv_tx_rings;
}
