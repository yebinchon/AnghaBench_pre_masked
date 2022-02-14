
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct net_device {int * ethtool_ops; int name; int watchdog_timeo; int * netdev_ops; } ;
struct ipheth_device {int confirmed_pairing; int * ctrl_buf; int carrier_work; scalar_t__ bulk_out; scalar_t__ bulk_in; struct usb_interface* intf; struct net_device* net; struct usb_device* udev; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*,int *) ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct net_device*) ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct ipheth_device*) ;
 int VAR_7 ;
 int FUNC_8 (struct ipheth_device*) ;
 int FUNC_9 (struct ipheth_device*) ;
 int VAR_8 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ,int ) ;
 struct ipheth_device* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int VAR_9 ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ,char*) ;
 struct usb_host_interface* FUNC_17 (struct usb_interface*,int ) ;
 scalar_t__ FUNC_18 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_19 (struct usb_endpoint_descriptor*) ;
 int FUNC_20 (struct usb_interface*,struct ipheth_device*) ;

__attribute__((used)) static int FUNC_21(struct usb_interface *VAR_10,
   const struct usb_device_id *VAR_11)
{
 struct usb_device *VAR_12 = FUNC_6(VAR_10);
 struct usb_host_interface *VAR_13;
 struct usb_endpoint_descriptor *VAR_14;
 struct ipheth_device *VAR_15;
 struct net_device *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_16 = FUNC_2(sizeof(struct ipheth_device));
 if (!VAR_16)
  return -VAR_2;

 VAR_16->netdev_ops = &VAR_8;
 VAR_16->watchdog_timeo = VAR_6;
 FUNC_16(VAR_16->name, "eth%d");

 VAR_15 = FUNC_12(VAR_16);
 VAR_15->udev = VAR_12;
 VAR_15->net = VAR_16;
 VAR_15->intf = VAR_10;
 VAR_15->confirmed_pairing = 0;

 VAR_13 = FUNC_17(VAR_10, VAR_4);
 if (VAR_13 == ((void*)0)) {
  VAR_18 = -VAR_1;
  FUNC_3(&VAR_10->dev, "Unable to find alternate settings interface\n");
  goto err_endpoints;
 }

 for (VAR_17 = 0; VAR_17 < VAR_13->desc.bNumEndpoints; VAR_17++) {
  VAR_14 = &VAR_13->endpoint[VAR_17].desc;
  if (FUNC_18(VAR_14))
   VAR_15->bulk_in = VAR_14->bEndpointAddress;
  else if (FUNC_19(VAR_14))
   VAR_15->bulk_out = VAR_14->bEndpointAddress;
 }
 if (!(VAR_15->bulk_in && VAR_15->bulk_out)) {
  VAR_18 = -VAR_1;
  FUNC_3(&VAR_10->dev, "Unable to find endpoints\n");
  goto err_endpoints;
 }

 VAR_15->ctrl_buf = FUNC_11(VAR_5, VAR_3);
 if (VAR_15->ctrl_buf == ((void*)0)) {
  VAR_18 = -VAR_2;
  goto err_alloc_ctrl_buf;
 }

 VAR_18 = FUNC_9(VAR_15);
 if (VAR_18)
  goto err_get_macaddr;

 FUNC_0(&VAR_15->carrier_work, VAR_7);

 VAR_18 = FUNC_7(VAR_15);
 if (VAR_18) {
  FUNC_3(&VAR_10->dev, "error allocating urbs: %d\n", VAR_18);
  goto err_alloc_urbs;
 }

 FUNC_20(VAR_10, VAR_15);

 FUNC_1(VAR_16, &VAR_10->dev);
 VAR_16->ethtool_ops = &VAR_9;

 VAR_18 = FUNC_15(VAR_16);
 if (VAR_18) {
  FUNC_3(&VAR_10->dev, "error registering netdev: %d\n", VAR_18);
  VAR_18 = -VAR_0;
  goto err_register_netdev;
 }

 FUNC_13(VAR_16);
 FUNC_14(VAR_16);
 FUNC_4(&VAR_10->dev, "Apple iPhone USB Ethernet device attached\n");
 return 0;

err_register_netdev:
 FUNC_8(VAR_15);
err_alloc_urbs:
err_get_macaddr:
err_alloc_ctrl_buf:
 FUNC_10(VAR_15->ctrl_buf);
err_endpoints:
 FUNC_5(VAR_16);
 return VAR_18;
}
