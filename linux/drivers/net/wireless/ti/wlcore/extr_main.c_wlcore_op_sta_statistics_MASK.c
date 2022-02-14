
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int dummy; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; } ;
struct station_info {int signal; int filled; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
typedef int s8 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,char*) ;
 struct wl12xx_vif* FUNC_9 (struct ieee80211_vif*) ;
 int FUNC_10 (struct wl1271*,struct wl12xx_vif*,int *) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_3,
         struct ieee80211_vif *VAR_4,
         struct ieee80211_sta *VAR_5,
         struct station_info *VAR_6)
{
 struct wl1271 *VAR_7 = VAR_3->priv;
 struct wl12xx_vif *VAR_8 = FUNC_9(VAR_4);
 s8 VAR_9;
 int VAR_10;

 FUNC_8(VAR_0, "mac80211 get_rssi");

 FUNC_1(&VAR_7->mutex);

 if (FUNC_7(VAR_7->state != VAR_2))
  goto out;

 VAR_10 = FUNC_3(VAR_7->dev);
 if (VAR_10 < 0) {
  FUNC_6(VAR_7->dev);
  goto out_sleep;
 }

 VAR_10 = FUNC_10(VAR_7, VAR_8, &VAR_9);
 if (VAR_10 < 0)
  goto out_sleep;

 VAR_6->filled |= FUNC_0(VAR_1);
 VAR_6->signal = VAR_9;

out_sleep:
 FUNC_4(VAR_7->dev);
 FUNC_5(VAR_7->dev);

out:
 FUNC_2(&VAR_7->mutex);
}
