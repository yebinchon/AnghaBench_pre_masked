
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxon_context {int * wep_keys; } ;
struct iwl_priv {int mutex; } ;
struct ieee80211_key_conf {size_t keyidx; } ;


 int FUNC_0 (struct iwl_priv*,char*,...) ;
 scalar_t__ FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (struct iwl_priv*,struct iwl_rxon_context*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;

int FUNC_5(struct iwl_priv *VAR_0,
          struct iwl_rxon_context *VAR_1,
          struct ieee80211_key_conf *VAR_2)
{
 int VAR_3;

 FUNC_3(&VAR_0->mutex);

 FUNC_0(VAR_0, "Removing default WEP key: idx=%d\n",
        VAR_2->keyidx);

 FUNC_4(&VAR_1->wep_keys[VAR_2->keyidx], 0, sizeof(VAR_1->wep_keys[0]));
 if (FUNC_1(VAR_0)) {
  FUNC_0(VAR_0,
   "Not sending REPLY_WEPKEY command due to RFKILL.\n");

  return 0;
 }
 VAR_3 = FUNC_2(VAR_0, VAR_1, 1);
 FUNC_0(VAR_0, "Remove default WEP key: idx=%d ret=%d\n",
        VAR_2->keyidx, VAR_3);

 return VAR_3;
}
