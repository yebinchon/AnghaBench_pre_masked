
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {int tx_frames; int rx_frames; int rx_usecs; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;


 int FUNC_0 (struct ethtool_coalesce*,int ,int) ;
 struct xlgmac_pdata* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
           struct ethtool_coalesce *VAR_1)
{
 struct xlgmac_pdata *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, 0, sizeof(struct ethtool_coalesce));
 VAR_1->rx_coalesce_usecs = VAR_2->rx_usecs;
 VAR_1->rx_max_coalesced_frames = VAR_2->rx_frames;
 VAR_1->tx_max_coalesced_frames = VAR_2->tx_frames;

 return 0;
}
