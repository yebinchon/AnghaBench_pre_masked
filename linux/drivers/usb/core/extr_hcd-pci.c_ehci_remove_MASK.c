
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * hs_companion; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0, struct usb_hcd *VAR_1,
  struct pci_dev *VAR_2, struct usb_hcd *VAR_3)
{
 if (FUNC_0(VAR_2))
  VAR_3->self.hs_companion = ((void*)0);
}
