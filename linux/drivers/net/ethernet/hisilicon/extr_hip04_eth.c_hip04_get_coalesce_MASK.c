
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hip04_priv {int tx_coalesce_frames; int tx_coalesce_usecs; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames; int tx_coalesce_usecs; } ;


 struct hip04_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
         struct ethtool_coalesce *VAR_1)
{
 struct hip04_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_1->tx_coalesce_usecs = VAR_2->tx_coalesce_usecs;
 VAR_1->tx_max_coalesced_frames = VAR_2->tx_coalesce_frames;

 return 0;
}
