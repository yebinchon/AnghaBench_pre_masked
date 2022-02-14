
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int stats_block_coalesce_usecs; scalar_t__ tx_max_coalesced_frames_irq; scalar_t__ tx_coalesce_usecs_irq; scalar_t__ tx_max_coalesced_frames; scalar_t__ tx_coalesce_usecs; scalar_t__ rx_max_coalesced_frames_irq; scalar_t__ rx_coalesce_usecs_irq; scalar_t__ rx_max_coalesced_frames; scalar_t__ rx_coalesce_usecs; } ;
struct bnx2 {int rx_ticks; int rx_quick_cons_trip; int rx_ticks_int; int rx_quick_cons_trip_int; int tx_ticks; int tx_quick_cons_trip; int tx_ticks_int; int tx_quick_cons_trip_int; int flags; int dev; int stats_ticks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int) ;
 int FUNC_2 (struct bnx2*,int) ;
 struct bnx2* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_3, struct ethtool_coalesce *VAR_4)
{
 struct bnx2 *VAR_5 = FUNC_3(VAR_3);

 VAR_5->rx_ticks = (u16) VAR_4->rx_coalesce_usecs;
 if (VAR_5->rx_ticks > 0x3ff) VAR_5->rx_ticks = 0x3ff;

 VAR_5->rx_quick_cons_trip = (u16) VAR_4->rx_max_coalesced_frames;
 if (VAR_5->rx_quick_cons_trip > 0xff) VAR_5->rx_quick_cons_trip = 0xff;

 VAR_5->rx_ticks_int = (u16) VAR_4->rx_coalesce_usecs_irq;
 if (VAR_5->rx_ticks_int > 0x3ff) VAR_5->rx_ticks_int = 0x3ff;

 VAR_5->rx_quick_cons_trip_int = (u16) VAR_4->rx_max_coalesced_frames_irq;
 if (VAR_5->rx_quick_cons_trip_int > 0xff)
  VAR_5->rx_quick_cons_trip_int = 0xff;

 VAR_5->tx_ticks = (u16) VAR_4->tx_coalesce_usecs;
 if (VAR_5->tx_ticks > 0x3ff) VAR_5->tx_ticks = 0x3ff;

 VAR_5->tx_quick_cons_trip = (u16) VAR_4->tx_max_coalesced_frames;
 if (VAR_5->tx_quick_cons_trip > 0xff) VAR_5->tx_quick_cons_trip = 0xff;

 VAR_5->tx_ticks_int = (u16) VAR_4->tx_coalesce_usecs_irq;
 if (VAR_5->tx_ticks_int > 0x3ff) VAR_5->tx_ticks_int = 0x3ff;

 VAR_5->tx_quick_cons_trip_int = (u16) VAR_4->tx_max_coalesced_frames_irq;
 if (VAR_5->tx_quick_cons_trip_int > 0xff) VAR_5->tx_quick_cons_trip_int =
  0xff;

 VAR_5->stats_ticks = VAR_4->stats_block_coalesce_usecs;
 if (VAR_5->flags & VAR_0) {
  if (VAR_5->stats_ticks != 0 && VAR_5->stats_ticks != VAR_2)
   VAR_5->stats_ticks = VAR_2;
 }
 if (VAR_5->stats_ticks > VAR_1)
  VAR_5->stats_ticks = VAR_1;
 VAR_5->stats_ticks &= VAR_1;

 if (FUNC_4(VAR_5->dev)) {
  FUNC_2(VAR_5, 1);
  FUNC_0(VAR_5, 0);
  FUNC_1(VAR_5, 1);
 }

 return 0;
}
