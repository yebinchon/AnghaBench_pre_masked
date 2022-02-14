
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {int type; int* addr; } ;
struct ieee80211_sta {int* addr; } ;
struct ieee80211_key_conf {int cipher; int keylen; int* key; int flags; int keyidx; } ;
struct ath_keyval {int kv_len; int* kv_val; int kv_type; } ;
struct ath_common {int crypt_caps; int tkip_keymap; int keymap; int ccmp_keymap; } ;
typedef int hk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 scalar_t__ FUNC_0 (int) ;




 int FUNC_1 (struct ath_common*,int,struct ath_keyval*,int const*) ;
 int FUNC_2 (struct ath_common*,int) ;
 int FUNC_3 (struct ath_common*,int,int*,struct ath_keyval*,int const*,int) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (struct ath_keyval*,int ,int) ;
 int FUNC_6 (int,int ) ;

int FUNC_7(struct ath_common *VAR_10,
     struct ieee80211_vif *VAR_11,
     struct ieee80211_sta *VAR_12,
     struct ieee80211_key_conf *VAR_13)
{
 struct ath_keyval VAR_14;
 const u8 *VAR_15 = ((void*)0);
 u8 VAR_16[VAR_8];
 int VAR_17 = 0;
 int VAR_18;

 FUNC_5(&VAR_14, 0, sizeof(VAR_14));

 switch (VAR_13->cipher) {
 case 0:
  VAR_14.kv_type = VAR_1;
  break;
 case 128:
 case 129:
  VAR_14.kv_type = VAR_3;
  break;
 case 130:
  VAR_14.kv_type = VAR_2;
  break;
 case 131:
  VAR_14.kv_type = VAR_0;
  break;
 default:
  return -VAR_7;
 }

 VAR_14.kv_len = VAR_13->keylen;
 if (VAR_13->keylen)
  FUNC_4(VAR_14.kv_val, VAR_13->key, VAR_13->keylen);

 if (!(VAR_13->flags & VAR_9)) {
  switch (VAR_11->type) {
  case 132:
   FUNC_4(VAR_16, VAR_11->addr, VAR_8);
   VAR_16[0] |= 0x01;
   VAR_15 = VAR_16;
   VAR_18 = FUNC_2(VAR_10, VAR_13->cipher);
   break;
  case 133:
   if (!VAR_12) {
    VAR_18 = VAR_13->keyidx;
    break;
   }
   FUNC_4(VAR_16, VAR_12->addr, VAR_8);
   VAR_16[0] |= 0x01;
   VAR_15 = VAR_16;
   VAR_18 = FUNC_2(VAR_10, VAR_13->cipher);
   break;
  default:
   VAR_18 = VAR_13->keyidx;
   break;
  }
 } else if (VAR_13->keyidx) {
  if (FUNC_0(!VAR_12))
   return -VAR_7;
  VAR_15 = VAR_12->addr;

  if (VAR_11->type != 132) {


   VAR_18 = VAR_13->keyidx;
  } else
   return -VAR_5;
 } else {
  if (FUNC_0(!VAR_12))
   return -VAR_7;
  VAR_15 = VAR_12->addr;

  VAR_18 = FUNC_2(VAR_10, VAR_13->cipher);
 }

 if (VAR_18 < 0)
  return -VAR_6;

 if (VAR_13->cipher == 130)
  VAR_17 = FUNC_3(VAR_10, VAR_18, VAR_13->key, &VAR_14, VAR_15,
          VAR_11->type == 132);
 else
  VAR_17 = FUNC_1(VAR_10, VAR_18, &VAR_14, VAR_15);

 if (!VAR_17)
  return -VAR_5;

 FUNC_6(VAR_18, VAR_10->keymap);
 if (VAR_13->cipher == 131)
  FUNC_6(VAR_18, VAR_10->ccmp_keymap);

 if (VAR_13->cipher == 130) {
  FUNC_6(VAR_18 + 64, VAR_10->keymap);
  FUNC_6(VAR_18, VAR_10->tkip_keymap);
  FUNC_6(VAR_18 + 64, VAR_10->tkip_keymap);
  if (!(VAR_10->crypt_caps & VAR_4)) {
   FUNC_6(VAR_18 + 32, VAR_10->keymap);
   FUNC_6(VAR_18 + 64 + 32, VAR_10->keymap);
   FUNC_6(VAR_18 + 32, VAR_10->tkip_keymap);
   FUNC_6(VAR_18 + 64 + 32, VAR_10->tkip_keymap);
  }
 }

 return VAR_18;
}
