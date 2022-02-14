
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mwl8k_priv {int wmm_enabled; int * wmm_params; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int txop; int aifs; int cw_max; int cw_min; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct ieee80211_tx_queue_params const*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int,int ,int ,int ,int ) ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_1,
    struct ieee80211_vif *VAR_2, u16 VAR_3,
    const struct ieee80211_tx_queue_params *VAR_4)
{
 struct mwl8k_priv *VAR_5 = VAR_1->priv;
 int VAR_6;

 VAR_6 = FUNC_4(VAR_1);
 if (!VAR_6) {
  FUNC_0(VAR_3 > VAR_0 - 1);
  FUNC_1(&VAR_5->wmm_params[VAR_3], VAR_4, sizeof(*VAR_4));

  if (!VAR_5->wmm_enabled)
   VAR_6 = FUNC_3(VAR_1, 1);

  if (!VAR_6) {
   int VAR_7 = VAR_0 - 1 - VAR_3;
   VAR_6 = FUNC_2(VAR_1, VAR_7,
             VAR_4->cw_min,
             VAR_4->cw_max,
             VAR_4->aifs,
             VAR_4->txop);
  }

  FUNC_5(VAR_1);
 }

 return VAR_6;
}
