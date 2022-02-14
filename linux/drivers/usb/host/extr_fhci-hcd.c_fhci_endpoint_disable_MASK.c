
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {struct ed* hcpriv; } ;
struct usb_hcd {int dummy; } ;
struct td {int urb; } ;
struct fhci_hcd {int lock; } ;
struct ed {int * td_head; } ;


 int FUNC_0 (struct fhci_hcd*,struct ed*) ;
 struct td* FUNC_1 (struct ed*) ;
 int FUNC_2 (struct fhci_hcd*,int ) ;
 struct fhci_hcd* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct usb_hcd *VAR_0,
      struct usb_host_endpoint *VAR_1)
{
 struct fhci_hcd *VAR_2;
 struct ed *VAR_3;
 unsigned long VAR_4;

 VAR_2 = FUNC_3(VAR_0);
 FUNC_4(&VAR_2->lock, VAR_4);
 VAR_3 = VAR_1->hcpriv;
 if (VAR_3) {
  while (VAR_3->td_head != ((void*)0)) {
   struct td *VAR_5 = FUNC_1(VAR_3);
   FUNC_2(VAR_2, VAR_5->urb);
  }
  FUNC_0(VAR_2, VAR_3);
  VAR_1->hcpriv = ((void*)0);
 }
 FUNC_5(&VAR_2->lock, VAR_4);
}
