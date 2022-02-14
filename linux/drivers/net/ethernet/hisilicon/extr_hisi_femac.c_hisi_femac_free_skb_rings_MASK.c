
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct hisi_femac_queue {size_t tail; size_t head; size_t num; struct sk_buff** skb; int * dma_phys; } ;
struct hisi_femac_priv {scalar_t__ tx_fifo_used_cnt; int ndev; int dev; struct hisi_femac_queue rxq; struct hisi_femac_queue txq; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct hisi_femac_priv*,struct sk_buff*,size_t) ;
 int FUNC_3 (int ,char*,size_t,size_t) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct hisi_femac_priv *VAR_2)
{
 struct hisi_femac_queue *VAR_3 = &VAR_2->txq;
 struct hisi_femac_queue *VAR_4 = &VAR_2->rxq;
 struct sk_buff *VAR_5;
 dma_addr_t VAR_6;
 u32 VAR_7;

 VAR_7 = VAR_4->tail;
 while (VAR_7 != VAR_4->head) {
  VAR_5 = VAR_4->skb[VAR_7];
  if (FUNC_4(!VAR_5)) {
   FUNC_3(VAR_2->ndev, "NULL rx skb. pos=%d, head=%d\n",
       VAR_7, VAR_4->head);
   continue;
  }

  VAR_6 = VAR_4->dma_phys[VAR_7];
  FUNC_1(VAR_2->dev, VAR_6, VAR_1,
     VAR_0);

  FUNC_0(VAR_5);
  VAR_4->skb[VAR_7] = ((void*)0);
  VAR_7 = (VAR_7 + 1) % VAR_4->num;
 }
 VAR_4->tail = VAR_7;

 VAR_7 = VAR_3->tail;
 while (VAR_7 != VAR_3->head) {
  VAR_5 = VAR_3->skb[VAR_7];
  if (FUNC_4(!VAR_5)) {
   FUNC_3(VAR_2->ndev, "NULL tx skb. pos=%d, head=%d\n",
       VAR_7, VAR_3->head);
   continue;
  }
  FUNC_2(VAR_2, VAR_5, VAR_7);
  FUNC_0(VAR_5);
  VAR_3->skb[VAR_7] = ((void*)0);
  VAR_7 = (VAR_7 + 1) % VAR_3->num;
 }
 VAR_3->tail = VAR_7;
 VAR_2->tx_fifo_used_cnt = 0;
}
