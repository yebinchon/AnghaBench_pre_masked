
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int type; int p2p; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_2 (char*,int,int,int,int) ;

int FUNC_3(struct ieee80211_hw *VAR_0,
       struct ieee80211_vif *VAR_1,
       enum nl80211_iftype VAR_2,
       bool VAR_3)
{
 int VAR_4 = 0;
 FUNC_2("change_interface new: %d (%d), old: %d (%d)\n", VAR_2,
   VAR_3, VAR_1->type, VAR_1->p2p);

 if (VAR_2 != VAR_1->type || VAR_1->p2p != VAR_3) {
  FUNC_1(VAR_0, VAR_1);
  VAR_1->type = VAR_2;
  VAR_1->p2p = VAR_3;
  VAR_4 = FUNC_0(VAR_0, VAR_1);
 }

 return VAR_4;
}
