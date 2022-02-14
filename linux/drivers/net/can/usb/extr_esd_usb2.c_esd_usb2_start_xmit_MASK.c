
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct urb {int transfer_dma; int transfer_flags; } ;
struct sk_buff {scalar_t__ data; } ;
struct net_device_stats {int tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct esd_usb2_net_priv {int active_tx_jobs; int tx_submitted; struct esd_tx_urb_context* tx_contexts; int index; struct esd_usb2* usb2; } ;
struct TYPE_5__ {int len; int cmd; } ;
struct TYPE_4__ {int dlc; int hnd; int * data; int id; int net; } ;
struct TYPE_6__ {TYPE_2__ hdr; TYPE_1__ tx; } ;
struct esd_usb2_msg {TYPE_3__ msg; } ;
struct esd_usb2 {int udev; } ;
struct esd_tx_urb_context {int echo_index; int dlc; struct esd_usb2_net_priv* priv; } ;
struct can_frame {int can_dlc; int can_id; int * data; } ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct net_device*,struct sk_buff*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct sk_buff*,struct net_device*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff*) ;
 int VAR_12 ;
 int FUNC_8 (struct net_device*,char*) ;
 struct esd_usb2_net_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*,char*,...) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int * FUNC_14 (int ,size_t,int ,int *) ;
 struct urb* FUNC_15 (int ,int ) ;
 int FUNC_16 (struct urb*,int *) ;
 int FUNC_17 (struct urb*,int ,int ,int *,int,int ,struct esd_tx_urb_context*) ;
 int FUNC_18 (int ,size_t,int *,int ) ;
 int FUNC_19 (struct urb*) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (struct urb*,int ) ;
 int FUNC_22 (struct urb*) ;

__attribute__((used)) static netdev_tx_t FUNC_23(struct sk_buff *VAR_13,
          struct net_device *VAR_14)
{
 struct esd_usb2_net_priv *VAR_15 = FUNC_9(VAR_14);
 struct esd_usb2 *VAR_16 = VAR_15->usb2;
 struct esd_tx_urb_context *VAR_17 = ((void*)0);
 struct net_device_stats *VAR_18 = &VAR_14->stats;
 struct can_frame *VAR_19 = (struct can_frame *)VAR_13->data;
 struct esd_usb2_msg *VAR_20;
 struct urb *VAR_21;
 u8 *VAR_22;
 int VAR_23, VAR_24;
 int VAR_25 = VAR_10;
 size_t VAR_26 = sizeof(struct esd_usb2_msg);

 if (FUNC_3(VAR_14, VAR_13))
  return VAR_10;


 VAR_21 = FUNC_15(0, VAR_7);
 if (!VAR_21) {
  VAR_18->tx_dropped++;
  FUNC_7(VAR_13);
  goto nourbmem;
 }

 VAR_22 = FUNC_14(VAR_16->udev, VAR_26, VAR_7,
     &VAR_21->transfer_dma);
 if (!VAR_22) {
  FUNC_8(VAR_14, "No memory left for USB buffer\n");
  VAR_18->tx_dropped++;
  FUNC_7(VAR_13);
  goto nobufmem;
 }

 VAR_20 = (struct esd_usb2_msg *)VAR_22;

 VAR_20->msg.hdr.len = 3;
 VAR_20->msg.hdr.cmd = VAR_3;
 VAR_20->msg.tx.net = VAR_15->index;
 VAR_20->msg.tx.dlc = VAR_19->can_dlc;
 VAR_20->msg.tx.id = FUNC_6(VAR_19->can_id & VAR_1);

 if (VAR_19->can_id & VAR_2)
  VAR_20->msg.tx.dlc |= VAR_6;

 if (VAR_19->can_id & VAR_0)
  VAR_20->msg.tx.id |= FUNC_6(VAR_5);

 for (VAR_23 = 0; VAR_23 < VAR_19->can_dlc; VAR_23++)
  VAR_20->msg.tx.data[VAR_23] = VAR_19->data[VAR_23];

 VAR_20->msg.hdr.len += (VAR_19->can_dlc + 3) >> 2;

 for (VAR_23 = 0; VAR_23 < VAR_8; VAR_23++) {
  if (VAR_15->tx_contexts[VAR_23].echo_index == VAR_8) {
   VAR_17 = &VAR_15->tx_contexts[VAR_23];
   break;
  }
 }




 if (!VAR_17) {
  FUNC_10(VAR_14, "couldn't find free context\n");
  VAR_25 = VAR_9;
  goto releasebuf;
 }

 VAR_17->priv = VAR_15;
 VAR_17->echo_index = VAR_23;
 VAR_17->dlc = VAR_19->can_dlc;


 VAR_20->msg.tx.hnd = 0x80000000 | VAR_23;

 FUNC_17(VAR_21, VAR_16->udev, FUNC_20(VAR_16->udev, 2), VAR_22,
     VAR_20->msg.hdr.len << 2,
     VAR_12, VAR_17);

 VAR_21->transfer_flags |= VAR_11;

 FUNC_16(VAR_21, &VAR_15->tx_submitted);

 FUNC_5(VAR_13, VAR_14, VAR_17->echo_index);

 FUNC_1(&VAR_15->active_tx_jobs);


 if (FUNC_2(&VAR_15->active_tx_jobs) >= VAR_8)
  FUNC_12(VAR_14);

 VAR_24 = FUNC_21(VAR_21, VAR_7);
 if (VAR_24) {
  FUNC_4(VAR_14, VAR_17->echo_index);

  FUNC_0(&VAR_15->active_tx_jobs);
  FUNC_22(VAR_21);

  VAR_18->tx_dropped++;

  if (VAR_24 == -VAR_4)
   FUNC_11(VAR_14);
  else
   FUNC_10(VAR_14, "failed tx_urb %d\n", VAR_24);

  goto releasebuf;
 }

 FUNC_13(VAR_14);





 FUNC_19(VAR_21);

 return VAR_10;

releasebuf:
 FUNC_18(VAR_16->udev, VAR_26, VAR_22, VAR_21->transfer_dma);

nobufmem:
 FUNC_19(VAR_21);

nourbmem:
 return VAR_25;
}
