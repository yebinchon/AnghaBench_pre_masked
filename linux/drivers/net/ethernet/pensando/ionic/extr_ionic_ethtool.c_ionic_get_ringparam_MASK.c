
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ionic_lif {int nrxq_descs; int ntxq_descs; } ;
struct ethtool_ringparam {int rx_pending; void* rx_max_pending; int tx_pending; void* tx_max_pending; } ;


 void* VAR_0 ;
 struct ionic_lif* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1,
    struct ethtool_ringparam *VAR_2)
{
 struct ionic_lif *VAR_3 = FUNC_0(VAR_1);

 VAR_2->tx_max_pending = VAR_0;
 VAR_2->tx_pending = VAR_3->ntxq_descs;
 VAR_2->rx_max_pending = VAR_0;
 VAR_2->rx_pending = VAR_3->nrxq_descs;
}
