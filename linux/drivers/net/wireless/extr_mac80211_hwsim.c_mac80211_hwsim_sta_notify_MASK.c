
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum sta_notify_cmd { ____Placeholder_sta_notify_cmd } sta_notify_cmd ;




 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0,
          struct ieee80211_vif *VAR_1,
          enum sta_notify_cmd VAR_2,
          struct ieee80211_sta *VAR_3)
{
 FUNC_1(VAR_1);

 switch (VAR_2) {
 case 128:
 case 129:

  break;
 default:
  FUNC_0(1, "Invalid sta notify: %d\n", VAR_2);
  break;
 }
}
