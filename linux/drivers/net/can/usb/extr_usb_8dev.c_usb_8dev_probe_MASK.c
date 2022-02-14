
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_5__ {int iProduct; } ;
struct usb_device {int dev; TYPE_1__ descriptor; } ;
struct TYPE_6__ {int freq; } ;
struct TYPE_7__ {int ctrlmode_supported; int do_get_berr_counter; int do_set_mode; int * bittiming_const; TYPE_2__ clock; int state; } ;
struct usb_8dev_priv {struct net_device* netdev; int usb_8dev_cmd_lock; int cmd_msg_buffer; TYPE_4__* tx_contexts; int active_tx_urbs; int tx_submitted; int rx_submitted; TYPE_3__ can; struct usb_device* udev; } ;
struct usb_8dev_cmd_msg {int dummy; } ;
struct net_device {int flags; int * netdev_ops; } ;
typedef int buf ;
struct TYPE_8__ {int echo_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_9 ;
 struct net_device* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;
 struct usb_device* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct net_device*,char*,...) ;
 int FUNC_12 (struct net_device*,char*,int,int,int,int) ;
 struct usb_8dev_priv* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (struct net_device*) ;
 int VAR_10 ;
 int FUNC_17 (struct usb_8dev_priv*,int*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_18 (struct usb_interface*,struct usb_8dev_priv*) ;
 scalar_t__ FUNC_19 (struct usb_device*,int ,char*,int) ;

__attribute__((used)) static int FUNC_20(struct usb_interface *VAR_14,
    const struct usb_device_id *VAR_15)
{
 struct net_device *VAR_16;
 struct usb_8dev_priv *VAR_17;
 int VAR_18, VAR_19 = -VAR_5;
 u32 VAR_20;
 char VAR_21[18];
 struct usb_device *VAR_22 = FUNC_9(VAR_14);


 if (FUNC_19(VAR_22, VAR_22->descriptor.iProduct, VAR_21,
         sizeof(VAR_21)) > 0 && FUNC_15(VAR_21, "USB2CAN converter")) {
  FUNC_4(&VAR_22->dev, "ignoring: not an USB2CAN converter\n");
  return -VAR_4;
 }

 VAR_16 = FUNC_1(sizeof(struct usb_8dev_priv), VAR_8);
 if (!VAR_16) {
  FUNC_3(&VAR_14->dev, "Couldn't alloc candev\n");
  return -VAR_5;
 }

 VAR_17 = FUNC_13(VAR_16);

 VAR_17->udev = VAR_22;
 VAR_17->netdev = VAR_16;

 VAR_17->can.state = VAR_3;
 VAR_17->can.clock.freq = VAR_9;
 VAR_17->can.bittiming_const = &VAR_10;
 VAR_17->can.do_set_mode = VAR_13;
 VAR_17->can.do_get_berr_counter = VAR_11;
 VAR_17->can.ctrlmode_supported = VAR_1 |
          VAR_0 |
          VAR_2;

 VAR_16->netdev_ops = &VAR_12;

 VAR_16->flags |= VAR_7;

 FUNC_8(&VAR_17->rx_submitted);

 FUNC_8(&VAR_17->tx_submitted);
 FUNC_2(&VAR_17->active_tx_urbs, 0);

 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++)
  VAR_17->tx_contexts[VAR_18].echo_index = VAR_8;

 VAR_17->cmd_msg_buffer = FUNC_6(&VAR_14->dev, sizeof(struct usb_8dev_cmd_msg),
         VAR_6);
 if (!VAR_17->cmd_msg_buffer)
  goto cleanup_candev;

 FUNC_18(VAR_14, VAR_17);

 FUNC_0(VAR_16, &VAR_14->dev);

 FUNC_10(&VAR_17->usb_8dev_cmd_lock);

 VAR_19 = FUNC_14(VAR_16);
 if (VAR_19) {
  FUNC_11(VAR_16,
   "couldn't register CAN device: %d\n", VAR_19);
  goto cleanup_candev;
 }

 VAR_19 = FUNC_17(VAR_17, &VAR_20);
 if (VAR_19) {
  FUNC_11(VAR_16, "can't get firmware version\n");
  goto cleanup_unregister_candev;
 } else {
  FUNC_12(VAR_16,
    "firmware: %d.%d, hardware: %d.%d\n",
    (VAR_20>>24) & 0xff, (VAR_20>>16) & 0xff,
    (VAR_20>>8) & 0xff, VAR_20 & 0xff);
 }

 FUNC_5(VAR_16);

 return 0;

cleanup_unregister_candev:
 FUNC_16(VAR_17->netdev);

cleanup_candev:
 FUNC_7(VAR_16);

 return VAR_19;

}
