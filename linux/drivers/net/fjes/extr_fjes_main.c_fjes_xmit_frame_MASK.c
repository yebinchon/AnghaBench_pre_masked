
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {char* data; int len; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int mtu; } ;
struct fjes_hw {int my_epid; int max_epid; TYPE_4__* ep_shm_info; } ;
struct TYPE_6__ {int tx_packets; int tx_bytes; int tx_carrier_errors; int tx_dropped; int tx_errors; int tx_fifo_errors; } ;
struct fjes_adapter {int tx_retry_count; TYPE_2__ stats64; int tx_stall_task; int txrx_wq; scalar_t__ tx_start_jiffies; struct fjes_hw hw; } ;
struct ethhdr {int* h_dest; } ;
typedef scalar_t__ netdev_tx_t ;
typedef enum ep_partner_status { ____Placeholder_ep_partner_status } ep_partner_status ;
struct TYPE_7__ {int tx_packets; int tx_bytes; int tx_carrier_errors; int tx_dropped; int tx_errors; int tx_fifo_errors; } ;
struct TYPE_5__ {int tx_dropped_not_shared; int tx_dropped_ver_mismatch; int tx_dropped_buf_size_mismatch; int tx_dropped_vlanid_mismatch; int tx_buffer_full; } ;
struct TYPE_8__ {TYPE_3__ net_stats; TYPE_1__ ep_stats; int rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct fjes_hw*,int) ;
 scalar_t__ FUNC_5 (struct fjes_adapter*,int,char*,int) ;
 scalar_t__ FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (int*) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,int ,int) ;
 struct netdev_queue* FUNC_10 (struct net_device*,int ) ;
 struct fjes_adapter* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct netdev_queue*) ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (struct sk_buff*,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static netdev_tx_t
FUNC_17(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct fjes_adapter *VAR_9 = FUNC_11(VAR_8);
 struct fjes_hw *VAR_10 = &VAR_9->hw;

 int VAR_11, VAR_12, VAR_13;
 enum ep_partner_status VAR_14;
 struct netdev_queue *VAR_15;
 char VAR_16[VAR_5];
 bool VAR_17, VAR_18;
 struct ethhdr *VAR_19;
 u16 VAR_20 = 0;
 u16 VAR_21 = 0;
 netdev_tx_t VAR_22;
 char *VAR_23;
 int VAR_24;

 VAR_22 = VAR_4;
 VAR_17 = 0;
 VAR_15 = FUNC_10(VAR_8, VAR_20);

 VAR_19 = (struct ethhdr *)VAR_7->data;
 VAR_12 = VAR_10->my_epid;

 VAR_18 = (FUNC_15(VAR_7, &VAR_21) == 0) ? 1 : 0;

 VAR_23 = VAR_7->data;
 VAR_24 = VAR_7->len;

 if (FUNC_7(VAR_19->h_dest)) {
  VAR_13 = 0;
  VAR_11 = VAR_10->max_epid;
  VAR_17 = 1;
 } else if (FUNC_6(VAR_19->h_dest)) {
  VAR_13 = VAR_19->h_dest[VAR_1 - 1];
  VAR_11 = VAR_13 + 1;

  if ((VAR_19->h_dest[0] == 0x02) &&
      (0x00 == (VAR_19->h_dest[1] | VAR_19->h_dest[2] |
         VAR_19->h_dest[3] | VAR_19->h_dest[4])) &&
      (VAR_13 < VAR_10->max_epid)) {
   ;
  } else {
   VAR_13 = 0;
   VAR_11 = 0;
   VAR_22 = VAR_4;

   VAR_9->stats64.tx_packets += 1;
   VAR_10->ep_shm_info[VAR_12].net_stats.tx_packets += 1;
   VAR_9->stats64.tx_bytes += VAR_24;
   VAR_10->ep_shm_info[VAR_12].net_stats.tx_bytes += VAR_24;
  }
 } else {
  VAR_13 = 0;
  VAR_11 = 0;
  VAR_22 = VAR_4;

  VAR_9->stats64.tx_packets += 1;
  VAR_10->ep_shm_info[VAR_12].net_stats.tx_packets += 1;
  VAR_9->stats64.tx_bytes += VAR_24;
  VAR_10->ep_shm_info[VAR_12].net_stats.tx_bytes += VAR_24;
 }

 for (; VAR_13 < VAR_11; VAR_13++) {
  if (VAR_12 == VAR_13)
   continue;

  VAR_14 = FUNC_4(VAR_10, VAR_13);
  if (VAR_14 != VAR_0) {
   if (!VAR_17)
    VAR_10->ep_shm_info[VAR_13].ep_stats
     .tx_dropped_not_shared += 1;
   VAR_22 = VAR_4;
  } else if (!FUNC_1(
    &VAR_9->hw.ep_shm_info[VAR_13].rx, 0)) {

   VAR_9->stats64.tx_carrier_errors += 1;
   VAR_10->ep_shm_info[VAR_13].net_stats
      .tx_carrier_errors += 1;
   VAR_10->ep_shm_info[VAR_13].ep_stats
     .tx_dropped_ver_mismatch += 1;

   VAR_22 = VAR_4;
  } else if (!FUNC_2(
    &VAR_9->hw.ep_shm_info[VAR_13].rx,
    VAR_8->mtu)) {
   VAR_9->stats64.tx_dropped += 1;
   VAR_10->ep_shm_info[VAR_13].net_stats.tx_dropped += 1;
   VAR_9->stats64.tx_errors += 1;
   VAR_10->ep_shm_info[VAR_13].net_stats.tx_errors += 1;
   VAR_10->ep_shm_info[VAR_13].ep_stats
     .tx_dropped_buf_size_mismatch += 1;

   VAR_22 = VAR_4;
  } else if (VAR_18 &&
      !FUNC_3(
    &VAR_9->hw.ep_shm_info[VAR_13].rx,
    VAR_21)) {
   VAR_10->ep_shm_info[VAR_13].ep_stats
    .tx_dropped_vlanid_mismatch += 1;
   VAR_22 = VAR_4;
  } else {
   if (VAR_24 < VAR_5) {
    FUNC_9(VAR_16, 0, VAR_5);
    FUNC_8(VAR_16, VAR_7->data, VAR_7->len);
    VAR_24 = VAR_5;
    VAR_23 = VAR_16;
   }

   if (VAR_9->tx_retry_count == 0) {
    VAR_9->tx_start_jiffies = VAR_6;
    VAR_9->tx_retry_count = 1;
   } else {
    VAR_9->tx_retry_count++;
   }

   if (FUNC_5(VAR_9, VAR_13, VAR_23, VAR_24)) {
    if (VAR_17) {
     VAR_22 = VAR_4;
    } else if (
        ((long)VAR_6 -
         (long)VAR_9->tx_start_jiffies) >=
         VAR_2) {
     VAR_9->stats64.tx_fifo_errors += 1;
     VAR_10->ep_shm_info[VAR_13].net_stats
        .tx_fifo_errors += 1;
     VAR_9->stats64.tx_errors += 1;
     VAR_10->ep_shm_info[VAR_13].net_stats
        .tx_errors += 1;

     VAR_22 = VAR_4;
    } else {
     FUNC_12(VAR_8);
     VAR_10->ep_shm_info[VAR_13].ep_stats
      .tx_buffer_full += 1;
     FUNC_13(VAR_15);

     if (!FUNC_16(&VAR_9->tx_stall_task))
      FUNC_14(VAR_9->txrx_wq,
          &VAR_9->tx_stall_task);

     VAR_22 = VAR_3;
    }
   } else {
    if (!VAR_17) {
     VAR_9->stats64.tx_packets += 1;
     VAR_10->ep_shm_info[VAR_13].net_stats
        .tx_packets += 1;
     VAR_9->stats64.tx_bytes += VAR_24;
     VAR_10->ep_shm_info[VAR_13].net_stats
        .tx_bytes += VAR_24;
    }

    VAR_9->tx_retry_count = 0;
    VAR_22 = VAR_4;
   }
  }
 }

 if (VAR_22 == VAR_4) {
  FUNC_0(VAR_7);
  if (VAR_17) {
   VAR_9->stats64.tx_packets += 1;
   VAR_10->ep_shm_info[VAR_12].net_stats.tx_packets += 1;
   VAR_9->stats64.tx_bytes += 1;
   VAR_10->ep_shm_info[VAR_12].net_stats.tx_bytes += VAR_24;
  }
 }

 return VAR_22;
}
