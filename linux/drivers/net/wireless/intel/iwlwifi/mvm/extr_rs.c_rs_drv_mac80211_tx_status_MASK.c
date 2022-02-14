
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct iwl_op_mode {int dummy; } ;
struct iwl_mvm_sta {int vif; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 struct iwl_mvm* FUNC_1 (struct iwl_op_mode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_sta*,int ,struct ieee80211_tx_info*,int ) ;
 struct iwl_mvm_sta* FUNC_5 (struct ieee80211_sta*) ;
 int FUNC_6 (struct ieee80211_hdr*) ;

__attribute__((used)) static void FUNC_7(void *VAR_1,
          struct ieee80211_supported_band *VAR_2,
          struct ieee80211_sta *VAR_3, void *VAR_4,
          struct sk_buff *VAR_5)
{
 struct ieee80211_hdr *VAR_6 = (struct ieee80211_hdr *)VAR_5->data;
 struct iwl_op_mode *VAR_7 = VAR_1;
 struct iwl_mvm *VAR_8 = FUNC_1(VAR_7);
 struct ieee80211_tx_info *VAR_9 = FUNC_0(VAR_5);
 struct iwl_mvm_sta *VAR_10 = FUNC_5(VAR_3);

 if (!VAR_10->vif)
  return;

 if (!FUNC_2(VAR_6->frame_control) ||
     VAR_9->flags & VAR_0)
  return;

 FUNC_4(VAR_8, VAR_3, FUNC_6(VAR_6), VAR_9,
        FUNC_3(VAR_6->frame_control));
}
