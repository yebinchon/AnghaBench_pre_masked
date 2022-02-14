
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sc92031_priv {int lock; int rx_loss; int tx_timeouts; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 struct sc92031_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
  struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct sc92031_priv *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(&VAR_3->lock);
 VAR_2[0] = VAR_3->tx_timeouts;
 VAR_2[1] = VAR_3->rx_loss;
 FUNC_2(&VAR_3->lock);
}
