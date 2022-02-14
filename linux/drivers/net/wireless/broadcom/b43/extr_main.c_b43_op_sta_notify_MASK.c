
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct b43_wl {struct ieee80211_vif* vif; } ;
typedef enum sta_notify_cmd { ____Placeholder_sta_notify_cmd } sta_notify_cmd ;


 int FUNC_0 (int) ;
 struct b43_wl* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1,
         enum sta_notify_cmd VAR_2,
         struct ieee80211_sta *VAR_3)
{
 struct b43_wl *VAR_4 = FUNC_1(VAR_0);

 FUNC_0(!VAR_1 || VAR_4->vif != VAR_1);
}
