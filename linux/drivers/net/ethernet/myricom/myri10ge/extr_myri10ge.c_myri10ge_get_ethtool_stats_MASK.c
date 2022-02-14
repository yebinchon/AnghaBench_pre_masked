
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {scalar_t__ linearized; scalar_t__ stop_queue; scalar_t__ wake_queue; scalar_t__ done; scalar_t__ req; scalar_t__ pkt_done; scalar_t__ pkt_start; } ;
struct TYPE_7__ {scalar_t__ cnt; } ;
struct TYPE_6__ {scalar_t__ cnt; } ;
struct myri10ge_slice_state {TYPE_3__ tx; TYPE_2__ rx_big; TYPE_1__ rx_small; TYPE_5__* fw_stats; int * dca_tag; } ;
struct myri10ge_priv {int num_slices; struct myri10ge_slice_state* ss; scalar_t__ link_changes; scalar_t__ dca_enabled; scalar_t__ watchdog_resets; scalar_t__ serial_number; scalar_t__ read_write_dma; scalar_t__ write_dma; scalar_t__ read_dma; scalar_t__ msix_enabled; scalar_t__ msi_enabled; TYPE_4__* pdev; scalar_t__ tx_boundary; } ;
struct ethtool_stats {int dummy; } ;
typedef int link_stats ;
struct TYPE_10__ {int dropped_no_big_buffer; int dropped_no_small_buffer; int dropped_overrun; int dropped_runt; int dropped_multicast_filtered; int dropped_unicast_filtered; int dropped_bad_crc32; int dropped_bad_phy; int dropped_pause; int dropped_link_error_or_filtered; int dropped_link_overflow; int link_up; } ;
struct TYPE_9__ {scalar_t__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtnl_link_stats64*,int ,int) ;
 int FUNC_1 (struct net_device*,struct rtnl_link_stats64*) ;
 struct myri10ge_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_1,
      struct ethtool_stats *VAR_2, u64 * VAR_3)
{
 struct myri10ge_priv *VAR_4 = FUNC_2(VAR_1);
 struct myri10ge_slice_state *VAR_5;
 struct rtnl_link_stats64 VAR_6;
 int VAR_7;
 int VAR_8;


 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 (void)FUNC_1(VAR_1, &VAR_6);
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_3[VAR_8] = ((u64 *)&VAR_6)[VAR_8];

 VAR_3[VAR_8++] = (unsigned int)VAR_4->tx_boundary;
 VAR_3[VAR_8++] = (unsigned int)VAR_4->pdev->irq;
 VAR_3[VAR_8++] = (unsigned int)VAR_4->msi_enabled;
 VAR_3[VAR_8++] = (unsigned int)VAR_4->msix_enabled;
 VAR_3[VAR_8++] = (unsigned int)VAR_4->read_dma;
 VAR_3[VAR_8++] = (unsigned int)VAR_4->write_dma;
 VAR_3[VAR_8++] = (unsigned int)VAR_4->read_write_dma;
 VAR_3[VAR_8++] = (unsigned int)VAR_4->serial_number;
 VAR_3[VAR_8++] = (unsigned int)VAR_4->watchdog_resets;




 VAR_3[VAR_8++] = (unsigned int)VAR_4->link_changes;


 VAR_5 = &VAR_4->ss[0];
 VAR_3[VAR_8++] = (unsigned int)FUNC_3(VAR_5->fw_stats->link_up);
 VAR_3[VAR_8++] = (unsigned int)FUNC_3(VAR_5->fw_stats->dropped_link_overflow);
 VAR_3[VAR_8++] =
     (unsigned int)FUNC_3(VAR_5->fw_stats->dropped_link_error_or_filtered);
 VAR_3[VAR_8++] = (unsigned int)FUNC_3(VAR_5->fw_stats->dropped_pause);
 VAR_3[VAR_8++] = (unsigned int)FUNC_3(VAR_5->fw_stats->dropped_bad_phy);
 VAR_3[VAR_8++] = (unsigned int)FUNC_3(VAR_5->fw_stats->dropped_bad_crc32);
 VAR_3[VAR_8++] = (unsigned int)FUNC_3(VAR_5->fw_stats->dropped_unicast_filtered);
 VAR_3[VAR_8++] =
     (unsigned int)FUNC_3(VAR_5->fw_stats->dropped_multicast_filtered);
 VAR_3[VAR_8++] = (unsigned int)FUNC_3(VAR_5->fw_stats->dropped_runt);
 VAR_3[VAR_8++] = (unsigned int)FUNC_3(VAR_5->fw_stats->dropped_overrun);
 VAR_3[VAR_8++] = (unsigned int)FUNC_3(VAR_5->fw_stats->dropped_no_small_buffer);
 VAR_3[VAR_8++] = (unsigned int)FUNC_3(VAR_5->fw_stats->dropped_no_big_buffer);

 for (VAR_7 = 0; VAR_7 < VAR_4->num_slices; VAR_7++) {
  VAR_5 = &VAR_4->ss[VAR_7];
  VAR_3[VAR_8++] = VAR_7;
  VAR_3[VAR_8++] = (unsigned int)VAR_5->tx.pkt_start;
  VAR_3[VAR_8++] = (unsigned int)VAR_5->tx.pkt_done;
  VAR_3[VAR_8++] = (unsigned int)VAR_5->tx.req;
  VAR_3[VAR_8++] = (unsigned int)VAR_5->tx.done;
  VAR_3[VAR_8++] = (unsigned int)VAR_5->rx_small.cnt;
  VAR_3[VAR_8++] = (unsigned int)VAR_5->rx_big.cnt;
  VAR_3[VAR_8++] = (unsigned int)VAR_5->tx.wake_queue;
  VAR_3[VAR_8++] = (unsigned int)VAR_5->tx.stop_queue;
  VAR_3[VAR_8++] = (unsigned int)VAR_5->tx.linearized;
 }
}
