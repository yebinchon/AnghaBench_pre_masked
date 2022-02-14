
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int rx_riwt; int rx_coal_frames; scalar_t__ use_riwt; int tx_coal_frames; int tx_coal_timer; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int rx_max_coalesced_frames; int tx_max_coalesced_frames; int tx_coalesce_usecs; } ;


 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct stmmac_priv*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
          struct ethtool_coalesce *VAR_1)
{
 struct stmmac_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_1->tx_coalesce_usecs = VAR_2->tx_coal_timer;
 VAR_1->tx_max_coalesced_frames = VAR_2->tx_coal_frames;

 if (VAR_2->use_riwt) {
  VAR_1->rx_max_coalesced_frames = VAR_2->rx_coal_frames;
  VAR_1->rx_coalesce_usecs = FUNC_1(VAR_2->rx_riwt, VAR_2);
 }

 return 0;
}
