
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct p54_common {int privacy_caps; int conf_mutex; int used_rxkeys; int rx_keycache_size; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__* addr; } ;
struct ieee80211_key_conf {int flags; int cipher; int hw_key_idx; int key; int keylen; int keyidx; } ;
struct ieee80211_hw {struct p54_common* priv; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;




 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct p54_common*,scalar_t__,int,int ,int ,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_13, enum set_key_cmd VAR_14,
         struct ieee80211_vif *VAR_15, struct ieee80211_sta *VAR_16,
         struct ieee80211_key_conf *VAR_17)
{
 struct p54_common *VAR_18 = VAR_13->priv;
 int VAR_19, VAR_20 = 0;
 u8 VAR_21 = 0;
 u8 *VAR_22 = ((void*)0);

 if (VAR_12)
  return -VAR_4;

 if (VAR_17->flags & VAR_7) {







  return -VAR_4;
 }

 FUNC_2(&VAR_18->conf_mutex);
 if (VAR_14 == VAR_11) {
  switch (VAR_17->cipher) {
  case 130:
   if (!(VAR_18->privacy_caps & (VAR_1 |
         VAR_2))) {
    VAR_20 = -VAR_4;
    goto out_unlock;
   }
   VAR_17->flags |= VAR_5;
   VAR_21 = VAR_9;
   break;
  case 128:
  case 129:
   if (!(VAR_18->privacy_caps & VAR_3)) {
    VAR_20 = -VAR_4;
    goto out_unlock;
   }
   VAR_17->flags |= VAR_5;
   VAR_21 = VAR_10;
   break;
  case 131:
   if (!(VAR_18->privacy_caps & VAR_0)) {
    VAR_20 = -VAR_4;
    goto out_unlock;
   }
   VAR_17->flags |= VAR_5;
   VAR_21 = VAR_8;
   break;
  default:
   VAR_20 = -VAR_4;
   goto out_unlock;
  }
  VAR_19 = FUNC_0(VAR_18->used_rxkeys,
            VAR_18->rx_keycache_size, 0);

  if (VAR_19 < 0) {
   VAR_17->hw_key_idx = 0xff;
   goto out_unlock;
  }

  VAR_17->flags |= VAR_6;
 } else {
  VAR_19 = VAR_17->hw_key_idx;

  if (VAR_19 == 0xff) {


   goto out_unlock;
  }

  FUNC_1(VAR_18->used_rxkeys, VAR_19, 0);
  VAR_21 = 0;
 }

 if (VAR_16)
  VAR_22 = VAR_16->addr;

 VAR_20 = FUNC_4(VAR_18, VAR_21, VAR_19, VAR_17->keyidx,
        VAR_17->keylen, VAR_22, VAR_17->key);
 if (VAR_20) {
  FUNC_1(VAR_18->used_rxkeys, VAR_19, 0);
  VAR_20 = -VAR_4;
  goto out_unlock;
 }

 VAR_17->hw_key_idx = VAR_19;

out_unlock:
 FUNC_3(&VAR_18->conf_mutex);
 return VAR_20;
}
