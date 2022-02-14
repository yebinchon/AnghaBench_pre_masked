
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_pending; void* rx_max_pending; int tx_pending; void* tx_max_pending; } ;
struct cpsw_priv {struct cpsw_common* cpsw; } ;
struct cpsw_common {void* descs_pool_size; int dma; } ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct cpsw_priv* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_1,
   struct ethtool_ringparam *VAR_2)
{
 struct cpsw_priv *VAR_3 = FUNC_2(VAR_1);
 struct cpsw_common *VAR_4 = VAR_3->cpsw;


 VAR_2->tx_max_pending = VAR_4->descs_pool_size - VAR_0;
 VAR_2->tx_pending = FUNC_1(VAR_4->dma);
 VAR_2->rx_max_pending = VAR_4->descs_pool_size - VAR_0;
 VAR_2->rx_pending = FUNC_0(VAR_4->dma);
}
