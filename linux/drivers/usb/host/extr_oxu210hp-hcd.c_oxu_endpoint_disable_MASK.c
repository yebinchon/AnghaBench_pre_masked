
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int bEndpointAddress; } ;
struct usb_host_endpoint {struct ehci_qh* hcpriv; TYPE_4__ desc; } ;
struct usb_hcd {int state; } ;
struct oxu_hcd {int lock; TYPE_2__* async; } ;
struct TYPE_7__ {struct ehci_qh* qh; } ;
struct ehci_qh {scalar_t__ hw_info1; int qh_state; int qtd_list; TYPE_3__ qh_next; } ;
struct TYPE_5__ {struct ehci_qh* qh; } ;
struct TYPE_6__ {TYPE_1__ qh_next; } ;


 int FUNC_0 (int ) ;



 struct oxu_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct oxu_hcd*,char*,struct ehci_qh*,int ,int,char*) ;
 int FUNC_4 (struct oxu_hcd*,char*) ;
 int FUNC_5 (struct ehci_qh*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct oxu_hcd*,struct ehci_qh*) ;

__attribute__((used)) static void FUNC_10(struct usb_hcd *VAR_0,
     struct usb_host_endpoint *VAR_1)
{
 struct oxu_hcd *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;
 struct ehci_qh *VAR_4, *VAR_5;




rescan:
 FUNC_7(&VAR_2->lock, VAR_3);
 VAR_4 = VAR_1->hcpriv;
 if (!VAR_4)
  goto done;




 if (VAR_4->hw_info1 == 0) {
  FUNC_4(VAR_2, "iso delay\n");
  goto idle_timeout;
 }

 if (!FUNC_0(VAR_0->state))
  VAR_4->qh_state = 130;
 switch (VAR_4->qh_state) {
 case 129:
  for (VAR_5 = VAR_2->async->qh_next.qh;
    VAR_5 && VAR_5 != VAR_4;
    VAR_5 = VAR_5->qh_next.qh)
   continue;

  if (!VAR_5)
   goto nogood;
  FUNC_9(VAR_2, VAR_4);

 case 128:
idle_timeout:
  FUNC_8(&VAR_2->lock, VAR_3);
  FUNC_6(1);
  goto rescan;
 case 130:
  if (FUNC_2(&VAR_4->qtd_list)) {
   FUNC_5(VAR_4);
   break;
  }

 default:
nogood:



  FUNC_3(VAR_2, "qh %p (#%02x) state %d%s\n",
   VAR_4, VAR_1->desc.bEndpointAddress, VAR_4->qh_state,
   FUNC_2(&VAR_4->qtd_list) ? "" : "(has tds)");
  break;
 }
 VAR_1->hcpriv = ((void*)0);
done:
 FUNC_8(&VAR_2->lock, VAR_3);
}
