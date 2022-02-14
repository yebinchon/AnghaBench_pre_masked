
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*) ;
 struct usbnet* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_interface*,struct usb_device_id const*) ;
 int FUNC_3 (struct usbnet*,int ) ;

__attribute__((used)) static int
FUNC_4(struct usb_interface *VAR_1, const struct usb_device_id *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 == 0) {
  struct usbnet *VAR_4 = FUNC_1(VAR_1);

  VAR_3 = FUNC_3(VAR_4, VAR_0);
  if (VAR_3 == 0) {

   FUNC_0(VAR_4);
  }
 }
 return VAR_3;
}
