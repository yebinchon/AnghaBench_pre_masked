
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct ar9170 {int fw_load_wait; struct usb_device* udev; struct usb_interface* intf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct usb_interface*) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_device*) ;

__attribute__((used)) static void FUNC_5(struct ar9170 *VAR_1)
{




 struct usb_interface *VAR_2 = VAR_1->intf;
 struct usb_device *VAR_3 = VAR_1->udev;

 FUNC_0(&VAR_1->fw_load_wait);

 VAR_1 = ((void*)0);


 FUNC_2(VAR_3);
 FUNC_1(&VAR_0, VAR_2);
 FUNC_4(VAR_3);

 FUNC_3(VAR_2);
}
