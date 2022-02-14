
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int addr; } ;
struct ath_common {int macaddr; int bssidmask; } ;
struct ath9k_vif_iter_data {int * hw_macaddr; int * mask; } ;
struct ath9k_htc_priv {int hw; int ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath9k_vif_iter_data*,int ,struct ieee80211_vif*) ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int (*) (struct ath9k_vif_iter_data*,int ,struct ieee80211_vif*),struct ath9k_vif_iter_data*) ;
 int FUNC_5 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_6(struct ath9k_htc_priv *VAR_2,
         struct ieee80211_vif *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_1(VAR_2->ah);
 struct ath9k_vif_iter_data VAR_5;






 VAR_5.hw_macaddr = ((void*)0);
 FUNC_3(VAR_5.mask);

 if (VAR_3)
  FUNC_0(&VAR_5, VAR_3->addr, VAR_3);


 FUNC_4(
  VAR_2->hw, VAR_1,
  FUNC_0, &VAR_5);

 FUNC_5(VAR_4->bssidmask, VAR_5.mask, VAR_0);

 if (VAR_5.hw_macaddr)
  FUNC_5(VAR_4->macaddr, VAR_5.hw_macaddr, VAR_0);

 FUNC_2(VAR_4);
}
