
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int len; } ;
struct TYPE_9__ {TYPE_3__* skbs; } ;
struct qede_tx_queue {size_t sw_tx_cons; TYPE_4__ sw_tx_ring; int tx_pbl; int sw_tx_prod; } ;
struct qede_dev {TYPE_2__* pdev; } ;
struct TYPE_6__ {int nbds; } ;
struct eth_tx_bd {TYPE_1__ data; } ;
struct eth_tx_1st_bd {TYPE_1__ data; } ;
struct TYPE_10__ {int nr_frags; } ;
struct TYPE_8__ {int flags; struct sk_buff* skb; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (struct eth_tx_bd*) ;
 int FUNC_1 (struct eth_tx_bd*) ;
 int VAR_0 ;
 int FUNC_2 (struct qede_dev*,char*,size_t,size_t,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (int *,int ,int,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 TYPE_5__* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct qede_dev *VAR_2, struct qede_tx_queue *VAR_3, int *VAR_4)
{
 u16 VAR_5 = VAR_3->sw_tx_cons;
 struct sk_buff *VAR_6 = VAR_3->sw_tx_ring.skbs[VAR_5].skb;
 struct eth_tx_1st_bd *VAR_7;
 struct eth_tx_bd *VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 bool VAR_11 = VAR_3->sw_tx_ring.skbs[VAR_5].flags & VAR_1;
 int VAR_12, VAR_13 = 0;

 if (FUNC_8(!VAR_6)) {
  FUNC_2(VAR_2,
         "skb is null for txq idx=%d txq->sw_tx_cons=%d txq->sw_tx_prod=%d\n",
         VAR_5, VAR_3->sw_tx_cons, VAR_3->sw_tx_prod);
  return -1;
 }

 *VAR_4 = VAR_6->len;

 VAR_7 = (struct eth_tx_1st_bd *)FUNC_6(&VAR_3->tx_pbl);

 VAR_9++;

 VAR_10 = VAR_7->data.nbds;

 if (VAR_11) {
  struct eth_tx_bd *VAR_14 = (struct eth_tx_bd *)
   FUNC_6(&VAR_3->tx_pbl);
  VAR_13 = FUNC_1(VAR_14);
  VAR_9++;
 }
 FUNC_5(&VAR_2->pdev->dev, FUNC_0(VAR_7),
    FUNC_1(VAR_7) + VAR_13, VAR_0);


 for (VAR_12 = 0; VAR_12 < FUNC_7(VAR_6)->nr_frags; VAR_12++, VAR_9++) {
  VAR_8 = (struct eth_tx_bd *)
   FUNC_6(&VAR_3->tx_pbl);
  FUNC_4(&VAR_2->pdev->dev, FUNC_0(VAR_8),
          FUNC_1(VAR_8), VAR_0);
 }

 while (VAR_9++ < VAR_10)
  FUNC_6(&VAR_3->tx_pbl);


 FUNC_3(VAR_6);
 VAR_3->sw_tx_ring.skbs[VAR_5].skb = ((void*)0);
 VAR_3->sw_tx_ring.skbs[VAR_5].flags = 0;

 return 0;
}
