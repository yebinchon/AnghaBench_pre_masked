
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int roc_complete_work; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wl1271*) ;
 int FUNC_3 (struct wl1271*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_1,
           struct ieee80211_vif *VAR_2)
{
 struct wl1271 *VAR_3 = VAR_1->priv;

 FUNC_1(VAR_0, "mac80211 croc");


 FUNC_2(VAR_3);





 FUNC_0(&VAR_3->roc_complete_work);
 FUNC_3(VAR_3);

 return 0;
}
