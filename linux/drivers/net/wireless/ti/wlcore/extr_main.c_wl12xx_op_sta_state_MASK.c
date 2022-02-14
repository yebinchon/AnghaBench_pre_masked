
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int dummy; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int aid; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
typedef enum ieee80211_sta_state { ____Placeholder_ieee80211_sta_state } ieee80211_sta_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ,int,int) ;
 int FUNC_8 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_sta*,int,int) ;
 struct wl12xx_vif* FUNC_9 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_3,
          struct ieee80211_vif *VAR_4,
          struct ieee80211_sta *VAR_5,
          enum ieee80211_sta_state VAR_6,
          enum ieee80211_sta_state VAR_7)
{
 struct wl1271 *VAR_8 = VAR_3->priv;
 struct wl12xx_vif *VAR_9 = FUNC_9(VAR_4);
 int VAR_10;

 FUNC_7(VAR_0, "mac80211 sta %d state=%d->%d",
       VAR_5->aid, VAR_6, VAR_7);

 FUNC_0(&VAR_8->mutex);

 if (FUNC_6(VAR_8->state != VAR_2)) {
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_2(VAR_8->dev);
 if (VAR_10 < 0) {
  FUNC_5(VAR_8->dev);
  goto out;
 }

 VAR_10 = FUNC_8(VAR_8, VAR_9, VAR_5, VAR_6, VAR_7);

 FUNC_3(VAR_8->dev);
 FUNC_4(VAR_8->dev);
out:
 FUNC_1(&VAR_8->mutex);
 if (VAR_7 < VAR_6)
  return 0;
 return VAR_10;
}
