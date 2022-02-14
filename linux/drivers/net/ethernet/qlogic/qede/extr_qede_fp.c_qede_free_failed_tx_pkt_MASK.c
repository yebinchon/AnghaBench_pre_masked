
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {TYPE_3__* skbs; } ;
struct TYPE_5__ {int bd_prod; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct qede_tx_queue {size_t sw_tx_prod; TYPE_4__ sw_tx_ring; TYPE_2__ tx_db; int tx_pbl; int dev; } ;
struct eth_tx_bd {scalar_t__ nbytes; } ;
struct eth_tx_1st_bd {scalar_t__ nbytes; } ;
struct TYPE_7__ {scalar_t__ flags; struct sk_buff* skb; } ;


 int FUNC_0 (struct eth_tx_bd*) ;
 int FUNC_1 (struct eth_tx_bd*) ;
 int VAR_0 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,struct eth_tx_bd*) ;

__attribute__((used)) static void FUNC_8(struct qede_tx_queue *VAR_1,
        struct eth_tx_1st_bd *VAR_2,
        int VAR_3, bool VAR_4)
{
 u16 VAR_5 = VAR_1->sw_tx_prod;
 struct sk_buff *VAR_6 = VAR_1->sw_tx_ring.skbs[VAR_5].skb;
 struct eth_tx_bd *VAR_7;
 int VAR_8, VAR_9 = 0;


 FUNC_7(&VAR_1->tx_pbl,
      FUNC_5(VAR_1->tx_db.data.bd_prod), VAR_2);

 VAR_2 = (struct eth_tx_1st_bd *)FUNC_6(&VAR_1->tx_pbl);

 if (VAR_4) {
  struct eth_tx_bd *VAR_10 = (struct eth_tx_bd *)
       FUNC_6(&VAR_1->tx_pbl);
  VAR_9 = FUNC_1(VAR_10);
  VAR_3--;
 }

 FUNC_4(VAR_1->dev, FUNC_0(VAR_2),
    FUNC_1(VAR_2) + VAR_9, VAR_0);


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = (struct eth_tx_bd *)
   FUNC_6(&VAR_1->tx_pbl);
  if (VAR_7->nbytes)
   FUNC_3(VAR_1->dev,
           FUNC_0(VAR_7),
           FUNC_1(VAR_7), VAR_0);
 }


 FUNC_7(&VAR_1->tx_pbl,
      FUNC_5(VAR_1->tx_db.data.bd_prod), VAR_2);


 FUNC_2(VAR_6);
 VAR_1->sw_tx_ring.skbs[VAR_5].skb = ((void*)0);
 VAR_1->sw_tx_ring.skbs[VAR_5].flags = 0;
}
