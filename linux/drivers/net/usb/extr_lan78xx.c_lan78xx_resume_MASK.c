
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_interface {int dummy; } ;
struct urb {scalar_t__ context; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int lock; } ;
struct lan78xx_net {int delta; scalar_t__ tx_qlen; int bh; int net; TYPE_1__ txq; int flags; int intf; int deferred; struct urb* urb_intr; int suspend_count; int stat_monitor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_21 ;
 int FUNC_2 (TYPE_1__*,struct sk_buff*,int ) ;
 int FUNC_3 (struct lan78xx_net*,int ,int*) ;
 int FUNC_4 (struct lan78xx_net*,int ,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int VAR_22 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct urb*) ;
 struct urb* FUNC_16 (int *) ;
 struct lan78xx_net* FUNC_17 (struct usb_interface*) ;
 int FUNC_18 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_19(struct usb_interface *VAR_23)
{
 struct lan78xx_net *VAR_24 = FUNC_17(VAR_23);
 struct sk_buff *VAR_25;
 struct urb *VAR_26;
 int VAR_27;
 u32 VAR_28;

 if (!FUNC_13(&VAR_24->stat_monitor)) {
  VAR_24->delta = 1;
  FUNC_5(&VAR_24->stat_monitor,
     VAR_21 + VAR_6);
 }

 if (!--VAR_24->suspend_count) {

  if (VAR_24->urb_intr && FUNC_12(VAR_1, &VAR_24->flags))
    FUNC_18(VAR_24->urb_intr, VAR_3);

  FUNC_9(&VAR_24->txq.lock);
  while ((VAR_26 = FUNC_16(&VAR_24->deferred))) {
   VAR_25 = (struct sk_buff *)VAR_26->context;
   VAR_27 = FUNC_18(VAR_26, VAR_2);
   if (VAR_27 < 0) {
    FUNC_1(VAR_25);
    FUNC_15(VAR_26);
    FUNC_14(VAR_24->intf);
   } else {
    FUNC_7(VAR_24->net);
    FUNC_2(&VAR_24->txq, VAR_25, VAR_22);
   }
  }

  FUNC_0(VAR_0, &VAR_24->flags);
  FUNC_10(&VAR_24->txq.lock);

  if (FUNC_12(VAR_1, &VAR_24->flags)) {
   if (!(FUNC_8(&VAR_24->txq) >= VAR_24->tx_qlen))
    FUNC_6(VAR_24->net);
   FUNC_11(&VAR_24->bh);
  }
 }

 VAR_27 = FUNC_4(VAR_24, VAR_9, 0);
 VAR_27 = FUNC_4(VAR_24, VAR_8, 0);
 VAR_27 = FUNC_4(VAR_24, VAR_7, 0xFFF1FF1FUL);

 VAR_27 = FUNC_4(VAR_24, VAR_9, VAR_13 |
          VAR_10 |
          VAR_12 |
          VAR_11);

 VAR_27 = FUNC_4(VAR_24, VAR_8, VAR_16 |
         VAR_15 |
         VAR_18 |
         VAR_19 |
         VAR_20 |
         VAR_17 |
         VAR_14);

 VAR_27 = FUNC_3(VAR_24, VAR_4, &VAR_28);
 VAR_28 |= VAR_5;
 VAR_27 = FUNC_4(VAR_24, VAR_4, VAR_28);

 return 0;
}
