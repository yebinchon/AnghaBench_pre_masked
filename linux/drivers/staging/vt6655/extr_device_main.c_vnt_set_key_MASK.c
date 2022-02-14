
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int key_entry_inuse; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int hw_key_idx; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;



 int VAR_0 ;

 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ieee80211_hw*,struct ieee80211_sta*,struct ieee80211_vif*,struct ieee80211_key_conf*) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_1, enum set_key_cmd VAR_2,
         struct ieee80211_vif *VAR_3, struct ieee80211_sta *VAR_4,
         struct ieee80211_key_conf *VAR_5)
{
 struct vnt_private *VAR_6 = VAR_1->priv;

 switch (VAR_2) {
 case 128:
  if (FUNC_2(VAR_1, VAR_4, VAR_3, VAR_5))
   return -VAR_0;
  break;
 case 129:
  if (FUNC_1(VAR_5->hw_key_idx, &VAR_6->key_entry_inuse))
   FUNC_0(VAR_5->hw_key_idx, &VAR_6->key_entry_inuse);
 default:
  break;
 }

 return 0;
}
