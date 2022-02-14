
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_rxon_context {int key_mapping_keys; int vif; } ;
struct iwl_priv {int ucode_key_table; int mutex; int sta_lock; TYPE_1__* stations; } ;
struct TYPE_6__ {int modify_mask; } ;
struct TYPE_5__ {int key_flags; int key_offset; } ;
struct iwl_addsta_cmd {int mode; TYPE_3__ sta; TYPE_2__ key; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int keyidx; int flags; int hw_key_idx; } ;
typedef int sta_cmd ;
typedef int __le16 ;
struct TYPE_4__ {int used; int sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,int,size_t) ;
 int FUNC_1 (struct iwl_priv*,char*,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iwl_priv*,struct iwl_addsta_cmd*,int ) ;
 size_t FUNC_4 (struct iwl_priv*,int ,struct ieee80211_sta*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct iwl_addsta_cmd*,int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct iwl_priv *VAR_11,
      struct iwl_rxon_context *VAR_12,
      struct ieee80211_key_conf *VAR_13,
      struct ieee80211_sta *VAR_14)
{
 struct iwl_addsta_cmd VAR_15;
 u8 VAR_16 = FUNC_4(VAR_11, VAR_12->vif, VAR_14);
 __le16 VAR_17;


 if (VAR_16 == VAR_2)
  return -VAR_0;

 FUNC_7(&VAR_11->sta_lock);
 FUNC_6(&VAR_15, &VAR_11->stations[VAR_16].sta, sizeof(VAR_15));
 if (!(VAR_11->stations[VAR_16].used & VAR_3))
  VAR_16 = VAR_2;
 FUNC_8(&VAR_11->sta_lock);

 if (VAR_16 == VAR_2)
  return 0;

 FUNC_5(&VAR_11->mutex);

 VAR_12->key_mapping_keys--;

 FUNC_0(VAR_11, "Remove dynamic key: idx=%d sta=%d\n",
        VAR_13->keyidx, VAR_16);

 if (!FUNC_9(VAR_13->hw_key_idx, &VAR_11->ucode_key_table))
  FUNC_1(VAR_11, "offset %d not used in uCode key table.\n",
   VAR_13->hw_key_idx);

 VAR_17 = FUNC_2(VAR_13->keyidx << VAR_6);
 VAR_17 |= VAR_7 | VAR_8 |
       VAR_5;

 if (!(VAR_13->flags & VAR_1))
  VAR_17 |= VAR_9;

 VAR_15.key.key_flags = VAR_17;
 VAR_15.key.key_offset = VAR_13->hw_key_idx;
 VAR_15.sta.modify_mask = VAR_10;
 VAR_15.mode = VAR_4;

 return FUNC_3(VAR_11, &VAR_15, 0);
}
