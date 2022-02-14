
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct net_device {int name; int * ethtool_ops; int watchdog_timeo; int * netdev_ops; } ;
struct TYPE_10__ {int intr_interval; int intr_buff; struct net_device* netdev; struct usb_device* udev; int rx_pool_lock; int tl; } ;
typedef TYPE_1__ rtl8150_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (TYPE_1__*) ;
 struct usb_device* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 TYPE_1__* FUNC_12 (struct net_device*) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ,unsigned long) ;
 int FUNC_18 (struct usb_interface*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_19(struct usb_interface *VAR_8,
    const struct usb_device_id *VAR_9)
{
 struct usb_device *VAR_10 = FUNC_9(VAR_8);
 rtl8150_t *VAR_11;
 struct net_device *VAR_12;

 VAR_12 = FUNC_2(sizeof(rtl8150_t));
 if (!VAR_12)
  return -VAR_1;

 VAR_11 = FUNC_12(VAR_12);

 VAR_11->intr_buff = FUNC_11(VAR_3, VAR_2);
 if (!VAR_11->intr_buff) {
  FUNC_7(VAR_12);
  return -VAR_1;
 }

 FUNC_17(&VAR_11->tl, VAR_7, (unsigned long)VAR_11);
 FUNC_16(&VAR_11->rx_pool_lock);

 VAR_11->udev = VAR_10;
 VAR_11->netdev = VAR_12;
 VAR_12->netdev_ops = &VAR_6;
 VAR_12->watchdog_timeo = VAR_4;
 VAR_12->ethtool_ops = &VAR_5;
 VAR_11->intr_interval = 100;

 if (!FUNC_1(VAR_11)) {
  FUNC_3(&VAR_8->dev, "out of memory\n");
  goto out;
 }
 if (!FUNC_14(VAR_11)) {
  FUNC_3(&VAR_8->dev, "couldn't reset the device\n");
  goto out1;
 }
 FUNC_5(VAR_11);
 FUNC_15(VAR_11);

 FUNC_18(VAR_8, VAR_11);
 FUNC_0(VAR_12, &VAR_8->dev);
 if (FUNC_13(VAR_12) != 0) {
  FUNC_3(&VAR_8->dev, "couldn't register the device\n");
  goto out2;
 }

 FUNC_4(&VAR_8->dev, "%s: rtl8150 is detected\n", VAR_12->name);

 return 0;

out2:
 FUNC_18(VAR_8, ((void*)0));
 FUNC_8(VAR_11);
out1:
 FUNC_6(VAR_11);
out:
 FUNC_10(VAR_11->intr_buff);
 FUNC_7(VAR_12);
 return -VAR_0;
}
