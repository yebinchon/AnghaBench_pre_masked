
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct TYPE_3__ {int restarts; } ;
struct TYPE_4__ {int state; TYPE_1__ can_stats; scalar_t__ restart_ms; } ;
struct kvaser_usb_net_priv {TYPE_2__ can; struct net_device* netdev; } ;
struct can_frame {scalar_t__* data; scalar_t__ can_dlc; } ;
struct can_berr_counter {scalar_t__ txerr; scalar_t__ rxerr; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct can_frame*,int,int) ;
 int FUNC_3 (struct kvaser_usb_net_priv*,int ,struct can_berr_counter const*,int*) ;
 int FUNC_4 (struct kvaser_usb_net_priv*,int ) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct kvaser_usb_net_priv *VAR_4,
       u8 VAR_5,
       const struct can_berr_counter *VAR_6)
{
 struct net_device *VAR_7 = VAR_4->netdev;
 struct can_frame *VAR_8;
 struct sk_buff *VAR_9;
 struct net_device_stats *VAR_10;
 enum can_state VAR_11, VAR_12;

 VAR_12 = VAR_4->can.state;

 FUNC_3(VAR_4, VAR_5, VAR_6,
       &VAR_11);

 if (VAR_11 == VAR_12)
  return;





 if (VAR_12 == VAR_2 && VAR_11 == VAR_0)
  return;

 VAR_9 = FUNC_0(VAR_7, &VAR_8);
 if (VAR_9) {
  enum can_state VAR_13, VAR_14;

  VAR_13 = (VAR_6->txerr >= VAR_6->rxerr) ?
     VAR_11 : VAR_1;
  VAR_14 = (VAR_6->txerr <= VAR_6->rxerr) ?
     VAR_11 : VAR_1;
  FUNC_2(VAR_7, VAR_8, VAR_13, VAR_14);
 }

 if (VAR_11 == VAR_0 && VAR_12 < VAR_0) {
  if (!VAR_4->can.restart_ms)
   FUNC_4
      (VAR_4, VAR_3);

  FUNC_1(VAR_7);
 }

 if (!VAR_9) {
  FUNC_5(VAR_7, "No memory left for err_skb\n");
  return;
 }

 if (VAR_4->can.restart_ms &&
     VAR_12 >= VAR_0 &&
     VAR_11 < VAR_0)
  VAR_4->can.can_stats.restarts++;

 VAR_8->data[6] = VAR_6->txerr;
 VAR_8->data[7] = VAR_6->rxerr;

 VAR_10 = &VAR_7->stats;
 VAR_10->rx_packets++;
 VAR_10->rx_bytes += VAR_8->can_dlc;
 FUNC_6(VAR_9);
}
