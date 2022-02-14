
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct r8192_priv {int * pFirmware; struct usb_device* udev; int ieee80211; } ;
struct net_device {int watchdog_timeo; int name; int type; int * wireless_handlers; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct net_device*,int *) ;
 struct net_device* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct net_device*) ;
 struct r8192_priv* FUNC_5 (struct net_device*) ;
 char* VAR_6 ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct usb_interface*,struct net_device*) ;

__attribute__((used)) static int FUNC_18(struct usb_interface *VAR_9,
        const struct usb_device_id *VAR_10)
{
 struct net_device *VAR_11 = ((void*)0);
 struct r8192_priv *VAR_12 = ((void*)0);
 struct usb_device *VAR_13 = FUNC_6(VAR_9);
 int VAR_14;

 FUNC_0(VAR_2, "Oops: i'm coming\n");

 VAR_11 = FUNC_2(sizeof(struct r8192_priv));
 if (!VAR_11)
  return -VAR_4;

 FUNC_17(VAR_9, VAR_11);
 FUNC_1(VAR_11, &VAR_9->dev);
 VAR_12 = FUNC_5(VAR_11);
 VAR_12->ieee80211 = FUNC_9(VAR_11);
 VAR_12->udev = VAR_13;

 VAR_11->netdev_ops = &VAR_8;

 VAR_11->wireless_handlers = &VAR_7;

 VAR_11->type = VAR_0;

 VAR_11->watchdog_timeo = VAR_5 * 3;

 if (FUNC_3(VAR_11, VAR_6) < 0) {
  FUNC_0(VAR_2,
    "Oops: devname already taken! Trying wlan%%d...\n");
  VAR_6 = "wlan%d";
  FUNC_3(VAR_11, VAR_6);
 }

 FUNC_0(VAR_2, "Driver probe completed1\n");
 if (FUNC_14(VAR_11) != 0) {
  FUNC_0(VAR_1, "Initialization failed");
  VAR_14 = -VAR_3;
  goto fail;
 }
 FUNC_10(VAR_11);
 FUNC_11(VAR_11);

 VAR_14 = FUNC_12(VAR_11);
 if (VAR_14)
  goto fail2;

 FUNC_0(VAR_2, "dev name=======> %s\n", VAR_11->name);
 FUNC_15(VAR_11);


 FUNC_0(VAR_2, "Driver probe completed\n");
 return 0;

fail2:
 FUNC_13(VAR_11);
fail:
 FUNC_7(VAR_12->pFirmware);
 VAR_12->pFirmware = ((void*)0);
 FUNC_16(VAR_11);
 FUNC_8(10);
 FUNC_4(VAR_11);

 FUNC_0(VAR_1, "wlan driver load failed\n");
 return VAR_14;
}
