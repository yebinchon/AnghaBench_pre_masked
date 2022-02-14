
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int tx_queues; int rx_queues; int max_queues; } ;
struct net_device {int dummy; } ;
struct ethtool_channels {int tx_count; int rx_count; int max_tx; int max_rx; } ;


 int FUNC_0 (struct ethtool_channels*,int ,int) ;
 struct nicvf* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
          struct ethtool_channels *VAR_1)
{
 struct nicvf *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->max_rx = VAR_2->max_queues;
 VAR_1->max_tx = VAR_2->max_queues;

 VAR_1->rx_count = VAR_2->rx_queues;
 VAR_1->tx_count = VAR_2->tx_queues;
}
