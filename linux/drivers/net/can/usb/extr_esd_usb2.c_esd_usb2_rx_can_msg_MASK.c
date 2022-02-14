
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct esd_usb2_net_priv {TYPE_3__* netdev; } ;
struct TYPE_5__ {int dlc; int * data; int id; } ;
struct TYPE_6__ {TYPE_1__ rx; } ;
struct esd_usb2_msg {TYPE_2__ msg; } ;
struct can_frame {int can_id; int can_dlc; int * data; } ;
struct TYPE_7__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (TYPE_3__*,struct can_frame**) ;
 int FUNC_1 (struct esd_usb2_net_priv*,struct esd_usb2_msg*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct esd_usb2_net_priv *VAR_6,
    struct esd_usb2_msg *VAR_7)
{
 struct net_device_stats *VAR_8 = &VAR_6->netdev->stats;
 struct can_frame *VAR_9;
 struct sk_buff *VAR_10;
 int VAR_11;
 u32 VAR_12;

 if (!FUNC_4(VAR_6->netdev))
  return;

 VAR_12 = FUNC_3(VAR_7->msg.rx.id);

 if (VAR_12 & VAR_2) {
  FUNC_1(VAR_6, VAR_7);
 } else {
  VAR_10 = FUNC_0(VAR_6->netdev, &VAR_9);
  if (VAR_10 == ((void*)0)) {
   VAR_8->rx_dropped++;
   return;
  }

  VAR_9->can_id = VAR_12 & VAR_4;
  VAR_9->can_dlc = FUNC_2(VAR_7->msg.rx.dlc & ~VAR_5);

  if (VAR_12 & VAR_3)
   VAR_9->can_id |= VAR_0;

  if (VAR_7->msg.rx.dlc & VAR_5) {
   VAR_9->can_id |= VAR_1;
  } else {
   for (VAR_11 = 0; VAR_11 < VAR_9->can_dlc; VAR_11++)
    VAR_9->data[VAR_11] = VAR_7->msg.rx.data[VAR_11];
  }

  VAR_8->rx_packets++;
  VAR_8->rx_bytes += VAR_9->can_dlc;
  FUNC_5(VAR_10);
 }

 return;
}
