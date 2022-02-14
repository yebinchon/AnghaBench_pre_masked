
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {int pipe; scalar_t__ hcpriv; } ;
struct ehci_qh {int qh_state; int dequeue_during_giveback; int unlink_reason; } ;
struct ehci_hcd {int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;





 int VAR_2 ;
 struct ehci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_5 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_6 (struct usb_hcd*,struct urb*,int) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct usb_hcd *VAR_3, struct urb *VAR_4, int VAR_5)
{
 struct ehci_hcd *VAR_6 = FUNC_0 (VAR_3);
 struct ehci_qh *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 FUNC_2 (&VAR_6->lock, VAR_8);
 VAR_9 = FUNC_6(VAR_3, VAR_4, VAR_5);
 if (VAR_9)
  goto done;

 if (FUNC_7(VAR_4->pipe) == VAR_1) {





 } else {
  VAR_7 = (struct ehci_qh *) VAR_4->hcpriv;
  VAR_7->unlink_reason |= VAR_2;
  switch (VAR_7->qh_state) {
  case 130:
   if (FUNC_7(VAR_4->pipe) == VAR_0)
    FUNC_5(VAR_6, VAR_7);
   else
    FUNC_4(VAR_6, VAR_7);
   break;
  case 132:
   VAR_7->dequeue_during_giveback = 1;
   break;
  case 129:
  case 128:

   break;
  case 131:

   FUNC_1(VAR_6, VAR_7);
   break;
  }
 }
done:
 FUNC_3 (&VAR_6->lock, VAR_8);
 return VAR_9;
}
