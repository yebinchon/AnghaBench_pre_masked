
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_data {int state; int urb; } ;
struct sk_buff {scalar_t__ cb; } ;
struct lan78xx_net {int delta; int flags; int delay; int txq_pend; int stat_monitor; int net; int done; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct lan78xx_net*) ;
 int FUNC_2 (struct lan78xx_net*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;


 int FUNC_7 (struct lan78xx_net*,struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int *) ;

 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(unsigned long VAR_3)
{
 struct lan78xx_net *VAR_4 = (struct lan78xx_net *)VAR_3;
 struct sk_buff *VAR_5;
 struct skb_data *VAR_6;

 while ((VAR_5 = FUNC_8(&VAR_4->done))) {
  VAR_6 = (struct skb_data *)(VAR_5->cb);
  switch (VAR_6->state) {
  case 129:
   VAR_6->state = 130;
   FUNC_7(VAR_4, VAR_5);
   continue;
  case 128:
   FUNC_12(VAR_6->urb);
   FUNC_0(VAR_5);
   continue;
  case 130:
   FUNC_12(VAR_6->urb);
   FUNC_0(VAR_5);
   continue;
  default:
   FUNC_4(VAR_4->net, "skb state %d\n", VAR_6->state);
   return;
  }
 }

 if (FUNC_5(VAR_4->net) && FUNC_6(VAR_4->net)) {

  if (FUNC_11(&VAR_4->stat_monitor) && (VAR_4->delta != 1)) {
   VAR_4->delta = 1;
   FUNC_3(&VAR_4->stat_monitor,
      VAR_2 + VAR_1);
  }

  if (!FUNC_9(&VAR_4->txq_pend))
   FUNC_2(VAR_4);

  if (!FUNC_11(&VAR_4->delay) &&
      !FUNC_10(VAR_0, &VAR_4->flags))
   FUNC_1(VAR_4);
 }
}
