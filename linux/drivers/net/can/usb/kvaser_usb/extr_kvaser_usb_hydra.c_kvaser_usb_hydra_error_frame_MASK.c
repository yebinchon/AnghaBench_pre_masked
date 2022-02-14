
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; int rx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct TYPE_6__ {scalar_t__ txerr; scalar_t__ rxerr; } ;
struct TYPE_4__ {int bus_error; } ;
struct TYPE_5__ {int state; scalar_t__ restart_ms; TYPE_1__ can_stats; } ;
struct kvaser_usb_net_priv {TYPE_3__ bec; TYPE_2__ can; struct net_device* netdev; } ;
struct kvaser_err_frame_data {scalar_t__ tx_err_counter; scalar_t__ rx_err_counter; int bus_status; } ;
struct can_frame {scalar_t__* data; scalar_t__ can_dlc; int can_id; } ;
struct can_berr_counter {scalar_t__ txerr; scalar_t__ rxerr; } ;
typedef int ktime_t ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct can_frame*,int,int) ;
 int FUNC_3 (struct kvaser_usb_net_priv*,int ,struct can_berr_counter*,int*) ;
 int FUNC_4 (struct kvaser_usb_net_priv*,int ) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct skb_shared_hwtstamps* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_8(struct kvaser_usb_net_priv *VAR_5,
        const struct kvaser_err_frame_data *VAR_6,
        ktime_t VAR_7)
{
 struct net_device *VAR_8 = VAR_5->netdev;
 struct net_device_stats *VAR_9 = &VAR_8->stats;
 struct can_frame *VAR_10;
 struct sk_buff *VAR_11;
 struct skb_shared_hwtstamps *VAR_12;
 struct can_berr_counter VAR_13;
 enum can_state VAR_14, VAR_15;
 u8 VAR_16;

 VAR_5->can.can_stats.bus_error++;
 VAR_9->rx_errors++;

 VAR_16 = VAR_6->bus_status;
 VAR_13.txerr = VAR_6->tx_err_counter;
 VAR_13.rxerr = VAR_6->rx_err_counter;

 VAR_15 = VAR_5->can.state;
 FUNC_3(VAR_5, VAR_16, &VAR_13,
       &VAR_14);

 VAR_11 = FUNC_0(VAR_8, &VAR_10);

 if (VAR_14 != VAR_15) {
  if (VAR_11) {
   enum can_state VAR_17, VAR_18;

   VAR_17 = (VAR_13.txerr >= VAR_13.rxerr) ?
     VAR_14 : VAR_3;
   VAR_18 = (VAR_13.txerr <= VAR_13.rxerr) ?
     VAR_14 : VAR_3;

   FUNC_2(VAR_8, VAR_10, VAR_17, VAR_18);

   if (VAR_5->can.restart_ms &&
       VAR_15 >= VAR_2 &&
       VAR_14 < VAR_2)
    VAR_10->can_id |= VAR_1;
  }

  if (VAR_14 == VAR_2) {
   if (!VAR_5->can.restart_ms)
    FUNC_4
      (VAR_5, VAR_4);

   FUNC_1(VAR_8);
  }
 }

 if (!VAR_11) {
  VAR_9->rx_dropped++;
  FUNC_5(VAR_8, "No memory left for err_skb\n");
  return;
 }

 VAR_12 = FUNC_7(VAR_11);
 VAR_12->hwtstamp = VAR_7;

 VAR_10->can_id |= VAR_0;
 VAR_10->data[6] = VAR_13.txerr;
 VAR_10->data[7] = VAR_13.rxerr;

 VAR_9->rx_packets++;
 VAR_9->rx_bytes += VAR_10->can_dlc;
 FUNC_6(VAR_11);

 VAR_5->bec.txerr = VAR_13.txerr;
 VAR_5->bec.rxerr = VAR_13.rxerr;
}
