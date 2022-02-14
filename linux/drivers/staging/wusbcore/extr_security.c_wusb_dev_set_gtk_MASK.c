
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int bLength; } ;
struct TYPE_3__ {TYPE_2__ descr; } ;
struct wusbhc {TYPE_1__ gtk; int gtk_index; } ;
struct wusb_dev {struct usb_device* usb_dev; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int,int ,TYPE_2__*,int ,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct wusbhc *VAR_8, struct wusb_dev *VAR_9)
{
 struct usb_device *VAR_10 = VAR_9->usb_dev;
 u8 VAR_11 = FUNC_2(VAR_8->gtk_index,
  VAR_7, VAR_6);

 return FUNC_0(
  VAR_10, FUNC_1(VAR_10, 0),
  VAR_4,
  VAR_1 | VAR_5 | VAR_3,
  VAR_2 << 8 | VAR_11, 0,
  &VAR_8->gtk.descr, VAR_8->gtk.descr.bLength,
  VAR_0);
}
