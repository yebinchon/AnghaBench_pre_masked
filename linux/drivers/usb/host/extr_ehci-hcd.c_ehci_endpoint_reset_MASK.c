
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_host_endpoint {struct ehci_qh* hcpriv; int desc; } ;
struct usb_hcd {int dummy; } ;
struct TYPE_2__ {int udev; } ;
struct ehci_qh {int unlink_reason; TYPE_1__ ps; int qtd_list; } ;
struct ehci_hcd {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 struct ehci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_6 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int,int,int ) ;

__attribute__((used)) static void
FUNC_11(struct usb_hcd *VAR_3, struct usb_host_endpoint *VAR_4)
{
 struct ehci_hcd *VAR_5 = FUNC_1(VAR_3);
 struct ehci_qh *VAR_6;
 int VAR_7 = FUNC_9(&VAR_4->desc);
 int VAR_8 = FUNC_8(&VAR_4->desc);
 int VAR_9 = FUNC_7(&VAR_4->desc);
 unsigned long VAR_10;

 if (VAR_7 != VAR_1 && VAR_7 != VAR_2)
  return;

 FUNC_3(&VAR_5->lock, VAR_10);
 VAR_6 = VAR_4->hcpriv;






 if (VAR_6) {
  if (!FUNC_2(&VAR_6->qtd_list)) {
   FUNC_0(1, "clear_halt for a busy endpoint\n");
  } else {




   FUNC_10(VAR_6->ps.udev, VAR_8, VAR_9, 0);
   VAR_6->unlink_reason |= VAR_0;
   if (VAR_7 == VAR_1)
    FUNC_5(VAR_5, VAR_6);
   else
    FUNC_6(VAR_5, VAR_6);
  }
 }
 FUNC_4(&VAR_5->lock, VAR_10);
}
