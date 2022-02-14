
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int key_mapping_keys; } ;
struct il_priv {int mutex; TYPE_3__ _4965; TYPE_2__* cfg; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int flags; scalar_t__ cipher; scalar_t__ hw_key_idx; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;
struct TYPE_5__ {TYPE_1__* mod_params; } ;
struct TYPE_4__ {scalar_t__ sw_crypto; } ;



 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct il_priv*,struct ieee80211_key_conf*) ;
 int FUNC_2 (struct il_priv*,struct ieee80211_key_conf*,scalar_t__) ;
 int FUNC_3 (struct il_priv*,struct ieee80211_key_conf*) ;
 int FUNC_4 (struct il_priv*,struct ieee80211_key_conf*,scalar_t__) ;
 int FUNC_5 (struct il_priv*,int) ;
 scalar_t__ FUNC_6 (struct il_priv*,struct ieee80211_sta*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct ieee80211_hw *VAR_8, enum set_key_cmd VAR_9,
     struct ieee80211_vif *VAR_10, struct ieee80211_sta *VAR_11,
     struct ieee80211_key_conf *VAR_12)
{
 struct il_priv *VAR_13 = VAR_8->priv;
 int VAR_14;
 u8 VAR_15;
 bool VAR_16 = 0;

 FUNC_0("enter\n");

 if (VAR_13->cfg->mod_params->sw_crypto) {
  FUNC_0("leave - hwcrypto disabled\n");
  return -VAR_1;
 }





 if (VAR_10->type == VAR_5 &&
     !(VAR_12->flags & VAR_3)) {
  FUNC_0("leave - ad-hoc group key\n");
  return -VAR_1;
 }

 VAR_15 = FUNC_6(VAR_13, VAR_11);
 if (VAR_15 == VAR_4)
  return -VAR_0;

 FUNC_7(&VAR_13->mutex);
 FUNC_5(VAR_13, 100);







 if ((VAR_12->cipher == VAR_7 ||
      VAR_12->cipher == VAR_6) && !VAR_11) {
  if (VAR_9 == 128)
   VAR_16 = !VAR_13->_4965.key_mapping_keys;
  else
   VAR_16 =
       (VAR_12->hw_key_idx == VAR_2);
 }

 switch (VAR_9) {
 case 128:
  if (VAR_16)
   VAR_14 = FUNC_3(VAR_13, VAR_12);
  else
   VAR_14 = FUNC_4(VAR_13, VAR_12, VAR_15);

  FUNC_0("enable hwcrypto key\n");
  break;
 case 129:
  if (VAR_16)
   VAR_14 = FUNC_1(VAR_13, VAR_12);
  else
   VAR_14 = FUNC_2(VAR_13, VAR_12, VAR_15);

  FUNC_0("disable hwcrypto key\n");
  break;
 default:
  VAR_14 = -VAR_0;
 }

 FUNC_8(&VAR_13->mutex);
 FUNC_0("leave\n");

 return VAR_14;
}
