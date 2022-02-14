
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbdevfs_ioctl {int ioctl_code; int data; int ifno; } ;
struct TYPE_5__ {int driver; } ;
struct usb_interface {TYPE_2__ dev; } ;
struct usb_driver {int (* unlocked_ioctl ) (struct usb_interface*,int,void*) ;} ;
struct usb_dev_state {TYPE_1__* dev; scalar_t__ privileges_dropped; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 scalar_t__ VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int VAR_13 ;
 int FUNC_2 (struct usb_dev_state*) ;
 scalar_t__ FUNC_3 (void*,int ,int) ;
 scalar_t__ FUNC_4 (int ,void*,int) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (void*,int ,int) ;
 int FUNC_10 (struct usb_interface*,int,void*) ;
 struct usb_driver* FUNC_11 (int ) ;
 int FUNC_12 (struct usb_driver*,struct usb_interface*) ;
 struct usb_interface* FUNC_13 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_14(struct usb_dev_state *VAR_14, struct usbdevfs_ioctl *VAR_15)
{
 int VAR_16;
 void *VAR_17 = ((void*)0);
 int VAR_18 = 0;
 struct usb_interface *VAR_19 = ((void*)0);
 struct usb_driver *VAR_20 = ((void*)0);

 if (VAR_14->privileges_dropped)
  return -VAR_0;

 if (!FUNC_2(VAR_14))
  return -VAR_6;


 VAR_16 = FUNC_1(VAR_15->ioctl_code);
 if (VAR_16 > 0) {
  VAR_17 = FUNC_8(VAR_16, VAR_10);
  if (VAR_17 == ((void*)0))
   return -VAR_8;
  if ((FUNC_0(VAR_15->ioctl_code) & VAR_13)) {
   if (FUNC_3(VAR_17, VAR_15->data, VAR_16)) {
    FUNC_7(VAR_17);
    return -VAR_2;
   }
  } else {
   FUNC_9(VAR_17, 0, VAR_16);
  }
 }

 if (VAR_14->dev->state != VAR_11)
  VAR_18 = -VAR_3;
 else if (!(VAR_19 = FUNC_13(VAR_14->dev, VAR_15->ifno)))
  VAR_18 = -VAR_4;
 else switch (VAR_15->ioctl_code) {


 case 128:
  if (VAR_19->dev.driver) {
   VAR_20 = FUNC_11(VAR_19->dev.driver);
   FUNC_5(&VAR_19->dev, "disconnect by usbfs\n");
   FUNC_12(VAR_20, VAR_19);
  } else
   VAR_18 = -VAR_5;
  break;


 case 129:
  if (!VAR_19->dev.driver)
   VAR_18 = FUNC_6(&VAR_19->dev);
  else
   VAR_18 = -VAR_1;
  break;


 default:
  if (VAR_19->dev.driver)
   VAR_20 = FUNC_11(VAR_19->dev.driver);
  if (VAR_20 == ((void*)0) || VAR_20->unlocked_ioctl == ((void*)0)) {
   VAR_18 = -VAR_9;
  } else {
   VAR_18 = VAR_20->unlocked_ioctl(VAR_19, VAR_15->ioctl_code, VAR_17);
   if (VAR_18 == -VAR_7)
    VAR_18 = -VAR_9;
  }
 }


 if (VAR_18 >= 0
   && (FUNC_0(VAR_15->ioctl_code) & VAR_12) != 0
   && VAR_16 > 0
   && FUNC_4(VAR_15->data, VAR_17, VAR_16) != 0)
  VAR_18 = -VAR_2;

 FUNC_7(VAR_17);
 return VAR_18;
}
