
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_wowlan_status {int non_qos_seq_ctr; int replay_ctr; TYPE_2__* gtk; scalar_t__ num_of_gtk_rekeys; int wakeup_reasons; } ;
struct iwl_mvm_vif {int seqno_valid; scalar_t__ seqno; } ;
struct iwl_mvm_d3_gtk_iter_data {int find_phase; int cipher; int last_gtk; int num_keys; scalar_t__ unhandled_cipher; struct iwl_wowlan_status* status; struct iwl_mvm* mvm; } ;
struct iwl_mvm {int hw; } ;
struct TYPE_3__ {int bssid; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ieee80211_key_conf {int cipher; int keylen; int key; int keyidx; } ;
typedef int __be64 ;
struct TYPE_4__ {int tkip_mic_key; int key; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (struct ieee80211_vif*,struct ieee80211_key_conf*) ;
 int FUNC_3 (struct ieee80211_vif*,int ,void*,int ) ;
 int FUNC_4 (int ,struct ieee80211_vif*,int ,struct iwl_mvm_d3_gtk_iter_data*) ;
 int VAR_6 ;
 int FUNC_5 (struct iwl_mvm*,int *,struct iwl_wowlan_status*) ;
 struct iwl_mvm_vif* FUNC_6 (struct ieee80211_vif*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_12(struct iwl_mvm *VAR_7,
       struct ieee80211_vif *VAR_8,
       struct iwl_wowlan_status *VAR_9)
{
 struct iwl_mvm_vif *VAR_10 = FUNC_6(VAR_8);
 struct iwl_mvm_d3_gtk_iter_data VAR_11 = {
  .mvm = VAR_7,
  .status = VAR_9,
 };
 u32 VAR_12 =
  VAR_2 |
  VAR_1;

 if (!VAR_9 || !VAR_8->bss_conf.bssid)
  return 0;

 if (FUNC_9(VAR_9->wakeup_reasons) & VAR_12)
  return 0;


 VAR_11.find_phase = 1;
 FUNC_4(VAR_7->hw, VAR_8,
       VAR_6, &VAR_11);

 if (VAR_11.unhandled_cipher)
  return 0;
 if (!VAR_11.num_keys)
  goto out;
 if (!VAR_11.last_gtk)
  return 0;





 VAR_11.find_phase = 0;
 FUNC_4(VAR_7->hw, VAR_8,
       VAR_6, &VAR_11);

 if (VAR_9->num_of_gtk_rekeys) {
  struct ieee80211_key_conf *VAR_13;
  struct {
   struct ieee80211_key_conf conf;
   u8 key[32];
  } VAR_14 = {
   .conf.cipher = VAR_11.cipher,
   .conf.keyidx =
    FUNC_7(&VAR_9->gtk[0]),
  };
  __be64 VAR_15;

  switch (VAR_11.cipher) {
  case 129:
   VAR_14.conf.keylen = VAR_4;
   FUNC_11(VAR_14.conf.key, VAR_9->gtk[0].key,
          VAR_4);
   break;
  case 128:
   VAR_14.conf.keylen = VAR_5;
   FUNC_11(VAR_14.conf.key, VAR_9->gtk[0].key, 16);

   FUNC_11(VAR_14.conf.key +
          VAR_3,
          VAR_9->gtk[0].tkip_mic_key, 8);
   break;
  }

  VAR_13 = FUNC_2(VAR_8, &VAR_14.conf);
  if (FUNC_0(VAR_13))
   return 0;
  FUNC_5(VAR_7, VAR_13, VAR_9);

  VAR_15 =
   FUNC_1(FUNC_10(VAR_9->replay_ctr));

  FUNC_3(VAR_8, VAR_8->bss_conf.bssid,
        (void *)&VAR_15, VAR_0);
 }

out:
 VAR_10->seqno_valid = 1;

 VAR_10->seqno = FUNC_8(VAR_9->non_qos_seq_ctr) + 0x10;

 return 1;
}
