
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusbhc {int dummy; } ;
struct wusb_dev {int addr; struct usb_device* usb_dev; } ;
struct device {int dummy; } ;
struct usb_device {int authenticated; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,int,int ,int *,int ,int ) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;
 int FUNC_5 (struct wusbhc*,struct wusb_dev*,int) ;

int FUNC_6(struct wusbhc *VAR_8, struct wusb_dev *VAR_9)
{
 int VAR_10 = -VAR_0;
 struct usb_device *VAR_11 = VAR_9->usb_dev;
 struct device *VAR_12 = &VAR_11->dev;
 u8 VAR_13 = VAR_9->addr & 0x7F;


 VAR_10 = FUNC_1(VAR_11, FUNC_4(VAR_11, 0),
   VAR_4,
   VAR_2 | VAR_7 | VAR_3,
    0, 0, ((void*)0), 0, VAR_1);
 if (VAR_10 < 0) {
  FUNC_0(VAR_12, "auth failed: can't set address 0: %d\n",
   VAR_10);
  goto error_addr0;
 }
 VAR_10 = FUNC_5(VAR_8, VAR_9, 0);
 if (VAR_10 < 0)
  goto error_addr0;
 FUNC_3(VAR_11, VAR_6);
 FUNC_2(VAR_11);


 VAR_10 = FUNC_1(VAR_11, FUNC_4(VAR_11, 0),
   VAR_4,
   VAR_2 | VAR_7 | VAR_3,
   VAR_13, 0, ((void*)0), 0,
   VAR_1);
 if (VAR_10 < 0) {
  FUNC_0(VAR_12, "auth failed: can't set address %u: %d\n",
   VAR_13, VAR_10);
  goto error_addr;
 }
 VAR_10 = FUNC_5(VAR_8, VAR_9, VAR_13);
 if (VAR_10 < 0)
  goto error_addr;
 FUNC_3(VAR_11, VAR_5);
 FUNC_2(VAR_11);
 VAR_11->authenticated = 1;
error_addr:
error_addr0:
 return VAR_10;
}
