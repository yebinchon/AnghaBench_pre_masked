
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct kvaser_usb_tx_urb_context {unsigned int echo_index; struct kvaser_usb_net_priv* priv; int dlc; } ;
struct kvaser_usb_net_priv {int active_tx_contexts; int tx_contexts_lock; int tx_submitted; struct kvaser_usb_tx_urb_context* tx_contexts; struct kvaser_usb* dev; } ;
struct kvaser_usb {unsigned int max_tx_urbs; TYPE_2__* bulk_out; int udev; TYPE_1__* ops; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int bEndpointAddress; } ;
struct TYPE_3__ {void* (* dev_frame_to_cmd ) (struct kvaser_usb_net_priv*,struct sk_buff*,int *,int*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct net_device*,unsigned int) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,unsigned int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (void*) ;
 int VAR_4 ;
 struct kvaser_usb_net_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,char*,...) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 void* FUNC_12 (struct kvaser_usb_net_priv*,struct sk_buff*,int *,int*,unsigned int) ;
 scalar_t__ FUNC_13 (int) ;
 struct urb* FUNC_14 (int ,int ) ;
 int FUNC_15 (struct urb*,int *) ;
 int FUNC_16 (struct urb*,int ,int ,void*,int,int ,struct kvaser_usb_tx_urb_context*) ;
 int FUNC_17 (struct urb*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (struct urb*,int ) ;
 int FUNC_20 (struct urb*) ;

__attribute__((used)) static netdev_tx_t FUNC_21(struct sk_buff *VAR_5,
      struct net_device *VAR_6)
{
 struct kvaser_usb_net_priv *VAR_7 = FUNC_5(VAR_6);
 struct kvaser_usb *VAR_8 = VAR_7->dev;
 struct net_device_stats *VAR_9 = &VAR_6->stats;
 struct kvaser_usb_tx_urb_context *VAR_10 = ((void*)0);
 struct urb *VAR_11;
 void *VAR_12;
 int VAR_13 = 0;
 int VAR_14, VAR_15 = VAR_3;
 unsigned int VAR_16;
 unsigned long VAR_17;

 if (FUNC_0(VAR_6, VAR_5))
  return VAR_3;

 VAR_11 = FUNC_14(0, VAR_1);
 if (!VAR_11) {
  VAR_9->tx_dropped++;
  FUNC_3(VAR_5);
  return VAR_3;
 }

 FUNC_10(&VAR_7->tx_contexts_lock, VAR_17);
 for (VAR_16 = 0; VAR_16 < VAR_8->max_tx_urbs; VAR_16++) {
  if (VAR_7->tx_contexts[VAR_16].echo_index == VAR_8->max_tx_urbs) {
   VAR_10 = &VAR_7->tx_contexts[VAR_16];

   VAR_10->echo_index = VAR_16;
   ++VAR_7->active_tx_contexts;
   if (VAR_7->active_tx_contexts >= (int)VAR_8->max_tx_urbs)
    FUNC_8(VAR_6);

   break;
  }
 }
 FUNC_11(&VAR_7->tx_contexts_lock, VAR_17);


 if (!VAR_10) {
  FUNC_6(VAR_6, "cannot find free context\n");

  VAR_15 = VAR_2;
  goto freeurb;
 }

 VAR_12 = VAR_8->ops->dev_frame_to_cmd(VAR_7, VAR_5, &VAR_10->dlc, &VAR_13,
      VAR_10->echo_index);
 if (!VAR_12) {
  VAR_9->tx_dropped++;
  FUNC_3(VAR_5);
  FUNC_10(&VAR_7->tx_contexts_lock, VAR_17);

  VAR_10->echo_index = VAR_8->max_tx_urbs;
  --VAR_7->active_tx_contexts;
  FUNC_9(VAR_6);

  FUNC_11(&VAR_7->tx_contexts_lock, VAR_17);
  goto freeurb;
 }

 VAR_10->priv = VAR_7;

 FUNC_2(VAR_5, VAR_6, VAR_10->echo_index);

 FUNC_16(VAR_11, VAR_8->udev,
     FUNC_18(VAR_8->udev,
       VAR_8->bulk_out->bEndpointAddress),
     VAR_12, VAR_13, VAR_4,
     VAR_10);
 FUNC_15(VAR_11, &VAR_7->tx_submitted);

 VAR_14 = FUNC_19(VAR_11, VAR_1);
 if (FUNC_13(VAR_14)) {
  FUNC_10(&VAR_7->tx_contexts_lock, VAR_17);

  FUNC_1(VAR_6, VAR_10->echo_index);
  VAR_10->echo_index = VAR_8->max_tx_urbs;
  --VAR_7->active_tx_contexts;
  FUNC_9(VAR_6);

  FUNC_11(&VAR_7->tx_contexts_lock, VAR_17);

  FUNC_20(VAR_11);
  FUNC_4(VAR_12);

  VAR_9->tx_dropped++;

  if (VAR_14 == -VAR_0)
   FUNC_7(VAR_6);
  else
   FUNC_6(VAR_6, "Failed tx_urb %d\n", VAR_14);

  goto freeurb;
 }

 VAR_15 = VAR_3;

freeurb:
 FUNC_17(VAR_11);
 return VAR_15;
}
