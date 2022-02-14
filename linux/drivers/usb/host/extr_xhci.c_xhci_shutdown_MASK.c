
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_hcd {int quirks; TYPE_1__* op_regs; int lock; } ;
struct TYPE_4__ {int sysdev; } ;
struct usb_hcd {TYPE_2__ self; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct xhci_hcd*) ;
 int FUNC_8 (struct xhci_hcd*,int ,char*,int ) ;
 int FUNC_9 (struct xhci_hcd*) ;
 int FUNC_10 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_11(struct usb_hcd *VAR_4)
{
 struct xhci_hcd *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->quirks & VAR_1)
  FUNC_6(FUNC_5(VAR_4->self.sysdev));

 FUNC_3(&VAR_5->lock);
 FUNC_9(VAR_5);

 if (VAR_5->quirks & VAR_2)
  FUNC_10(VAR_5);
 FUNC_4(&VAR_5->lock);

 FUNC_7(VAR_5);

 FUNC_8(VAR_5, VAR_3,
   "xhci_shutdown completed - status = %x",
   FUNC_2(&VAR_5->op_regs->status));


 if (VAR_5->quirks & VAR_2)
  FUNC_1(FUNC_5(VAR_4->self.sysdev), VAR_0);
}
