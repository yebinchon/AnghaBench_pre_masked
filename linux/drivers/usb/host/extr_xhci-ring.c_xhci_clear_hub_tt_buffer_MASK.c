
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct xhci_virt_ep {int ep_state; } ;
struct xhci_td {TYPE_6__* urb; } ;
struct xhci_hcd {int dummy; } ;
struct TYPE_12__ {TYPE_4__* dev; TYPE_3__* ep; int pipe; } ;
struct TYPE_8__ {scalar_t__ root_hub; } ;
struct TYPE_11__ {TYPE_2__ self; } ;
struct TYPE_10__ {TYPE_1__* tt; } ;
struct TYPE_9__ {TYPE_4__* hcpriv; } ;
struct TYPE_7__ {scalar_t__ hub; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_3(struct xhci_hcd *VAR_1, struct xhci_td *VAR_2,
  struct xhci_virt_ep *VAR_3)
{




 if (VAR_2->urb->dev->tt && !FUNC_1(VAR_2->urb->pipe) &&
     (VAR_2->urb->dev->tt->hub != FUNC_2(VAR_1)->self.root_hub) &&
     !(VAR_3->ep_state & VAR_0)) {
  VAR_3->ep_state |= VAR_0;
  VAR_2->urb->ep->hcpriv = VAR_2->urb->dev;
  if (FUNC_0(VAR_2->urb))
   VAR_3->ep_state &= ~VAR_0;
 }
}
