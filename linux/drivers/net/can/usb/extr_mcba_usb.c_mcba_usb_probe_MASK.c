
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct net_device {int flags; int * netdev_ops; } ;
struct TYPE_2__ {int do_set_bittiming; int do_get_berr_counter; int do_set_mode; int do_set_termination; void* bitrate_const_cnt; void* bitrate_const; void* termination_const_cnt; void* termination_const; int state; } ;
struct mcba_priv {int usb_ka_first_pass; int can_ka_first_pass; int can_speed_check; struct net_device* netdev; TYPE_1__ can; int tx_submitted; int rx_submitted; struct usb_device* udev; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*,int *) ;
 struct net_device* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_9 (struct mcba_priv*) ;
 int FUNC_10 (struct net_device*,char*,int) ;
 struct mcba_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*,char*,int) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct usb_interface*,struct mcba_priv*) ;

__attribute__((used)) static int FUNC_17(struct usb_interface *VAR_12,
     const struct usb_device_id *VAR_13)
{
 struct net_device *VAR_14;
 struct mcba_priv *VAR_15;
 int VAR_16 = -VAR_2;
 struct usb_device *VAR_17 = FUNC_8(VAR_12);

 VAR_14 = FUNC_2(sizeof(struct mcba_priv), VAR_4);
 if (!VAR_14) {
  FUNC_3(&VAR_12->dev, "Couldn't alloc candev\n");
  return -VAR_2;
 }

 VAR_15 = FUNC_11(VAR_14);

 VAR_15->udev = VAR_17;
 VAR_15->netdev = VAR_14;
 VAR_15->usb_ka_first_pass = 1;
 VAR_15->can_ka_first_pass = 1;
 VAR_15->can_speed_check = 0;

 FUNC_7(&VAR_15->rx_submitted);
 FUNC_7(&VAR_15->tx_submitted);

 FUNC_16(VAR_12, VAR_15);


 VAR_15->can.state = VAR_0;
 VAR_15->can.termination_const = VAR_11;
 VAR_15->can.termination_const_cnt = FUNC_0(VAR_11);
 VAR_15->can.bitrate_const = VAR_5;
 VAR_15->can.bitrate_const_cnt = FUNC_0(VAR_5);

 VAR_15->can.do_set_termination = VAR_10;
 VAR_15->can.do_set_mode = VAR_8;
 VAR_15->can.do_get_berr_counter = VAR_6;
 VAR_15->can.do_set_bittiming = VAR_7;

 VAR_14->netdev_ops = &VAR_9;

 VAR_14->flags |= VAR_3;

 FUNC_1(VAR_14, &VAR_12->dev);

 VAR_16 = FUNC_14(VAR_14);
 if (VAR_16) {
  FUNC_10(VAR_14, "couldn't register CAN device: %d\n", VAR_16);

  goto cleanup_free_candev;
 }

 FUNC_5(VAR_14);


 VAR_16 = FUNC_9(VAR_15);
 if (VAR_16) {
  if (VAR_16 == -VAR_1)
   FUNC_13(VAR_15->netdev);

  FUNC_12(VAR_14, "couldn't start device: %d\n", VAR_16);

  goto cleanup_unregister_candev;
 }

 FUNC_4(&VAR_12->dev, "Microchip CAN BUS Analyzer connected\n");

 return 0;

cleanup_unregister_candev:
 FUNC_15(VAR_15->netdev);

cleanup_free_candev:
 FUNC_6(VAR_14);

 return VAR_16;
}
