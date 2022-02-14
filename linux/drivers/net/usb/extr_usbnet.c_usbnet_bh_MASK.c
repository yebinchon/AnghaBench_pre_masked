
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ qlen; } ;
struct TYPE_5__ {int qlen; } ;
struct TYPE_8__ {scalar_t__ qlen; } ;
struct usbnet {int net; TYPE_2__ txq; int bh; TYPE_1__ rxq; int flags; int delay; int wait; TYPE_4__ done; } ;
struct timer_list {int dummy; } ;
struct skb_data {int state; TYPE_3__* urb; } ;
struct sk_buff {scalar_t__ cb; } ;
struct TYPE_7__ {int sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usbnet*) ;
 scalar_t__ FUNC_1 (struct usbnet*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_5 ;
 struct usbnet* VAR_6 ;
 int FUNC_3 (struct sk_buff*) ;
 struct usbnet* FUNC_4 (int ,struct timer_list*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (int ,char*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct usbnet*,int ,int ,char*,int,int) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct usbnet*,int ) ;


 int FUNC_13 (struct usbnet*,struct sk_buff*) ;
 struct sk_buff* FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int *) ;

 int FUNC_18 (TYPE_3__*) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static void FUNC_21 (struct timer_list *VAR_8)
{
 struct usbnet *VAR_9 = FUNC_4(VAR_9, VAR_8, VAR_5);
 struct sk_buff *VAR_10;
 struct skb_data *VAR_11;

 while ((VAR_10 = FUNC_14 (&VAR_9->done))) {
  VAR_11 = (struct skb_data *) VAR_10->cb;
  switch (VAR_11->state) {
  case 129:
   VAR_11->state = 130;
   FUNC_13 (VAR_9, VAR_10);
   continue;
  case 128:
   FUNC_5(VAR_11->urb->sg);

  case 130:
   FUNC_18 (VAR_11->urb);
   FUNC_3 (VAR_10);
   continue;
  default:
   FUNC_6(VAR_9->net, "bogus skb state %d\n", VAR_11->state);
  }
 }


 FUNC_2(VAR_2, &VAR_9->flags);




 if (FUNC_19(&VAR_9->wait)) {
  if (VAR_9->txq.qlen + VAR_9->rxq.qlen + VAR_9->done.qlen == 0)
   FUNC_20(&VAR_9->wait);


 } else if (FUNC_10 (VAR_9->net) &&
     FUNC_9 (VAR_9->net) &&
     FUNC_7(VAR_9->net) &&
     !FUNC_17(&VAR_9->delay) &&
     !FUNC_16(VAR_3, &VAR_9->flags) &&
     !FUNC_16(VAR_1, &VAR_9->flags)) {
  int VAR_12 = VAR_9->rxq.qlen;

  if (VAR_12 < FUNC_0(VAR_9)) {
   if (FUNC_12(VAR_9, VAR_4) == -VAR_0)
    return;
   if (VAR_12 != VAR_9->rxq.qlen)
    FUNC_8(VAR_9, VAR_7, VAR_9->net,
       "rxqlen %d --> %d\n",
       VAR_12, VAR_9->rxq.qlen);
   if (VAR_9->rxq.qlen < FUNC_0(VAR_9))
    FUNC_15 (&VAR_9->bh);
  }
  if (VAR_9->txq.qlen < FUNC_1 (VAR_9))
   FUNC_11 (VAR_9->net);
 }
}
