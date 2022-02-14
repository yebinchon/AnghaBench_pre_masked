
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bus_name; int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct ohci_hcd {TYPE_3__* regs; } ;
struct TYPE_5__ {int b; int a; } ;
struct TYPE_6__ {TYPE_2__ roothub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 struct ohci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct ohci_hcd*) ;
 int FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct ohci_hcd*,int,int *) ;

__attribute__((used)) static int FUNC_5(struct usb_hcd *VAR_2)
{
 int VAR_3;
 struct ohci_hcd *VAR_4 = FUNC_1(VAR_2);




 FUNC_4(VAR_4, 0x7f000000 | VAR_1 | VAR_0,
  &VAR_4->regs->roothub.a);
 FUNC_4(VAR_4, 0x00060000, &VAR_4->regs->roothub.b);

 VAR_3 = FUNC_2(VAR_4);

 if (VAR_3 < 0) {
  FUNC_0(VAR_2->self.controller, "can't start %s\n",
   VAR_2->self.bus_name);
  FUNC_3(VAR_2);
 }

 return VAR_3;
}
