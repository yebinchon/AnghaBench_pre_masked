
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct ehci_hcd {TYPE_1__* regs; scalar_t__ has_hostpc; } ;
struct TYPE_2__ {int txfill_tuning; } ;


 int FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct ehci_hcd*,int,int *) ;
 struct ehci_hcd* FUNC_2 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_0)
{
 struct ehci_hcd *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;







 VAR_3 = VAR_1->has_hostpc ? 0x10 : 10;
 FUNC_1(VAR_1, VAR_3 << 16, &VAR_1->regs->txfill_tuning);

 return 0;
}
