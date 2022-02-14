
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_descriptor {scalar_t__ bInterfaceClass; int bInterfaceSubClass; int bInterfaceProtocol; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct usb_interface_descriptor *VAR_1)
{
 return VAR_1->bInterfaceClass == VAR_0
  && VAR_1->bInterfaceSubClass == 2
  && VAR_1->bInterfaceProtocol == 0xff;
}
