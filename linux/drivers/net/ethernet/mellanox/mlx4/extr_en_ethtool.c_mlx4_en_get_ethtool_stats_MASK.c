
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long uint64_t ;
typedef unsigned long u64 ;
struct net_device {int stats; } ;
struct TYPE_4__ {int bitmap; } ;
struct mlx4_en_priv {int* tx_ring_num; int rx_ring_num; int stats_lock; TYPE_3__** rx_ring; TYPE_2__*** tx_ring; int phy_stats; int xdp_stats; int pkstats; int tx_flowstats; int tx_priority_flowstats; int rx_flowstats; int rx_priority_flowstats; int pf_stats; int port_stats; TYPE_1__ stats_bitmap; } ;
struct ethtool_stats {int dummy; } ;
struct bitmap_iterator {int dummy; } ;
struct TYPE_6__ {unsigned long packets; unsigned long bytes; unsigned long dropped; unsigned long xdp_drop; unsigned long xdp_tx; unsigned long xdp_tx_full; } ;
struct TYPE_5__ {unsigned long packets; unsigned long bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (struct bitmap_iterator*) ;
 int FUNC_1 (struct bitmap_iterator*,int ,int ) ;
 scalar_t__ FUNC_2 (struct bitmap_iterator*) ;
 int FUNC_3 (struct net_device*) ;
 struct mlx4_en_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_12,
  struct ethtool_stats *VAR_13, uint64_t *VAR_14)
{
 struct mlx4_en_priv *VAR_15 = FUNC_4(VAR_12);
 int VAR_16 = 0;
 int VAR_17;
 struct bitmap_iterator VAR_18;

 FUNC_1(&VAR_18, VAR_15->stats_bitmap.bitmap, VAR_0);

 FUNC_5(&VAR_15->stats_lock);

 FUNC_3(VAR_12);

 for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++, FUNC_0(&VAR_18))
  if (FUNC_2(&VAR_18))
   VAR_14[VAR_16++] = ((unsigned long *)&VAR_12->stats)[VAR_17];

 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++, FUNC_0(&VAR_18))
  if (FUNC_2(&VAR_18))
   VAR_14[VAR_16++] = ((unsigned long *)&VAR_15->port_stats)[VAR_17];

 for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++, FUNC_0(&VAR_18))
  if (FUNC_2(&VAR_18))
   VAR_14[VAR_16++] =
    ((unsigned long *)&VAR_15->pf_stats)[VAR_17];

 for (VAR_17 = 0; VAR_17 < VAR_1;
      VAR_17++, FUNC_0(&VAR_18))
  if (FUNC_2(&VAR_18))
   VAR_14[VAR_16++] =
    ((u64 *)&VAR_15->rx_priority_flowstats)[VAR_17];

 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++, FUNC_0(&VAR_18))
  if (FUNC_2(&VAR_18))
   VAR_14[VAR_16++] = ((u64 *)&VAR_15->rx_flowstats)[VAR_17];

 for (VAR_17 = 0; VAR_17 < VAR_2;
      VAR_17++, FUNC_0(&VAR_18))
  if (FUNC_2(&VAR_18))
   VAR_14[VAR_16++] =
    ((u64 *)&VAR_15->tx_priority_flowstats)[VAR_17];

 for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++, FUNC_0(&VAR_18))
  if (FUNC_2(&VAR_18))
   VAR_14[VAR_16++] = ((u64 *)&VAR_15->tx_flowstats)[VAR_17];

 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++, FUNC_0(&VAR_18))
  if (FUNC_2(&VAR_18))
   VAR_14[VAR_16++] = ((unsigned long *)&VAR_15->pkstats)[VAR_17];

 for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++, FUNC_0(&VAR_18))
  if (FUNC_2(&VAR_18))
   VAR_14[VAR_16++] = ((unsigned long *)&VAR_15->xdp_stats)[VAR_17];

 for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++, FUNC_0(&VAR_18))
  if (FUNC_2(&VAR_18))
   VAR_14[VAR_16++] = ((unsigned long *)&VAR_15->phy_stats)[VAR_17];

 for (VAR_17 = 0; VAR_17 < VAR_15->tx_ring_num[VAR_11]; VAR_17++) {
  VAR_14[VAR_16++] = VAR_15->tx_ring[VAR_11][VAR_17]->packets;
  VAR_14[VAR_16++] = VAR_15->tx_ring[VAR_11][VAR_17]->bytes;
 }
 for (VAR_17 = 0; VAR_17 < VAR_15->rx_ring_num; VAR_17++) {
  VAR_14[VAR_16++] = VAR_15->rx_ring[VAR_17]->packets;
  VAR_14[VAR_16++] = VAR_15->rx_ring[VAR_17]->bytes;
  VAR_14[VAR_16++] = VAR_15->rx_ring[VAR_17]->dropped;
  VAR_14[VAR_16++] = VAR_15->rx_ring[VAR_17]->xdp_drop;
  VAR_14[VAR_16++] = VAR_15->rx_ring[VAR_17]->xdp_tx;
  VAR_14[VAR_16++] = VAR_15->rx_ring[VAR_17]->xdp_tx_full;
 }
 FUNC_6(&VAR_15->stats_lock);

}
