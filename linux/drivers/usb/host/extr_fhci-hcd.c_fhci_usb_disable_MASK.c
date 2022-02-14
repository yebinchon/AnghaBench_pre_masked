
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fhci_usb {scalar_t__ port_status; TYPE_2__* fhci; } ;
struct fhci_hcd {struct fhci_usb* usb_lld; } ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {int usb_usmod; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct fhci_hcd*) ;
 int FUNC_2 (struct fhci_hcd*) ;
 int FUNC_3 (struct fhci_usb*) ;

__attribute__((used)) static u32 FUNC_4(struct fhci_hcd *VAR_3)
{
 struct fhci_usb *VAR_4 = VAR_3->usb_lld;

 FUNC_3(VAR_4);
 FUNC_2(VAR_3);


 if (VAR_4->port_status == VAR_0 ||
   VAR_4->port_status == VAR_1)
  FUNC_1(VAR_3);

 FUNC_0(&VAR_4->fhci->regs->usb_usmod, VAR_2);

 return 0;
}
