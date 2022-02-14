
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_tx_queue {scalar_t__ txd_dma; struct mwl8k_tx_desc* txd; int * skb; scalar_t__ tail; scalar_t__ head; scalar_t__ len; } ;
struct mwl8k_tx_desc {int next_txd_phys_addr; scalar_t__ status; } ;
struct mwl8k_priv {int pdev; struct mwl8k_tx_queue* txq; } ;
struct ieee80211_hw {int wiphy; struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int,int,int ) ;
 int FUNC_2 (int ,int,struct mwl8k_tx_desc*,scalar_t__) ;
 struct mwl8k_tx_desc* FUNC_3 (int ,int,scalar_t__*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_3, int VAR_4)
{
 struct mwl8k_priv *VAR_5 = VAR_3->priv;
 struct mwl8k_tx_queue *VAR_6 = VAR_5->txq + VAR_4;
 int VAR_7;
 int VAR_8;

 VAR_6->len = 0;
 VAR_6->head = 0;
 VAR_6->tail = 0;

 VAR_7 = VAR_2 * sizeof(struct mwl8k_tx_desc);

 VAR_6->txd = FUNC_3(VAR_5->pdev, VAR_7, &VAR_6->txd_dma);
 if (VAR_6->txd == ((void*)0)) {
  FUNC_4(VAR_3->wiphy, "failed to alloc TX descriptors\n");
  return -VAR_0;
 }

 VAR_6->skb = FUNC_1(VAR_2, sizeof(*VAR_6->skb), VAR_1);
 if (VAR_6->skb == ((void*)0)) {
  FUNC_2(VAR_5->pdev, VAR_7, VAR_6->txd, VAR_6->txd_dma);
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  struct mwl8k_tx_desc *VAR_9;
  int VAR_10;

  VAR_9 = VAR_6->txd + VAR_8;
  VAR_10 = (VAR_8 + 1) % VAR_2;

  VAR_9->status = 0;
  VAR_9->next_txd_phys_addr =
   FUNC_0(VAR_6->txd_dma + VAR_10 * sizeof(*VAR_9));
 }

 return 0;
}
