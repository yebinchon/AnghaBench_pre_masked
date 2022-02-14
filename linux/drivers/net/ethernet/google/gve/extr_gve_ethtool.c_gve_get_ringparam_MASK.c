
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gve_priv {int tx_desc_cnt; int rx_desc_cnt; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; int tx_max_pending; int rx_max_pending; } ;


 struct gve_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
         struct ethtool_ringparam *VAR_1)
{
 struct gve_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_max_pending = VAR_2->rx_desc_cnt;
 VAR_1->tx_max_pending = VAR_2->tx_desc_cnt;
 VAR_1->rx_pending = VAR_2->rx_desc_cnt;
 VAR_1->tx_pending = VAR_2->tx_desc_cnt;
}
