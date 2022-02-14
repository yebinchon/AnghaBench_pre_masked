
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* ed; } ;
typedef TYPE_1__ urb_priv_t ;
struct usb_hcd {int dummy; } ;
struct urb {TYPE_1__* hcpriv; } ;
struct ohci_hcd {scalar_t__ rh_state; int lock; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ohci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct ohci_hcd*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct ohci_hcd*,TYPE_2__*) ;
 int FUNC_5 (struct usb_hcd*,struct urb*,int) ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_2, struct urb *VAR_3, int VAR_4)
{
 struct ohci_hcd *VAR_5 = FUNC_0 (VAR_2);
 unsigned long VAR_6;
 int VAR_7;
 urb_priv_t *VAR_8;

 FUNC_2 (&VAR_5->lock, VAR_6);
 VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_4);
 if (VAR_7 == 0) {





  VAR_8 = VAR_3->hcpriv;
  if (VAR_8->ed->state == VAR_0)
   FUNC_4(VAR_5, VAR_8->ed);

  if (VAR_5->rh_state != VAR_1) {

   FUNC_1(VAR_5);
  }
 }
 FUNC_3 (&VAR_5->lock, VAR_6);
 return VAR_7;
}
