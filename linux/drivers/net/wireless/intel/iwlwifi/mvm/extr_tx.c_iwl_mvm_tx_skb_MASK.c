
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {unsigned int data_len; int cb; } ;
struct iwl_mvm_sta {scalar_t__ sta_id; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_tx_info {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
typedef int info ;
struct TYPE_2__ {unsigned int gso_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff_head*) ;
 struct iwl_mvm_sta* FUNC_5 (struct ieee80211_sta*) ;
 int FUNC_6 (struct iwl_mvm*,struct sk_buff*,struct ieee80211_tx_info*,struct ieee80211_sta*) ;
 int FUNC_7 (struct iwl_mvm*,struct sk_buff*,struct ieee80211_tx_info*,struct ieee80211_sta*,struct sk_buff_head*) ;
 int FUNC_8 (struct ieee80211_tx_info*,int ,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff_head*) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 unsigned int FUNC_12 (struct sk_buff*) ;
 unsigned int FUNC_13 (struct sk_buff*) ;
 unsigned int FUNC_14 (struct sk_buff*) ;

int FUNC_15(struct iwl_mvm *VAR_1, struct sk_buff *VAR_2,
     struct ieee80211_sta *VAR_3)
{
 struct iwl_mvm_sta *VAR_4 = FUNC_5(VAR_3);
 struct ieee80211_tx_info VAR_5;
 struct sk_buff_head VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 if (FUNC_1(!VAR_4))
  return -1;

 if (FUNC_1(VAR_4->sta_id == VAR_0))
  return -1;

 FUNC_8(&VAR_5, VAR_2->cb, sizeof(VAR_5));

 if (!FUNC_9(VAR_2))
  return FUNC_6(VAR_1, VAR_2, &VAR_5, VAR_3);

 VAR_7 = FUNC_12(VAR_2) - FUNC_13(VAR_2) -
  FUNC_14(VAR_2) + VAR_2->data_len;

 if (VAR_7 <= FUNC_11(VAR_2)->gso_size)
  return FUNC_6(VAR_1, VAR_2, &VAR_5, VAR_3);

 FUNC_3(&VAR_6);

 VAR_8 = FUNC_7(VAR_1, VAR_2, &VAR_5, VAR_3, &VAR_6);
 if (VAR_8)
  return VAR_8;

 if (FUNC_0(FUNC_10(&VAR_6)))
  return VAR_8;

 while (!FUNC_10(&VAR_6)) {
  VAR_2 = FUNC_2(&VAR_6);

  VAR_8 = FUNC_6(VAR_1, VAR_2, &VAR_5, VAR_3);
  if (VAR_8) {
   FUNC_4(&VAR_6);
   return VAR_8;
  }
 }

 return 0;
}
