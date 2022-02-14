
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {struct ehci_qh* hcpriv; } ;
struct usb_hcd {int dummy; } ;
struct ehci_qh {scalar_t__ qh_state; int qtd_list; scalar_t__ clearing_tt; } ;
struct ehci_hcd {scalar_t__ rh_state; int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ehci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct usb_hcd *VAR_2,
  struct usb_host_endpoint *VAR_3)
{
 struct ehci_hcd *VAR_4 = FUNC_0(VAR_2);
 struct ehci_qh *VAR_5 = VAR_3->hcpriv;
 unsigned long VAR_6;

 FUNC_3(&VAR_4->lock, VAR_6);
 VAR_5->clearing_tt = 0;
 if (VAR_5->qh_state == VAR_1 && !FUNC_1(&VAR_5->qtd_list)
   && VAR_4->rh_state == VAR_0)
  FUNC_2(VAR_4, VAR_5);
 FUNC_4(&VAR_4->lock, VAR_6);
}
