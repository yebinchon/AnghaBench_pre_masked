
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fhci_usb {int transfer_confirm; int vroot_hub; int hc_list; struct fhci_hcd* fhci; } ;
struct fhci_hcd {int vroot_hub; int hc_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fhci_usb* FUNC_0 (int,int ) ;

__attribute__((used)) static struct fhci_usb *FUNC_1(struct fhci_hcd *VAR_2)
{
 struct fhci_usb *VAR_3;


 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->fhci = VAR_2;
 VAR_3->hc_list = VAR_2->hc_list;
 VAR_3->vroot_hub = VAR_2->vroot_hub;

 VAR_3->transfer_confirm = VAR_1;

 return VAR_3;
}
