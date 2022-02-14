
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fhci_usb {int saved_msk; TYPE_2__* fhci; } ;
struct fhci_hcd {struct fhci_usb* usb_lld; } ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {int usb_usmod; int usb_usbmr; int usb_usber; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static u32 FUNC_3(struct fhci_hcd *VAR_1)
{
 struct fhci_usb *VAR_2 = VAR_1->usb_lld;

 FUNC_1(&VAR_2->fhci->regs->usb_usber, 0xffff);
 FUNC_1(&VAR_2->fhci->regs->usb_usbmr, VAR_2->saved_msk);
 FUNC_2(&VAR_2->fhci->regs->usb_usmod, VAR_0);

 FUNC_0(100);

 return 0;
}
