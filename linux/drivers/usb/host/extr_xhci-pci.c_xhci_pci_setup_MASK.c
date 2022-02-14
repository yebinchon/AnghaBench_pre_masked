
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_hcd {int imod_interval; scalar_t__ sbrn; } ;
struct TYPE_2__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct pci_dev*,int ,scalar_t__*) ;
 struct pci_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct xhci_hcd*,char*,unsigned int) ;
 int FUNC_5 (struct usb_hcd*,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct xhci_hcd*,struct pci_dev*) ;

__attribute__((used)) static int FUNC_7(struct usb_hcd *VAR_2)
{
 struct xhci_hcd *VAR_3;
 struct pci_dev *VAR_4 = FUNC_2(VAR_2->self.controller);
 int VAR_5;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3->sbrn)
  FUNC_1(VAR_4, VAR_0, &VAR_3->sbrn);


 VAR_3->imod_interval = 40000;

 VAR_5 = FUNC_5(VAR_2, VAR_1);
 if (VAR_5)
  return VAR_5;

 if (!FUNC_3(VAR_2))
  return 0;

 FUNC_4(VAR_3, "Got SBRN %u\n", (unsigned int) VAR_3->sbrn);


 return FUNC_6(VAR_3, VAR_4);
}
