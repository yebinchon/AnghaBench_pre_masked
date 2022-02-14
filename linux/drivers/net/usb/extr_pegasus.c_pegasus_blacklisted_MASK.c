
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_descriptor {scalar_t__ idVendor; scalar_t__ idProduct; scalar_t__ bDeviceClass; int bDeviceProtocol; } ;
struct usb_device {struct usb_device_descriptor descriptor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_2)
{
 struct usb_device_descriptor *VAR_3 = &VAR_2->descriptor;




 if ((VAR_3->idVendor == FUNC_0(VAR_1)) &&
     (VAR_3->idProduct == FUNC_0(0x0121)) &&
     (VAR_3->bDeviceClass == VAR_0) &&
     (VAR_3->bDeviceProtocol == 1))
  return 1;

 return 0;
}
