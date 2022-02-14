
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {int stats_block_coalesce_usecs; int tx_max_coalesced_frames_irq; int tx_coalesce_usecs_irq; int tx_max_coalesced_frames; int tx_coalesce_usecs; int rx_max_coalesced_frames_irq; int rx_coalesce_usecs_irq; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;
struct bnx2 {int stats_ticks; int tx_quick_cons_trip_int; int tx_ticks_int; int tx_quick_cons_trip; int tx_ticks; int rx_quick_cons_trip_int; int rx_ticks_int; int rx_quick_cons_trip; int rx_ticks; } ;


 int FUNC_0 (struct ethtool_coalesce*,int ,int) ;
 struct bnx2* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_0, struct ethtool_coalesce *VAR_1)
{
 struct bnx2 *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, 0, sizeof(struct ethtool_coalesce));

 VAR_1->rx_coalesce_usecs = VAR_2->rx_ticks;
 VAR_1->rx_max_coalesced_frames = VAR_2->rx_quick_cons_trip;
 VAR_1->rx_coalesce_usecs_irq = VAR_2->rx_ticks_int;
 VAR_1->rx_max_coalesced_frames_irq = VAR_2->rx_quick_cons_trip_int;

 VAR_1->tx_coalesce_usecs = VAR_2->tx_ticks;
 VAR_1->tx_max_coalesced_frames = VAR_2->tx_quick_cons_trip;
 VAR_1->tx_coalesce_usecs_irq = VAR_2->tx_ticks_int;
 VAR_1->tx_max_coalesced_frames_irq = VAR_2->tx_quick_cons_trip_int;

 VAR_1->stats_block_coalesce_usecs = VAR_2->stats_ticks;

 return 0;
}
