
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum ieee80211_frame_release_type { ____Placeholder_ieee80211_frame_release_type } ieee80211_frame_release_type ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_sta*,int,int,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_hw *VAR_0,
      struct ieee80211_sta *VAR_1, u16 VAR_2,
      int VAR_3,
      enum ieee80211_frame_release_type VAR_4,
      bool VAR_5)
{
 struct iwl_mvm *VAR_6 = FUNC_0(VAR_0);



 FUNC_1(VAR_6, VAR_1, VAR_4, VAR_3,
       VAR_2, VAR_5, 0);
}
