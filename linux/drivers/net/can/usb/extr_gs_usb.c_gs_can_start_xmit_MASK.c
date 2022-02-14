
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_dma; int transfer_flags; } ;
struct sk_buff {scalar_t__ data; } ;
struct net_device_stats {int tx_dropped; } ;
struct net_device {int dummy; } ;
struct gs_tx_context {unsigned int echo_id; } ;
struct gs_host_frame {unsigned int echo_id; int data; int can_dlc; int can_id; int channel; } ;
struct gs_can {int udev; int active_tx_urbs; int tx_submitted; int channel; TYPE_1__* netdev; } ;
struct can_frame {int can_dlc; int data; int can_id; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct net_device*,struct sk_buff*) ;
 int FUNC_4 (struct net_device*,unsigned int) ;
 int FUNC_5 (struct sk_buff*,struct net_device*,unsigned int) ;
 int FUNC_6 (struct sk_buff*) ;
 struct gs_tx_context* FUNC_7 (struct gs_can*) ;
 int FUNC_8 (struct gs_tx_context*) ;
 int VAR_7 ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct net_device*,char*,...) ;
 struct gs_can* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (int) ;
 struct gs_host_frame* FUNC_15 (int ,int,int ,int *) ;
 struct urb* FUNC_16 (int ,int ) ;
 int FUNC_17 (struct urb*,int *) ;
 int FUNC_18 (struct urb*,int ,int ,struct gs_host_frame*,int,int ,struct gs_tx_context*) ;
 int FUNC_19 (int ,int,struct gs_host_frame*,int ) ;
 int FUNC_20 (struct urb*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (struct urb*,int ) ;
 int FUNC_23 (struct urb*) ;

__attribute__((used)) static netdev_tx_t FUNC_24(struct sk_buff *VAR_8,
         struct net_device *VAR_9)
{
 struct gs_can *VAR_10 = FUNC_11(VAR_9);
 struct net_device_stats *VAR_11 = &VAR_10->netdev->stats;
 struct urb *VAR_12;
 struct gs_host_frame *VAR_13;
 struct can_frame *VAR_14;
 int VAR_15;
 unsigned int VAR_16;
 struct gs_tx_context *VAR_17;

 if (FUNC_3(VAR_9, VAR_8))
  return VAR_5;


 VAR_17 = FUNC_7(VAR_10);
 if (!VAR_17)
  return VAR_4;


 VAR_12 = FUNC_16(0, VAR_1);
 if (!VAR_12)
  goto nomem_urb;

 VAR_13 = FUNC_15(VAR_10->udev, sizeof(*VAR_13), VAR_1,
    &VAR_12->transfer_dma);
 if (!VAR_13) {
  FUNC_10(VAR_9, "No memory left for USB buffer\n");
  goto nomem_hf;
 }

 VAR_16 = VAR_17->echo_id;

 if (VAR_16 >= VAR_3) {
  FUNC_10(VAR_9, "Invalid tx context %d\n", VAR_16);
  goto badidx;
 }

 VAR_13->echo_id = VAR_16;
 VAR_13->channel = VAR_10->channel;

 VAR_14 = (struct can_frame *)VAR_8->data;

 VAR_13->can_id = VAR_14->can_id;
 VAR_13->can_dlc = VAR_14->can_dlc;
 FUNC_9(VAR_13->data, VAR_14->data, VAR_14->can_dlc);

 FUNC_18(VAR_12, VAR_10->udev,
     FUNC_21(VAR_10->udev, VAR_2),
     VAR_13,
     sizeof(*VAR_13),
     VAR_7,
     VAR_17);

 VAR_12->transfer_flags |= VAR_6;
 FUNC_17(VAR_12, &VAR_10->tx_submitted);

 FUNC_5(VAR_8, VAR_9, VAR_16);

 FUNC_1(&VAR_10->active_tx_urbs);

 VAR_15 = FUNC_22(VAR_12, VAR_1);
 if (FUNC_14(VAR_15)) {
  FUNC_0(&VAR_10->active_tx_urbs);

  FUNC_4(VAR_9, VAR_16);
  FUNC_8(VAR_17);

  FUNC_23(VAR_12);
  FUNC_19(VAR_10->udev,
      sizeof(*VAR_13),
      VAR_13,
      VAR_12->transfer_dma);

  if (VAR_15 == -VAR_0) {
   FUNC_12(VAR_9);
  } else {
   FUNC_10(VAR_9, "usb_submit failed (err=%d)\n", VAR_15);
   VAR_11->tx_dropped++;
  }
 } else {

  if (FUNC_2(&VAR_10->active_tx_urbs) >= VAR_3)
   FUNC_13(VAR_9);
 }


 FUNC_20(VAR_12);

 return VAR_5;

 badidx:
 FUNC_19(VAR_10->udev,
     sizeof(*VAR_13),
     VAR_13,
     VAR_12->transfer_dma);
 nomem_hf:
 FUNC_20(VAR_12);

 nomem_urb:
 FUNC_8(VAR_17);
 FUNC_6(VAR_8);
 VAR_11->tx_dropped++;
 return VAR_5;
}
