
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int rx_ring_size; int tx_ring_size; int rx_coalesce_usecs; int tx_coalesce_usecs; scalar_t__ rx_max_coalesced_frames; scalar_t__ tx_max_coalesced_frames; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; scalar_t__ rx_max_coalesced_frames; int tx_coalesce_usecs; scalar_t__ tx_max_coalesced_frames; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct ethtool_coalesce *VAR_3)
{
 struct ql_adapter *VAR_4 = FUNC_0(VAR_2);


 if (VAR_3->rx_coalesce_usecs > VAR_4->rx_ring_size / 2)
  return -VAR_0;

 if (VAR_3->rx_max_coalesced_frames > VAR_1)
  return -VAR_0;
 if (VAR_3->tx_coalesce_usecs > VAR_4->tx_ring_size / 2)
  return -VAR_0;
 if (VAR_3->tx_max_coalesced_frames > VAR_1)
  return -VAR_0;


 if (VAR_4->rx_coalesce_usecs == VAR_3->rx_coalesce_usecs &&
     VAR_4->tx_coalesce_usecs == VAR_3->tx_coalesce_usecs &&
     VAR_4->rx_max_coalesced_frames == VAR_3->rx_max_coalesced_frames &&
     VAR_4->tx_max_coalesced_frames == VAR_3->tx_max_coalesced_frames)
  return 0;

 VAR_4->rx_coalesce_usecs = VAR_3->rx_coalesce_usecs;
 VAR_4->tx_coalesce_usecs = VAR_3->tx_coalesce_usecs;
 VAR_4->rx_max_coalesced_frames = VAR_3->rx_max_coalesced_frames;
 VAR_4->tx_max_coalesced_frames = VAR_3->tx_max_coalesced_frames;

 return FUNC_1(VAR_4);
}
