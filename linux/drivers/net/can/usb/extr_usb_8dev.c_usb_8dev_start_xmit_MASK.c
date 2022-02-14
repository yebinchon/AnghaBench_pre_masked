
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_8dev_tx_urb_context {int echo_index; int dlc; struct usb_8dev_priv* priv; } ;
struct usb_8dev_tx_msg {int flags; int end; int data; int dlc; int id; int begin; } ;
struct usb_8dev_priv {int active_tx_urbs; int udev; int tx_submitted; struct usb_8dev_tx_urb_context* tx_contexts; } ;
struct urb {int transfer_dma; int transfer_flags; } ;
struct sk_buff {scalar_t__ data; } ;
struct net_device_stats {int tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {int can_id; int can_dlc; int data; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct net_device*,struct sk_buff*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct sk_buff*,struct net_device*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *,int ,size_t) ;
 int FUNC_10 (struct net_device*,char*) ;
 struct usb_8dev_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*,char*,...) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 scalar_t__ FUNC_15 (int) ;
 int VAR_14 ;
 int * FUNC_16 (int ,size_t,int ,int *) ;
 struct urb* FUNC_17 (int ,int ) ;
 int FUNC_18 (struct urb*,int *) ;
 int FUNC_19 (struct urb*,int ,int ,int *,size_t,int ,struct usb_8dev_tx_urb_context*) ;
 int FUNC_20 (int ,size_t,int *,int ) ;
 int FUNC_21 (struct urb*) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (struct urb*,int ) ;
 int FUNC_24 (struct urb*) ;

__attribute__((used)) static netdev_tx_t FUNC_25(struct sk_buff *VAR_15,
          struct net_device *VAR_16)
{
 struct usb_8dev_priv *VAR_17 = FUNC_11(VAR_16);
 struct net_device_stats *VAR_18 = &VAR_16->stats;
 struct can_frame *VAR_19 = (struct can_frame *) VAR_15->data;
 struct usb_8dev_tx_msg *VAR_20;
 struct urb *VAR_21;
 struct usb_8dev_tx_urb_context *VAR_22 = ((void*)0);
 u8 *VAR_23;
 int VAR_24, VAR_25;
 size_t VAR_26 = sizeof(struct usb_8dev_tx_msg);

 if (FUNC_3(VAR_16, VAR_15))
  return VAR_7;


 VAR_21 = FUNC_17(0, VAR_4);
 if (!VAR_21)
  goto nomem;

 VAR_23 = FUNC_16(VAR_17->udev, VAR_26, VAR_4,
     &VAR_21->transfer_dma);
 if (!VAR_23) {
  FUNC_10(VAR_16, "No memory left for USB buffer\n");
  goto nomembuf;
 }

 FUNC_9(VAR_23, 0, VAR_26);

 VAR_20 = (struct usb_8dev_tx_msg *)VAR_23;
 VAR_20->begin = VAR_10;
 VAR_20->flags = 0x00;

 if (VAR_19->can_id & VAR_2)
  VAR_20->flags |= VAR_13;

 if (VAR_19->can_id & VAR_0)
  VAR_20->flags |= VAR_12;

 VAR_20->id = FUNC_6(VAR_19->can_id & VAR_1);
 VAR_20->dlc = VAR_19->can_dlc;
 FUNC_8(VAR_20->data, VAR_19->data, VAR_19->can_dlc);
 VAR_20->end = VAR_9;

 for (VAR_24 = 0; VAR_24 < VAR_5; VAR_24++) {
  if (VAR_17->tx_contexts[VAR_24].echo_index == VAR_5) {
   VAR_22 = &VAR_17->tx_contexts[VAR_24];
   break;
  }
 }




 if (!VAR_22)
  goto nofreecontext;

 VAR_22->priv = VAR_17;
 VAR_22->echo_index = VAR_24;
 VAR_22->dlc = VAR_19->can_dlc;

 FUNC_19(VAR_21, VAR_17->udev,
     FUNC_22(VAR_17->udev, VAR_11),
     VAR_23, VAR_26, VAR_14, VAR_22);
 VAR_21->transfer_flags |= VAR_8;
 FUNC_18(VAR_21, &VAR_17->tx_submitted);

 FUNC_5(VAR_15, VAR_16, VAR_22->echo_index);

 FUNC_1(&VAR_17->active_tx_urbs);

 VAR_25 = FUNC_23(VAR_21, VAR_4);
 if (FUNC_15(VAR_25))
  goto failed;
 else if (FUNC_2(&VAR_17->active_tx_urbs) >= VAR_5)

  FUNC_14(VAR_16);




 FUNC_21(VAR_21);

 return VAR_7;

nofreecontext:
 FUNC_20(VAR_17->udev, VAR_26, VAR_23, VAR_21->transfer_dma);
 FUNC_21(VAR_21);

 FUNC_12(VAR_16, "couldn't find free context");

 return VAR_6;

failed:
 FUNC_4(VAR_16, VAR_22->echo_index);

 FUNC_24(VAR_21);
 FUNC_20(VAR_17->udev, VAR_26, VAR_23, VAR_21->transfer_dma);

 FUNC_0(&VAR_17->active_tx_urbs);

 if (VAR_25 == -VAR_3)
  FUNC_13(VAR_16);
 else
  FUNC_12(VAR_16, "failed tx_urb %d\n", VAR_25);

nomembuf:
 FUNC_21(VAR_21);

nomem:
 FUNC_7(VAR_15);
 VAR_18->tx_dropped++;

 return VAR_7;
}
