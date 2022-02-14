
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ftgmac100 {int tx_q_entries; int rx_q_entries; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; int tx_max_pending; int rx_max_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ethtool_ringparam*,int ,int) ;
 struct ftgmac100* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
        struct ethtool_ringparam *VAR_3)
{
 struct ftgmac100 *VAR_4 = FUNC_1(VAR_2);

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->rx_max_pending = VAR_0;
 VAR_3->tx_max_pending = VAR_1;
 VAR_3->rx_pending = VAR_4->rx_q_entries;
 VAR_3->tx_pending = VAR_4->tx_q_entries;
}
