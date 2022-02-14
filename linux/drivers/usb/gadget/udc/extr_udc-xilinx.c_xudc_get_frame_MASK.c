
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xusb_udc {int (* read_fn ) (scalar_t__) ;scalar_t__ addr; } ;
struct usb_gadget {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct xusb_udc* FUNC_1 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget *VAR_2)
{
 struct xusb_udc *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = VAR_3->read_fn(VAR_3->addr + VAR_1);
 return VAR_4;
}
