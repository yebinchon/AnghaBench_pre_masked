
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct urb_priv {int node; struct uhci_qh* qh; } ;
struct urb {int error_count; TYPE_1__* ep; int dev; } ;
struct TYPE_4__ {int * next; } ;
struct uhci_qh {int type; scalar_t__ state; int is_stopped; TYPE_2__ queue; } ;
struct uhci_hcd {int lock; } ;
typedef int gfp_t ;
struct TYPE_3__ {struct uhci_qh* hcpriv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;




 struct uhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct uhci_hcd*,struct uhci_qh*) ;
 struct uhci_qh* FUNC_5 (struct uhci_hcd*,int ,TYPE_1__*) ;
 struct urb_priv* FUNC_6 (struct uhci_hcd*,struct urb*) ;
 int FUNC_7 (struct uhci_hcd*,struct urb_priv*) ;
 int FUNC_8 (struct uhci_hcd*,struct uhci_qh*) ;
 int FUNC_9 (struct uhci_hcd*,struct urb*,struct uhci_qh*) ;
 int FUNC_10 (struct uhci_hcd*,struct urb*,struct uhci_qh*) ;
 int FUNC_11 (struct uhci_hcd*,struct urb*,struct uhci_qh*) ;
 int FUNC_12 (struct uhci_hcd*,struct urb*,struct uhci_qh*) ;
 int FUNC_13 (struct uhci_hcd*,struct urb_priv*) ;
 int FUNC_14 (struct usb_hcd*,struct urb*) ;
 int FUNC_15 (struct usb_hcd*,struct urb*) ;

__attribute__((used)) static int FUNC_16(struct usb_hcd *VAR_2,
  struct urb *VAR_3, gfp_t VAR_4)
{
 int VAR_5;
 struct uhci_hcd *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;
 struct urb_priv *VAR_8;
 struct uhci_qh *VAR_9;

 FUNC_2(&VAR_6->lock, VAR_7);

 VAR_5 = FUNC_14(VAR_2, VAR_3);
 if (VAR_5)
  goto done_not_linked;

 VAR_5 = -VAR_0;
 VAR_8 = FUNC_6(VAR_6, VAR_3);
 if (!VAR_8)
  goto done;

 if (VAR_3->ep->hcpriv)
  VAR_9 = VAR_3->ep->hcpriv;
 else {
  VAR_9 = FUNC_5(VAR_6, VAR_3->dev, VAR_3->ep);
  if (!VAR_9)
   goto err_no_qh;
 }
 VAR_8->qh = VAR_9;

 switch (VAR_9->type) {
 case 130:
  VAR_5 = FUNC_10(VAR_6, VAR_3, VAR_9);
  break;
 case 131:
  VAR_5 = FUNC_9(VAR_6, VAR_3, VAR_9);
  break;
 case 129:
  VAR_5 = FUNC_11(VAR_6, VAR_3, VAR_9);
  break;
 case 128:
  VAR_3->error_count = 0;
  VAR_5 = FUNC_12(VAR_6, VAR_3, VAR_9);
  break;
 }
 if (VAR_5 != 0)
  goto err_submit_failed;


 FUNC_1(&VAR_8->node, &VAR_9->queue);





 if (VAR_9->queue.next == &VAR_8->node && !VAR_9->is_stopped) {
  FUNC_4(VAR_6, VAR_9);
  FUNC_13(VAR_6, VAR_8);
 }
 goto done;

err_submit_failed:
 if (VAR_9->state == VAR_1)
  FUNC_8(VAR_6, VAR_9);
err_no_qh:
 FUNC_7(VAR_6, VAR_8);
done:
 if (VAR_5)
  FUNC_15(VAR_2, VAR_3);
done_not_linked:
 FUNC_3(&VAR_6->lock, VAR_7);
 return VAR_5;
}
