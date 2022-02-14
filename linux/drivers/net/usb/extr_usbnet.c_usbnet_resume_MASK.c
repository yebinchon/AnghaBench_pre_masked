
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qlen; int lock; } ;
struct usbnet {int flags; int bh; int net; TYPE_1__ txq; int delay; int intf; int deferred; int suspend_count; } ;
struct usb_interface {int dummy; } ;
struct urb {int sg; scalar_t__ context; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct usbnet*) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_2 (struct usbnet*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usbnet*,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct usb_interface*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct urb*) ;
 struct urb* FUNC_20 (int *) ;
 struct usbnet* FUNC_21 (struct usb_interface*) ;
 int FUNC_22 (struct urb*,int ) ;

int FUNC_23 (struct usb_interface *VAR_6)
{
 struct usbnet *VAR_7 = FUNC_21(VAR_6);
 struct sk_buff *VAR_8;
 struct urb *VAR_9;
 int VAR_10;

 if (!--VAR_7->suspend_count) {

  FUNC_2(VAR_7, VAR_5);

  FUNC_11(&VAR_7->txq.lock);
  while ((VAR_9 = FUNC_20(&VAR_7->deferred))) {

   VAR_8 = (struct sk_buff *)VAR_9->context;
   VAR_10 = FUNC_22(VAR_9, VAR_4);
   if (VAR_10 < 0) {
    FUNC_4(VAR_8);
    FUNC_5(VAR_9->sg);
    FUNC_19(VAR_9);
    FUNC_18(VAR_7->intf);
   } else {
    FUNC_7(VAR_7->net);
    FUNC_1(&VAR_7->txq, VAR_8);
   }
  }

  FUNC_10();
  FUNC_3(VAR_1, &VAR_7->flags);
  FUNC_12(&VAR_7->txq.lock);

  if (FUNC_15(VAR_2, &VAR_7->flags)) {



   if (FUNC_6(VAR_7->net) &&
    !FUNC_16(&VAR_7->delay) &&
    !FUNC_15(VAR_3, &VAR_7->flags))
     FUNC_9(VAR_7, VAR_5);

   if (!(VAR_7->txq.qlen >= FUNC_0(VAR_7)))
    FUNC_8(VAR_7->net);
   FUNC_13 (&VAR_7->bh);
  }
 }

 if (FUNC_14(VAR_0, &VAR_7->flags))
  FUNC_17(VAR_6);

 return 0;
}
