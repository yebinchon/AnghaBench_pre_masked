
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fec_enet_private {int quirks; int tx_pkts_itr; int tx_time_itr; int rx_pkts_itr; int rx_time_itr; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames; int tx_coalesce_usecs; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_2, struct ethtool_coalesce *VAR_3)
{
 struct fec_enet_private *VAR_4 = FUNC_0(VAR_2);

 if (!(VAR_4->quirks & VAR_1))
  return -VAR_0;

 VAR_3->rx_coalesce_usecs = VAR_4->rx_time_itr;
 VAR_3->rx_max_coalesced_frames = VAR_4->rx_pkts_itr;

 VAR_3->tx_coalesce_usecs = VAR_4->tx_time_itr;
 VAR_3->tx_max_coalesced_frames = VAR_4->tx_pkts_itr;

 return 0;
}
