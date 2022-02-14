
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct rtnl_link_stats64 {int rx_fifo_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_length_errors; int collisions; int multicast; int tx_dropped; int rx_dropped; scalar_t__ tx_errors; scalar_t__ rx_errors; } ;
struct TYPE_8__ {TYPE_3__* bna_stats; } ;
struct bnad {TYPE_4__ stats; int bna; } ;
struct bfi_enet_stats_mac {scalar_t__ rx_alignment_error; scalar_t__ rx_fcs_error; scalar_t__ rx_frame_length_error; int tx_total_collision; int rx_multicast; int tx_drop; int rx_drop; scalar_t__ tx_undersize; scalar_t__ tx_fcs_error; scalar_t__ rx_undersize; scalar_t__ rx_code_error; } ;
struct TYPE_6__ {TYPE_1__* rxf_stats; struct bfi_enet_stats_mac mac_stats; } ;
struct TYPE_7__ {TYPE_2__ hw_stats; } ;
struct TYPE_5__ {scalar_t__ frame_drops; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct bnad *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct bfi_enet_stats_mac *VAR_2;
 u32 VAR_3;
 int VAR_4;

 VAR_2 = &VAR_0->stats.bna_stats->hw_stats.mac_stats;
 VAR_1->rx_errors =
  VAR_2->rx_fcs_error + VAR_2->rx_alignment_error +
  VAR_2->rx_frame_length_error + VAR_2->rx_code_error +
  VAR_2->rx_undersize;
 VAR_1->tx_errors = VAR_2->tx_fcs_error +
     VAR_2->tx_undersize;
 VAR_1->rx_dropped = VAR_2->rx_drop;
 VAR_1->tx_dropped = VAR_2->tx_drop;
 VAR_1->multicast = VAR_2->rx_multicast;
 VAR_1->collisions = VAR_2->tx_total_collision;

 VAR_1->rx_length_errors = VAR_2->rx_frame_length_error;



 VAR_1->rx_crc_errors = VAR_2->rx_fcs_error;
 VAR_1->rx_frame_errors = VAR_2->rx_alignment_error;

 VAR_3 = FUNC_0(&VAR_0->bna);
 for (VAR_4 = 0; VAR_3; VAR_4++) {
  if (VAR_3 & 1) {
   VAR_1->rx_fifo_errors +=
    VAR_0->stats.bna_stats->
     hw_stats.rxf_stats[VAR_4].frame_drops;
   break;
  }
  VAR_3 >>= 1;
 }
}
