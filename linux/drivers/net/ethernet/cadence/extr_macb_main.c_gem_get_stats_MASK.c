
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device_stats {scalar_t__ tx_fifo_errors; scalar_t__ tx_carrier_errors; scalar_t__ tx_aborted_errors; scalar_t__ rx_fifo_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_over_errors; scalar_t__ rx_length_errors; scalar_t__ collisions; int multicast; scalar_t__ tx_errors; scalar_t__ rx_errors; } ;
struct gem_stats {scalar_t__ tx_underrun; scalar_t__ tx_carrier_sense_errors; scalar_t__ tx_excessive_collisions; scalar_t__ rx_overruns; scalar_t__ rx_alignment_errors; scalar_t__ rx_frame_check_sequence_errors; scalar_t__ rx_resource_errors; scalar_t__ rx_length_field_frame_errors; scalar_t__ rx_undersized_frames; scalar_t__ rx_jabbers; scalar_t__ rx_oversize_frames; scalar_t__ tx_multiple_collision_frames; scalar_t__ tx_single_collision_frames; int rx_multicast_frames; scalar_t__ tx_late_collisions; } ;
struct TYPE_3__ {struct gem_stats gem; } ;
struct macb {TYPE_2__* dev; TYPE_1__ hw_stats; } ;
struct TYPE_4__ {struct net_device_stats stats; } ;


 int FUNC_0 (struct macb*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct macb *VAR_0)
{
 struct gem_stats *VAR_1 = &VAR_0->hw_stats.gem;
 struct net_device_stats *VAR_2 = &VAR_0->dev->stats;

 FUNC_0(VAR_0);

 VAR_2->rx_errors = (VAR_1->rx_frame_check_sequence_errors +
       VAR_1->rx_alignment_errors +
       VAR_1->rx_resource_errors +
       VAR_1->rx_overruns +
       VAR_1->rx_oversize_frames +
       VAR_1->rx_jabbers +
       VAR_1->rx_undersized_frames +
       VAR_1->rx_length_field_frame_errors);
 VAR_2->tx_errors = (VAR_1->tx_late_collisions +
       VAR_1->tx_excessive_collisions +
       VAR_1->tx_underrun +
       VAR_1->tx_carrier_sense_errors);
 VAR_2->multicast = VAR_1->rx_multicast_frames;
 VAR_2->collisions = (VAR_1->tx_single_collision_frames +
        VAR_1->tx_multiple_collision_frames +
        VAR_1->tx_excessive_collisions);
 VAR_2->rx_length_errors = (VAR_1->rx_oversize_frames +
       VAR_1->rx_jabbers +
       VAR_1->rx_undersized_frames +
       VAR_1->rx_length_field_frame_errors);
 VAR_2->rx_over_errors = VAR_1->rx_resource_errors;
 VAR_2->rx_crc_errors = VAR_1->rx_frame_check_sequence_errors;
 VAR_2->rx_frame_errors = VAR_1->rx_alignment_errors;
 VAR_2->rx_fifo_errors = VAR_1->rx_overruns;
 VAR_2->tx_aborted_errors = VAR_1->tx_excessive_collisions;
 VAR_2->tx_carrier_errors = VAR_1->tx_carrier_sense_errors;
 VAR_2->tx_fifo_errors = VAR_1->tx_underrun;

 return VAR_2;
}
