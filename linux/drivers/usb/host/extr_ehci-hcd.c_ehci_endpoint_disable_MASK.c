
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bEndpointAddress; } ;
struct usb_host_endpoint {struct ehci_qh* hcpriv; TYPE_2__ desc; } ;
struct usb_hcd {int dummy; } ;
struct TYPE_3__ {int bw_uperiod; } ;
struct ehci_qh {int qh_state; int qtd_list; TYPE_1__ ps; int clearing_tt; int unlink_reason; int td_list; int * hw; } ;
struct ehci_iso_stream {int qh_state; int qtd_list; TYPE_1__ ps; int clearing_tt; int unlink_reason; int td_list; int * hw; } ;
struct ehci_hcd {int lock; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ehci_hcd*,char*,struct ehci_qh*,int ,int,char*) ;
 struct ehci_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct ehci_qh*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_6 (struct ehci_hcd*,struct ehci_qh*,int) ;
 int FUNC_7 (struct ehci_hcd*,struct ehci_qh*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_12 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_14 (struct usb_hcd *VAR_3, struct usb_host_endpoint *VAR_4)
{
 struct ehci_hcd *VAR_5 = FUNC_2 (VAR_3);
 unsigned long VAR_6;
 struct ehci_qh *VAR_7;




rescan:
 FUNC_9 (&VAR_5->lock, VAR_6);
 VAR_7 = VAR_4->hcpriv;
 if (!VAR_7)
  goto done;




 if (VAR_7->hw == ((void*)0)) {
  struct ehci_iso_stream *VAR_8 = VAR_4->hcpriv;

  if (!FUNC_4(&VAR_8->td_list))
   goto idle_timeout;


  FUNC_7(VAR_5, VAR_8, -1);
  FUNC_3(VAR_8);
  goto done;
 }

 VAR_7->unlink_reason |= VAR_1;
 switch (VAR_7->qh_state) {
 case 130:
  if (FUNC_4(&VAR_7->qtd_list))
   VAR_7->unlink_reason |= VAR_0;
  else
   FUNC_0(1);
  if (FUNC_13(&VAR_4->desc) != VAR_2)
   FUNC_11(VAR_5, VAR_7);
  else
   FUNC_12(VAR_5, VAR_7);

 case 132:
 case 129:
 case 128:
idle_timeout:
  FUNC_10 (&VAR_5->lock, VAR_6);
  FUNC_8(1);
  goto rescan;
 case 131:
  if (VAR_7->clearing_tt)
   goto idle_timeout;
  if (FUNC_4 (&VAR_7->qtd_list)) {
   if (VAR_7->ps.bw_uperiod)
    FUNC_6(VAR_5, VAR_7, -1);
   FUNC_5(VAR_5, VAR_7);
   break;
  }

 default:



  FUNC_1 (VAR_5, "qh %p (#%02x) state %d%s\n",
   VAR_7, VAR_4->desc.bEndpointAddress, VAR_7->qh_state,
   FUNC_4 (&VAR_7->qtd_list) ? "" : "(has tds)");
  break;
 }
 done:
 VAR_4->hcpriv = ((void*)0);
 FUNC_10 (&VAR_5->lock, VAR_6);
}
