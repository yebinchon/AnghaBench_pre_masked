
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int self; } ;
struct usb_anchor {int dummy; } ;
struct urb {int unlinked; int transfer_flags; scalar_t__ actual_length; scalar_t__ transfer_buffer_length; int status; int reject; int use_count; int (* complete ) (struct urb*) ;int * hcpriv; struct usb_anchor* anchor; TYPE_1__* dev; } ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct usb_hcd* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct urb*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct usb_hcd*,struct urb*) ;
 int FUNC_7 (struct usb_anchor*) ;
 int FUNC_8 (struct usb_anchor*) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct urb*) ;
 int FUNC_11 (struct urb*) ;
 int FUNC_12 (int *,struct urb*,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct urb *VAR_4)
{
 struct usb_hcd *VAR_5 = FUNC_2(VAR_4->dev->bus);
 struct usb_anchor *VAR_6 = VAR_4->anchor;
 int VAR_7 = VAR_4->unlinked;

 VAR_4->hcpriv = ((void*)0);
 if (FUNC_5((VAR_4->transfer_flags & VAR_1) &&
     VAR_4->actual_length < VAR_4->transfer_buffer_length &&
     !VAR_7))
  VAR_7 = -VAR_0;

 FUNC_6(VAR_5, VAR_4);
 FUNC_12(&VAR_5->self, VAR_4, VAR_7);
 FUNC_8(VAR_6);
 FUNC_11(VAR_4);
 if (FUNC_3(VAR_7 == 0))
  FUNC_9(VAR_2);


 VAR_4->status = VAR_7;
 VAR_4->complete(VAR_4);

 FUNC_7(VAR_6);
 FUNC_0(&VAR_4->use_count);
 if (FUNC_5(FUNC_1(&VAR_4->reject)))
  FUNC_13(&VAR_3);
 FUNC_10(VAR_4);
}
