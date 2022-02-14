
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {int msdstate; int netdev; struct wlandevice* wlandev; struct wlandevice* priv; } ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct hfa384x {int msdstate; int netdev; struct hfa384x* wlandev; struct hfa384x* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 struct wlandevice* FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct wlandevice*,int ,int ,int ) ;
 int FUNC_4 (struct wlandevice*,struct usb_device*) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct wlandevice*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (struct usb_device*,struct wlandevice*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct wlandevice*,int ) ;
 scalar_t__ FUNC_9 (struct wlandevice*) ;
 int FUNC_10 (struct usb_device*) ;
 int FUNC_11 (struct usb_device*) ;
 int FUNC_12 (struct usb_interface*,struct wlandevice*) ;
 scalar_t__ FUNC_13 (struct wlandevice*,int *) ;
 int FUNC_14 (struct wlandevice*) ;

__attribute__((used)) static int FUNC_15(struct usb_interface *VAR_6,
          const struct usb_device_id *VAR_7)
{
 struct usb_device *VAR_8;

 struct wlandevice *VAR_9 = ((void*)0);
 struct hfa384x *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 VAR_8 = FUNC_5(VAR_6);
 VAR_9 = FUNC_1();
 if (!VAR_9) {
  FUNC_2(&VAR_6->dev, "Memory allocation failure.\n");
  VAR_11 = -VAR_0;
  goto failed;
 }
 VAR_10 = VAR_9->priv;

 if (FUNC_13(VAR_9, &VAR_6->dev) != 0) {
  FUNC_2(&VAR_6->dev, "wlan_setup() failed.\n");
  VAR_11 = -VAR_0;
  goto failed;
 }


 FUNC_4(VAR_10, VAR_8);
 VAR_10->wlandev = VAR_9;




 FUNC_0(VAR_9->netdev, &VAR_6->dev);


 if (VAR_3) {
  VAR_11 = FUNC_3(VAR_10,
        VAR_4,
        VAR_5, 0);
  if (VAR_11 != 0) {
   VAR_11 = -VAR_0;
   FUNC_2(&VAR_6->dev,
    "hfa384x_corereset() failed.\n");
   goto failed_reset;
  }
 }

 FUNC_10(VAR_8);

 VAR_9->msdstate = VAR_2;


 FUNC_7(VAR_8, VAR_9);
 FUNC_8(VAR_9, VAR_1);

 if (FUNC_9(VAR_9) != 0) {
  FUNC_2(&VAR_6->dev, "register_wlandev() failed.\n");
  VAR_11 = -VAR_0;
  goto failed_register;
 }

 goto done;

failed_register:
 FUNC_11(VAR_8);
failed_reset:
 FUNC_14(VAR_9);
failed:
 FUNC_6(VAR_9);
 FUNC_6(VAR_10);
 VAR_9 = ((void*)0);

done:
 FUNC_12(VAR_6, VAR_9);
 return VAR_11;
}
