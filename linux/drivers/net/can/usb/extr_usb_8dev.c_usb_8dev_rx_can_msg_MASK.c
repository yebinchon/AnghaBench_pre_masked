
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct usb_8dev_rx_msg {scalar_t__ type; int flags; int dlc; int data; int id; } ;
struct usb_8dev_priv {TYPE_1__* netdev; } ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct can_frame {scalar_t__ can_dlc; int data; int can_id; } ;
struct TYPE_4__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct sk_buff* FUNC_0 (TYPE_1__*,struct can_frame**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct usb_8dev_priv*,struct usb_8dev_rx_msg*) ;

__attribute__((used)) static void FUNC_8(struct usb_8dev_priv *VAR_8,
    struct usb_8dev_rx_msg *VAR_9)
{
 struct can_frame *VAR_10;
 struct sk_buff *VAR_11;
 struct net_device_stats *VAR_12 = &VAR_8->netdev->stats;

 if (VAR_9->type == VAR_7 &&
     VAR_9->flags == VAR_3) {
  FUNC_7(VAR_8, VAR_9);
 } else if (VAR_9->type == VAR_6) {
  VAR_11 = FUNC_0(VAR_8->netdev, &VAR_10);
  if (!VAR_11)
   return;

  VAR_10->can_id = FUNC_1(VAR_9->id);
  VAR_10->can_dlc = FUNC_3(VAR_9->dlc & 0xF);

  if (VAR_9->flags & VAR_4)
   VAR_10->can_id |= VAR_0;

  if (VAR_9->flags & VAR_5)
   VAR_10->can_id |= VAR_2;
  else
   FUNC_4(VAR_10->data, VAR_9->data, VAR_10->can_dlc);

  VAR_12->rx_packets++;
  VAR_12->rx_bytes += VAR_10->can_dlc;
  FUNC_6(VAR_11);

  FUNC_2(VAR_8->netdev, VAR_1);
 } else {
  FUNC_5(VAR_8->netdev, "frame type %d unknown",
    VAR_9->type);
 }

}
