
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sh_eth_private {int dirty_tx; int dirty_rx; int cur_tx; int cur_rx; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 struct sh_eth_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
         struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct sh_eth_private *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 0;


 VAR_2[VAR_4++] = VAR_3->cur_rx;
 VAR_2[VAR_4++] = VAR_3->cur_tx;
 VAR_2[VAR_4++] = VAR_3->dirty_rx;
 VAR_2[VAR_4++] = VAR_3->dirty_tx;
}
