
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mwl8k_tx_queue {int tail; int head; int len; struct mwl8k_tx_desc* txd; } ;
struct mwl8k_tx_desc {scalar_t__ pkt_len; int status; } ;
struct mwl8k_priv {struct mwl8k_tx_queue* txq; } ;
struct ieee80211_hw {int wiphy; struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mwl8k_priv*) ;
 int FUNC_2 (int ,char*,int,int ,int ,int ,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2)
{
 struct mwl8k_priv *VAR_3 = VAR_2->priv;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_3); VAR_4++) {
  struct mwl8k_tx_queue *VAR_5 = VAR_3->txq + VAR_4;
  int VAR_6 = 0;
  int VAR_7 = 0;
  int VAR_8 = 0;
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   struct mwl8k_tx_desc *VAR_10 = VAR_5->txd + VAR_9;
   u32 VAR_11;

   VAR_11 = FUNC_0(VAR_10->status);
   if (VAR_11 & VAR_0)
    VAR_6++;
   else
    VAR_7++;

   if (VAR_10->pkt_len == 0)
    VAR_8++;
  }

  FUNC_2(VAR_2->wiphy,
     "txq[%d] len=%d head=%d tail=%d "
     "fw_owned=%d drv_owned=%d unused=%d\n",
     VAR_4,
     VAR_5->len, VAR_5->head, VAR_5->tail,
     VAR_6, VAR_7, VAR_8);
 }
}
