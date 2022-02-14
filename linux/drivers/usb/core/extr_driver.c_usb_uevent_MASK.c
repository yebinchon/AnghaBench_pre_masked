
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bcdDevice; int idProduct; int idVendor; } ;
struct usb_device {scalar_t__ devnum; TYPE_1__ descriptor; int bus; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ,int ,int ) ;
 int FUNC_1 (struct device*) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 struct usb_device* FUNC_7 (struct device*) ;
 struct usb_interface* FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_2, struct kobj_uevent_env *VAR_3)
{
 struct usb_device *VAR_4;

 if (FUNC_3(VAR_2)) {
  VAR_4 = FUNC_7(VAR_2);
 } else if (FUNC_4(VAR_2)) {
  struct usb_interface *VAR_5 = FUNC_8(VAR_2);

  VAR_4 = FUNC_2(VAR_5);
 } else {
  return 0;
 }

 if (VAR_4->devnum < 0) {

  FUNC_6("usb %s: already deleted?\n", FUNC_1(VAR_2));
  return -VAR_0;
 }
 if (!VAR_4->bus) {
  FUNC_6("usb %s: bus removed?\n", FUNC_1(VAR_2));
  return -VAR_0;
 }


 if (FUNC_0(VAR_3, "PRODUCT=%x/%x/%x",
      FUNC_5(VAR_4->descriptor.idVendor),
      FUNC_5(VAR_4->descriptor.idProduct),
      FUNC_5(VAR_4->descriptor.bcdDevice)))
  return -VAR_1;


 if (FUNC_0(VAR_3, "TYPE=%d/%d/%d",
      VAR_4->descriptor.bDeviceClass,
      VAR_4->descriptor.bDeviceSubClass,
      VAR_4->descriptor.bDeviceProtocol))
  return -VAR_1;

 return 0;
}
