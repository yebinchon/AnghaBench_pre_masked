
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device_stats {scalar_t__ tx_fifo_errors; scalar_t__ tx_carrier_errors; scalar_t__ tx_aborted_errors; scalar_t__ rx_fifo_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_over_errors; scalar_t__ rx_length_errors; scalar_t__ collisions; scalar_t__ tx_errors; scalar_t__ rx_errors; } ;
struct net_device {int dummy; } ;
struct macb_stats {scalar_t__ tx_underruns; scalar_t__ tx_carrier_errors; scalar_t__ tx_excessive_cols; scalar_t__ rx_overruns; scalar_t__ rx_align_errors; scalar_t__ rx_fcs_errors; scalar_t__ rx_resource_errors; scalar_t__ rx_length_mismatch; scalar_t__ rx_undersize_pkts; scalar_t__ rx_jabbers; scalar_t__ rx_oversize_pkts; scalar_t__ tx_multiple_cols; scalar_t__ tx_single_cols; scalar_t__ sqe_test_errors; scalar_t__ tx_late_cols; } ;
struct TYPE_4__ {struct macb_stats macb; } ;
struct macb {TYPE_2__ hw_stats; TYPE_1__* dev; } ;
struct TYPE_3__ {struct net_device_stats stats; } ;


 struct net_device_stats* FUNC_0 (struct macb*) ;
 scalar_t__ FUNC_1 (struct macb*) ;
 int FUNC_2 (struct macb*) ;
 struct macb* FUNC_3 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_4(struct net_device *VAR_0)
{
 struct macb *VAR_1 = FUNC_3(VAR_0);
 struct net_device_stats *VAR_2 = &VAR_1->dev->stats;
 struct macb_stats *VAR_3 = &VAR_1->hw_stats.macb;

 if (FUNC_1(VAR_1))
  return FUNC_0(VAR_1);


 FUNC_2(VAR_1);


 VAR_2->rx_errors = (VAR_3->rx_fcs_errors +
       VAR_3->rx_align_errors +
       VAR_3->rx_resource_errors +
       VAR_3->rx_overruns +
       VAR_3->rx_oversize_pkts +
       VAR_3->rx_jabbers +
       VAR_3->rx_undersize_pkts +
       VAR_3->rx_length_mismatch);
 VAR_2->tx_errors = (VAR_3->tx_late_cols +
       VAR_3->tx_excessive_cols +
       VAR_3->tx_underruns +
       VAR_3->tx_carrier_errors +
       VAR_3->sqe_test_errors);
 VAR_2->collisions = (VAR_3->tx_single_cols +
        VAR_3->tx_multiple_cols +
        VAR_3->tx_excessive_cols);
 VAR_2->rx_length_errors = (VAR_3->rx_oversize_pkts +
       VAR_3->rx_jabbers +
       VAR_3->rx_undersize_pkts +
       VAR_3->rx_length_mismatch);
 VAR_2->rx_over_errors = VAR_3->rx_resource_errors +
       VAR_3->rx_overruns;
 VAR_2->rx_crc_errors = VAR_3->rx_fcs_errors;
 VAR_2->rx_frame_errors = VAR_3->rx_align_errors;
 VAR_2->rx_fifo_errors = VAR_3->rx_overruns;

 VAR_2->tx_aborted_errors = VAR_3->tx_excessive_cols;
 VAR_2->tx_carrier_errors = VAR_3->tx_carrier_errors;
 VAR_2->tx_fifo_errors = VAR_3->tx_underruns;


 return VAR_2;
}
