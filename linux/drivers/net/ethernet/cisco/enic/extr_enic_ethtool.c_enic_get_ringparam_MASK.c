
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_enet_config {int wq_desc_count; int rq_desc_count; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int tx_max_pending; int rx_pending; int rx_max_pending; } ;
struct enic {struct vnic_enet_config config; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct enic* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
          struct ethtool_ringparam *VAR_3)
{
 struct enic *VAR_4 = FUNC_0(VAR_2);
 struct vnic_enet_config *VAR_5 = &VAR_4->config;

 VAR_3->rx_max_pending = VAR_0;
 VAR_3->rx_pending = VAR_5->rq_desc_count;
 VAR_3->tx_max_pending = VAR_1;
 VAR_3->tx_pending = VAR_5->wq_desc_count;
}
