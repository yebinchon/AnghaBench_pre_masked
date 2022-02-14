
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_txq {scalar_t__ drv_priv; } ;
struct ath10k_txq {int list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_txq *VAR_0)
{
 struct ath10k_txq *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = (void *)VAR_0->drv_priv;
 FUNC_0(&VAR_1->list);
}
