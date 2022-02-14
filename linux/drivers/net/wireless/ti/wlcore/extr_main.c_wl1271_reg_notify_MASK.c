
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int dfs_region; } ;
struct wiphy {int dummy; } ;
struct regulatory_request {int dfs_region; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 struct ieee80211_hw* FUNC_0 (struct wiphy*) ;
 int FUNC_1 (struct wl1271*) ;

__attribute__((used)) static void FUNC_2(struct wiphy *VAR_0,
         struct regulatory_request *VAR_1)
{
 struct ieee80211_hw *VAR_2 = FUNC_0(VAR_0);
 struct wl1271 *VAR_3 = VAR_2->priv;


 if (VAR_1)
  VAR_3->dfs_region = VAR_1->dfs_region;

 FUNC_1(VAR_3);
}
