
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct il_priv {int mutex; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int flags; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;
struct TYPE_2__ {scalar_t__ sw_crypto; } ;



 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 int FUNC_1 (struct il_priv*,scalar_t__) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (struct il_priv*,struct ieee80211_key_conf*,scalar_t__) ;
 int FUNC_4 (struct il_priv*,struct ieee80211_key_conf*) ;
 int FUNC_5 (struct il_priv*) ;
 int FUNC_6 (struct il_priv*,int) ;
 scalar_t__ FUNC_7 (struct il_priv*,struct ieee80211_sta*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct ieee80211_hw *VAR_6, enum set_key_cmd VAR_7,
     struct ieee80211_vif *VAR_8, struct ieee80211_sta *VAR_9,
     struct ieee80211_key_conf *VAR_10)
{
 struct il_priv *VAR_11 = VAR_6->priv;
 int VAR_12 = 0;
 u8 VAR_13 = VAR_3;
 u8 VAR_14;

 FUNC_0("enter\n");

 if (VAR_5.sw_crypto) {
  FUNC_0("leave - hwcrypto disabled\n");
  return -VAR_1;
 }





 if (VAR_8->type == VAR_4 &&
     !(VAR_10->flags & VAR_2)) {
  FUNC_0("leave - IBSS RSN\n");
  return -VAR_1;
 }

 VAR_14 = !FUNC_5(VAR_11);

 if (!VAR_14) {
  VAR_13 = FUNC_7(VAR_11, VAR_9);
  if (VAR_13 == VAR_3) {
   FUNC_0("leave - station not found\n");
   return -VAR_0;
  }
 }

 FUNC_8(&VAR_11->mutex);
 FUNC_6(VAR_11, 100);

 switch (VAR_7) {
 case 128:
  if (VAR_14)
   VAR_12 = FUNC_4(VAR_11, VAR_10);
  else
   VAR_12 = FUNC_3(VAR_11, VAR_10, VAR_13);
  FUNC_0("enable hwcrypto key\n");
  break;
 case 129:
  if (VAR_14)
   VAR_12 = FUNC_2(VAR_11);
  else
   VAR_12 = FUNC_1(VAR_11, VAR_13);
  FUNC_0("disable hwcrypto key\n");
  break;
 default:
  VAR_12 = -VAR_0;
 }

 FUNC_0("leave ret %d\n", VAR_12);
 FUNC_9(&VAR_11->mutex);

 return VAR_12;
}
