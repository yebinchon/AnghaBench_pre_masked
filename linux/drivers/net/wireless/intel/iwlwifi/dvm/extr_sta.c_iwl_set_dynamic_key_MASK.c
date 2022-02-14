
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__* bssid_addr; } ;
struct iwl_rxon_context {int key_mapping_keys; TYPE_1__ active; int vif; } ;
struct iwl_priv {int ucode_key_table; int mutex; } ;
struct ieee80211_sta {scalar_t__* addr; } ;
struct TYPE_4__ {int iv32; } ;
struct ieee80211_key_seq {TYPE_2__ tkip; } ;
struct ieee80211_key_conf {scalar_t__ hw_key_idx; int cipher; int keyidx; int keylen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,int,int ,int ,scalar_t__*,int) ;
 int FUNC_1 (struct iwl_priv*,char*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;




 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (struct ieee80211_key_conf*,int ,struct ieee80211_key_seq*) ;
 int FUNC_4 (struct ieee80211_key_conf*,scalar_t__ const*,int ,int *) ;
 scalar_t__ FUNC_5 (struct iwl_priv*) ;
 scalar_t__ FUNC_6 (struct iwl_priv*,int ,struct ieee80211_sta*) ;
 int FUNC_7 (struct iwl_priv*,struct ieee80211_key_conf*,scalar_t__,int ,int *,int ) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct iwl_priv *VAR_4,
   struct iwl_rxon_context *VAR_5,
   struct ieee80211_key_conf *VAR_6,
   struct ieee80211_sta *VAR_7)
{
 struct ieee80211_key_seq VAR_8;
 u16 VAR_9[5];
 int VAR_10;
 u8 VAR_11 = FUNC_6(VAR_4, VAR_5->vif, VAR_7);
 const u8 *VAR_12;

 if (VAR_11 == VAR_2)
  return -VAR_0;

 FUNC_8(&VAR_4->mutex);

 VAR_6->hw_key_idx = FUNC_5(VAR_4);
 if (VAR_6->hw_key_idx == VAR_3)
  return -VAR_1;

 VAR_5->key_mapping_keys++;

 switch (VAR_6->cipher) {
 case 130:
  if (VAR_7)
   VAR_12 = VAR_7->addr;
  else
   VAR_12 = VAR_5->active.bssid_addr;


  FUNC_3(VAR_6, 0, &VAR_8);
  FUNC_4(VAR_6, VAR_12, VAR_8.tkip.iv32, VAR_9);
  VAR_10 = FUNC_7(VAR_4, VAR_6, VAR_11,
       VAR_8.tkip.iv32, VAR_9, 0);
  break;
 case 131:
 case 128:
 case 129:
  VAR_10 = FUNC_7(VAR_4, VAR_6, VAR_11,
       0, ((void*)0), 0);
  break;
 default:
  FUNC_1(VAR_4, "Unknown cipher %x\n", VAR_6->cipher);
  VAR_10 = -VAR_0;
 }

 if (VAR_10) {
  VAR_5->key_mapping_keys--;
  FUNC_2(VAR_6->hw_key_idx, &VAR_4->ucode_key_table);
 }

 FUNC_0(VAR_4, "Set dynamic key: cipher=%x len=%d idx=%d sta=%pM ret=%d\n",
        VAR_6->cipher, VAR_6->keylen, VAR_6->keyidx,
        VAR_7 ? VAR_7->addr : ((void*)0), VAR_10);

 return VAR_10;
}
