
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; int rx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct kvaser_pciefd_rx_packet {int* header; int timestamp; } ;
struct TYPE_7__ {int txerr; int rxerr; } ;
struct TYPE_5__ {int bus_error; int restarts; } ;
struct TYPE_6__ {int state; TYPE_1__ can_stats; scalar_t__ restart_ms; struct net_device* dev; } ;
struct kvaser_pciefd_can {TYPE_4__* kv_pcie; TYPE_3__ bec; TYPE_2__ can; int err_rep_cnt; } ;
struct can_frame {int* data; scalar_t__ can_dlc; int can_id; } ;
struct can_berr_counter {int txerr; int rxerr; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;
struct TYPE_8__ {int freq_to_ticks_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct kvaser_pciefd_can*,struct can_frame*,int,int,int) ;
 int FUNC_3 (struct kvaser_pciefd_rx_packet*,struct can_berr_counter*,int*,int*,int*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 struct skb_shared_hwtstamps* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct kvaser_pciefd_can *VAR_6,
     struct kvaser_pciefd_rx_packet *VAR_7)
{
 struct can_berr_counter VAR_8;
 enum can_state VAR_9, VAR_10, VAR_11, VAR_12;
 struct net_device *VAR_13 = VAR_6->can.dev;
 struct sk_buff *VAR_14;
 struct can_frame *VAR_15 = ((void*)0);
 struct skb_shared_hwtstamps *VAR_16;
 struct net_device_stats *VAR_17 = &VAR_13->stats;

 VAR_9 = VAR_6->can.state;

 VAR_8.txerr = VAR_7->header[0] & 0xff;
 VAR_8.rxerr = (VAR_7->header[0] >> VAR_5) & 0xff;

 FUNC_3(VAR_7, &VAR_8, &VAR_10, &VAR_11,
          &VAR_12);

 VAR_14 = FUNC_0(VAR_13, &VAR_15);

 if (VAR_10 != VAR_9) {
  FUNC_2(VAR_6, VAR_15, VAR_10, VAR_11,
        VAR_12);

  if (VAR_9 == VAR_2 &&
      VAR_10 == VAR_3 &&
      VAR_6->can.restart_ms) {
   VAR_6->can.can_stats.restarts++;
   if (VAR_14)
    VAR_15->can_id |= VAR_1;
  }
 }

 VAR_6->err_rep_cnt++;
 VAR_6->can.can_stats.bus_error++;
 VAR_17->rx_errors++;

 VAR_6->bec.txerr = VAR_8.txerr;
 VAR_6->bec.rxerr = VAR_8.rxerr;

 if (!VAR_14) {
  VAR_17->rx_dropped++;
  return -VAR_4;
 }

 VAR_16 = FUNC_6(VAR_14);
 VAR_16->hwtstamp =
  FUNC_5(FUNC_1(VAR_7->timestamp * 1000,
        VAR_6->kv_pcie->freq_to_ticks_div));
 VAR_15->can_id |= VAR_0;

 VAR_15->data[6] = VAR_8.txerr;
 VAR_15->data[7] = VAR_8.rxerr;

 VAR_17->rx_packets++;
 VAR_17->rx_bytes += VAR_15->can_dlc;

 FUNC_4(VAR_14);
 return 0;
}
