
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_priv {int poll_tx_task; scalar_t__ regs; int tx_lock; int * tx_wait; int pending_tx_pkts; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mwl8k_priv*) ;
 scalar_t__ FUNC_2 (struct ieee80211_hw*,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_2)
{
 struct ieee80211_hw *VAR_3 = (struct ieee80211_hw *)VAR_2;
 struct mwl8k_priv *VAR_4 = VAR_3->priv;
 int VAR_5;
 int VAR_6;

 VAR_5 = 32;

 FUNC_3(&VAR_4->tx_lock);

 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_4); VAR_6++)
  VAR_5 -= FUNC_2(VAR_3, VAR_6, VAR_5, 0);

 if (!VAR_4->pending_tx_pkts && VAR_4->tx_wait != ((void*)0)) {
  FUNC_0(VAR_4->tx_wait);
  VAR_4->tx_wait = ((void*)0);
 }

 FUNC_4(&VAR_4->tx_lock);

 if (VAR_5) {
  FUNC_6(~VAR_0,
         VAR_4->regs + VAR_1);
 } else {
  FUNC_5(&VAR_4->poll_tx_task);
 }
}
