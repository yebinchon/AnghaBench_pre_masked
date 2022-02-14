
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xhci_td {struct urb* urb; } ;
struct xhci_hcd {int quirks; int lock; } ;
struct usb_hcd {int dummy; } ;
struct urb_priv {int dummy; } ;
struct urb {int pipe; TYPE_1__* dev; struct urb_priv* hcpriv; } ;
struct TYPE_5__ {scalar_t__ bandwidth_isoc_reqs; } ;
struct TYPE_6__ {TYPE_2__ self; } ;
struct TYPE_4__ {int bus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_6 (struct usb_hcd*,struct urb*) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (struct xhci_hcd*) ;
 int FUNC_9 (struct urb_priv*) ;

__attribute__((used)) static void FUNC_10(struct xhci_hcd *VAR_2,
         struct xhci_td *VAR_3, int VAR_4)
{
 struct urb *VAR_5 = VAR_3->urb;
 struct urb_priv *VAR_6 = VAR_5->hcpriv;
 struct usb_hcd *VAR_7 = FUNC_0(VAR_5->dev->bus);

 if (FUNC_7(VAR_5->pipe) == VAR_0) {
  FUNC_8(VAR_2)->self.bandwidth_isoc_reqs--;
  if (FUNC_8(VAR_2)->self.bandwidth_isoc_reqs == 0) {
   if (VAR_2->quirks & VAR_1)
    FUNC_4();
  }
 }
 FUNC_9(VAR_6);
 FUNC_6(VAR_7, VAR_5);
 FUNC_2(&VAR_2->lock);
 FUNC_3(VAR_5);
 FUNC_5(VAR_7, VAR_5, VAR_4);
 FUNC_1(&VAR_2->lock);
}
