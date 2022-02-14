
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct urb {int transfer_dma; int transfer_flags; } ;
struct sk_buff {scalar_t__ data; } ;
struct net_device_stats {int tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct ems_usb {scalar_t__ free_slots; int active_tx_urbs; int udev; int tx_submitted; struct ems_tx_urb_context* tx_contexts; } ;
struct ems_tx_urb_context {int echo_index; int dlc; struct ems_usb* dev; } ;
struct TYPE_3__ {int length; int * msg; int id; } ;
struct TYPE_4__ {TYPE_1__ can_msg; } ;
struct ems_cpc_msg {void* length; TYPE_2__ msg; int type; } ;
struct cpc_can_msg {int dummy; } ;
struct can_frame {int can_id; int can_dlc; int * data; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct net_device*,struct sk_buff*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct sk_buff*,struct net_device*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff*) ;
 int VAR_17 ;
 int FUNC_8 (struct net_device*,char*) ;
 struct ems_usb* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*,char*,...) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (int) ;
 int * FUNC_15 (int ,size_t,int ,int *) ;
 struct urb* FUNC_16 (int ,int ) ;
 int FUNC_17 (struct urb*,int *) ;
 int FUNC_18 (struct urb*,int ,int ,int *,size_t,int ,struct ems_tx_urb_context*) ;
 int FUNC_19 (int ,size_t,int *,int ) ;
 int FUNC_20 (struct urb*) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (struct urb*,int ) ;
 int FUNC_23 (struct urb*) ;

__attribute__((used)) static netdev_tx_t FUNC_24(struct sk_buff *VAR_18, struct net_device *VAR_19)
{
 struct ems_usb *VAR_20 = FUNC_9(VAR_19);
 struct ems_tx_urb_context *VAR_21 = ((void*)0);
 struct net_device_stats *VAR_22 = &VAR_19->stats;
 struct can_frame *VAR_23 = (struct can_frame *)VAR_18->data;
 struct ems_cpc_msg *VAR_24;
 struct urb *VAR_25;
 u8 *VAR_26;
 int VAR_27, VAR_28;
 size_t VAR_29 = VAR_8 + VAR_9
   + sizeof(struct cpc_can_msg);

 if (FUNC_3(VAR_19, VAR_18))
  return VAR_15;


 VAR_25 = FUNC_16(0, VAR_12);
 if (!VAR_25)
  goto nomem;

 VAR_26 = FUNC_15(VAR_20->udev, VAR_29, VAR_12, &VAR_25->transfer_dma);
 if (!VAR_26) {
  FUNC_8(VAR_19, "No memory left for USB buffer\n");
  FUNC_20(VAR_25);
  goto nomem;
 }

 VAR_24 = (struct ems_cpc_msg *)&VAR_26[VAR_8];

 VAR_24->msg.can_msg.id = FUNC_6(VAR_23->can_id & VAR_1);
 VAR_24->msg.can_msg.length = VAR_23->can_dlc;

 if (VAR_23->can_id & VAR_2) {
  VAR_24->type = VAR_23->can_id & VAR_0 ?
   VAR_6 : VAR_7;

  VAR_24->length = VAR_3;
 } else {
  VAR_24->type = VAR_23->can_id & VAR_0 ?
   VAR_5 : VAR_4;

  for (VAR_27 = 0; VAR_27 < VAR_23->can_dlc; VAR_27++)
   VAR_24->msg.can_msg.msg[VAR_27] = VAR_23->data[VAR_27];

  VAR_24->length = VAR_3 + VAR_23->can_dlc;
 }

 for (VAR_27 = 0; VAR_27 < VAR_13; VAR_27++) {
  if (VAR_20->tx_contexts[VAR_27].echo_index == VAR_13) {
   VAR_21 = &VAR_20->tx_contexts[VAR_27];
   break;
  }
 }





 if (!VAR_21) {
  FUNC_19(VAR_20->udev, VAR_29, VAR_26, VAR_25->transfer_dma);
  FUNC_20(VAR_25);

  FUNC_10(VAR_19, "couldn't find free context\n");

  return VAR_14;
 }

 VAR_21->dev = VAR_20;
 VAR_21->echo_index = VAR_27;
 VAR_21->dlc = VAR_23->can_dlc;

 FUNC_18(VAR_25, VAR_20->udev, FUNC_21(VAR_20->udev, 2), VAR_26,
     VAR_29, VAR_17, VAR_21);
 VAR_25->transfer_flags |= VAR_16;
 FUNC_17(VAR_25, &VAR_20->tx_submitted);

 FUNC_5(VAR_18, VAR_19, VAR_21->echo_index);

 FUNC_1(&VAR_20->active_tx_urbs);

 VAR_28 = FUNC_22(VAR_25, VAR_12);
 if (FUNC_14(VAR_28)) {
  FUNC_4(VAR_19, VAR_21->echo_index);

  FUNC_23(VAR_25);
  FUNC_19(VAR_20->udev, VAR_29, VAR_26, VAR_25->transfer_dma);
  FUNC_7(VAR_18);

  FUNC_0(&VAR_20->active_tx_urbs);

  if (VAR_28 == -VAR_11) {
   FUNC_11(VAR_19);
  } else {
   FUNC_10(VAR_19, "failed tx_urb %d\n", VAR_28);

   VAR_22->tx_dropped++;
  }
 } else {
  FUNC_13(VAR_19);


  if (FUNC_2(&VAR_20->active_tx_urbs) >= VAR_13 ||
      VAR_20->free_slots < VAR_10) {
   FUNC_12(VAR_19);
  }
 }





 FUNC_20(VAR_25);

 return VAR_15;

nomem:
 FUNC_7(VAR_18);
 VAR_22->tx_dropped++;

 return VAR_15;
}
