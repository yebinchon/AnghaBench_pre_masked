
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct net_device {int flags; int * netdev_ops; } ;
struct TYPE_4__ {int freq; } ;
struct TYPE_5__ {int ctrlmode_supported; int do_set_mode; int do_set_bittiming; int * bittiming_const; TYPE_1__ clock; int state; } ;
struct ems_usb {int intr_urb; void* intr_in_buffer; void* tx_msg_buffer; int active_params; TYPE_3__* tx_contexts; int active_tx_urbs; int tx_submitted; int rx_submitted; TYPE_2__ can; struct net_device* netdev; int udev; } ;
struct ems_cpc_msg {int dummy; } ;
struct TYPE_6__ {int echo_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_9 ;
 int FUNC_4 (struct ems_usb*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (struct net_device*,char*,int) ;
 struct ems_usb* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct usb_interface*,struct ems_usb*) ;

__attribute__((used)) static int FUNC_17(struct usb_interface *VAR_13,
    const struct usb_device_id *VAR_14)
{
 struct net_device *VAR_15;
 struct ems_usb *VAR_16;
 int VAR_17, VAR_18 = -VAR_4;

 VAR_15 = FUNC_1(sizeof(struct ems_usb), VAR_8);
 if (!VAR_15) {
  FUNC_3(&VAR_13->dev, "ems_usb: Couldn't alloc candev\n");
  return -VAR_4;
 }

 VAR_16 = FUNC_12(VAR_15);

 VAR_16->udev = FUNC_8(VAR_13);
 VAR_16->netdev = VAR_15;

 VAR_16->can.state = VAR_1;
 VAR_16->can.clock.freq = VAR_3;
 VAR_16->can.bittiming_const = &VAR_9;
 VAR_16->can.do_set_bittiming = VAR_11;
 VAR_16->can.do_set_mode = VAR_12;
 VAR_16->can.ctrlmode_supported = VAR_0;

 VAR_15->netdev_ops = &VAR_10;

 VAR_15->flags |= VAR_6;

 FUNC_7(&VAR_16->rx_submitted);

 FUNC_7(&VAR_16->tx_submitted);
 FUNC_2(&VAR_16->active_tx_urbs, 0);

 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++)
  VAR_16->tx_contexts[VAR_17].echo_index = VAR_8;

 VAR_16->intr_urb = FUNC_14(0, VAR_5);
 if (!VAR_16->intr_urb)
  goto cleanup_candev;

 VAR_16->intr_in_buffer = FUNC_10(VAR_7, VAR_5);
 if (!VAR_16->intr_in_buffer)
  goto cleanup_intr_urb;

 VAR_16->tx_msg_buffer = FUNC_10(VAR_2 +
         sizeof(struct ems_cpc_msg), VAR_5);
 if (!VAR_16->tx_msg_buffer)
  goto cleanup_intr_in_buffer;

 FUNC_16(VAR_13, VAR_16);

 FUNC_0(VAR_15, &VAR_13->dev);

 FUNC_6(&VAR_16->active_params);

 VAR_18 = FUNC_4(VAR_16, &VAR_16->active_params);
 if (VAR_18) {
  FUNC_11(VAR_15, "couldn't initialize controller: %d\n", VAR_18);
  goto cleanup_tx_msg_buffer;
 }

 VAR_18 = FUNC_13(VAR_15);
 if (VAR_18) {
  FUNC_11(VAR_15, "couldn't register CAN device: %d\n", VAR_18);
  goto cleanup_tx_msg_buffer;
 }

 return 0;

cleanup_tx_msg_buffer:
 FUNC_9(VAR_16->tx_msg_buffer);

cleanup_intr_in_buffer:
 FUNC_9(VAR_16->intr_in_buffer);

cleanup_intr_urb:
 FUNC_15(VAR_16->intr_urb);

cleanup_candev:
 FUNC_5(VAR_15);

 return VAR_18;
}
