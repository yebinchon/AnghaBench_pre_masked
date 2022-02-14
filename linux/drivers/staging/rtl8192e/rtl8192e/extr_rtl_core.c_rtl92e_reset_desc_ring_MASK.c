
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_desc {int TxBuffAddr; } ;
struct sk_buff {int len; } ;
struct rx_desc {int OWN; } ;
struct rtl8192_tx_ring {size_t idx; int entries; int queue; struct tx_desc* desc; } ;
struct r8192_priv {int rxringcount; int irq_th_lock; int pdev; struct rtl8192_tx_ring* tx_ring; scalar_t__* rx_idx; struct rx_desc** rx_ring; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct net_device *VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_3(VAR_3);
 int VAR_5, VAR_6;
 unsigned long VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_4->rx_ring[VAR_6]) {
   struct rx_desc *VAR_8 = ((void*)0);

   for (VAR_5 = 0; VAR_5 < VAR_4->rxringcount; VAR_5++) {
    VAR_8 = &VAR_4->rx_ring[VAR_6][VAR_5];
    VAR_8->OWN = 1;
   }
   VAR_4->rx_idx[VAR_6] = 0;
  }
 }

 FUNC_5(&VAR_4->irq_th_lock, VAR_7);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4->tx_ring[VAR_5].desc) {
   struct rtl8192_tx_ring *VAR_9 = &VAR_4->tx_ring[VAR_5];

   while (FUNC_4(&VAR_9->queue)) {
    struct tx_desc *VAR_10 = &VAR_9->desc[VAR_9->idx];
    struct sk_buff *VAR_11 =
       FUNC_0(&VAR_9->queue);

    FUNC_2(VAR_4->pdev,
       VAR_10->TxBuffAddr,
       VAR_11->len, VAR_2);
    FUNC_1(VAR_11);
    VAR_9->idx = (VAR_9->idx + 1) % VAR_9->entries;
   }
   VAR_9->idx = 0;
  }
 }
 FUNC_6(&VAR_4->irq_th_lock, VAR_7);
}
