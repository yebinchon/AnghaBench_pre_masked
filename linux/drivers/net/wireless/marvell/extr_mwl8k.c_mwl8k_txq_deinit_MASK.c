
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_tx_queue {int * txd; int txd_dma; int * skb; } ;
struct mwl8k_tx_desc {int dummy; } ;
struct mwl8k_priv {int pdev; struct mwl8k_tx_queue* txq; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_hw*,int,int ,int) ;
 int FUNC_2 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2, int VAR_3)
{
 struct mwl8k_priv *VAR_4 = VAR_2->priv;
 struct mwl8k_tx_queue *VAR_5 = VAR_4->txq + VAR_3;

 if (VAR_5->txd == ((void*)0))
  return;

 FUNC_1(VAR_2, VAR_3, VAR_0, 1);

 FUNC_0(VAR_5->skb);
 VAR_5->skb = ((void*)0);

 FUNC_2(VAR_4->pdev,
       VAR_1 * sizeof(struct mwl8k_tx_desc),
       VAR_5->txd, VAR_5->txd_dma);
 VAR_5->txd = ((void*)0);
}
