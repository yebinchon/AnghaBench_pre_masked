
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int tc_skip_classify; int mac_len; int tc_from_ingress; int skb_iif; int dev; scalar_t__ len; scalar_t__ tc_redirected; } ;
struct netdev_queue {int dummy; } ;
struct ifb_q_private {int tasklet_pending; int ifb_tasklet; int rq; TYPE_2__* dev; int tq; int tsync; int tx_bytes; int tx_packets; int txqnum; } ;
struct TYPE_4__ {int tx_dropped; } ;
struct TYPE_5__ {int ifindex; TYPE_1__ stats; } ;


 scalar_t__ FUNC_0 (struct netdev_queue*) ;
 int FUNC_1 (struct netdev_queue*) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct netdev_queue* FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct netdev_queue*) ;
 int FUNC_10 (struct netdev_queue*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 struct sk_buff* FUNC_13 (int *) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static void FUNC_20(unsigned long VAR_0)
{
 struct ifb_q_private *VAR_1 = (struct ifb_q_private *)VAR_0;
 struct netdev_queue *VAR_2;
 struct sk_buff *VAR_3;

 VAR_2 = FUNC_7(VAR_1->dev, VAR_1->txqnum);
 VAR_3 = FUNC_13(&VAR_1->tq);
 if (!VAR_3) {
  if (!FUNC_0(VAR_2))
   goto resched;
  FUNC_16(&VAR_1->rq, &VAR_1->tq);
  FUNC_1(VAR_2);
 }

 while ((VAR_3 = FUNC_2(&VAR_1->tq)) != ((void*)0)) {
  VAR_3->tc_redirected = 0;
  VAR_3->tc_skip_classify = 1;

  FUNC_18(&VAR_1->tsync);
  VAR_1->tx_packets++;
  VAR_1->tx_bytes += VAR_3->len;
  FUNC_19(&VAR_1->tsync);

  FUNC_11();
  VAR_3->dev = FUNC_3(FUNC_5(VAR_1->dev), VAR_3->skb_iif);
  if (!VAR_3->dev) {
   FUNC_12();
   FUNC_4(VAR_3);
   VAR_1->dev->stats.tx_dropped++;
   if (FUNC_15(&VAR_1->tq) != 0)
    goto resched;
   break;
  }
  FUNC_12();
  VAR_3->skb_iif = VAR_1->dev->ifindex;

  if (!VAR_3->tc_from_ingress) {
   FUNC_6(VAR_3);
  } else {
   FUNC_14(VAR_3, VAR_3->mac_len);
   FUNC_8(VAR_3);
  }
 }

 if (FUNC_0(VAR_2)) {
  VAR_3 = FUNC_13(&VAR_1->rq);
  if (!VAR_3) {
   VAR_1->tasklet_pending = 0;
   if (FUNC_9(VAR_2))
    FUNC_10(VAR_2);
  } else {
   FUNC_1(VAR_2);
   goto resched;
  }
  FUNC_1(VAR_2);
 } else {
resched:
  VAR_1->tasklet_pending = 1;
  FUNC_17(&VAR_1->ifb_tasklet);
 }

}
