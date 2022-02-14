
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct cdns3_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int usb_itpn; } ;


 struct cdns3_device* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget *VAR_0)
{
 struct cdns3_device *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_1->regs->usb_itpn);
}
