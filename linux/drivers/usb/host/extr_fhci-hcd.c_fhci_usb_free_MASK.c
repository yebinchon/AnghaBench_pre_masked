
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fhci_usb {struct fhci_usb* actual_frame; struct fhci_hcd* fhci; } ;
struct fhci_hcd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fhci_hcd*,int ) ;
 int FUNC_1 (struct fhci_usb*) ;
 int FUNC_2 (struct fhci_usb*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct fhci_usb *VAR_2 = VAR_1;
 struct fhci_hcd *VAR_3;

 if (VAR_2) {
  VAR_3 = VAR_2->fhci;
  FUNC_0(VAR_3, VAR_0);
  FUNC_1(VAR_2);
  FUNC_2(VAR_2->actual_frame);
  FUNC_2(VAR_2);
 }
}
