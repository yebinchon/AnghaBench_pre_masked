
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {int tx_q_count; int rx_q_count; } ;
struct net_device {int dummy; } ;
struct ethtool_channels {int tx_count; int rx_count; void* max_tx; void* max_rx; } ;


 void* VAR_0 ;
 struct xlgmac_pdata* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1,
     struct ethtool_channels *VAR_2)
{
 struct xlgmac_pdata *VAR_3 = FUNC_0(VAR_1);

 VAR_2->max_rx = VAR_0;
 VAR_2->max_tx = VAR_0;
 VAR_2->rx_count = VAR_3->rx_q_count;
 VAR_2->tx_count = VAR_3->tx_q_count;
}
