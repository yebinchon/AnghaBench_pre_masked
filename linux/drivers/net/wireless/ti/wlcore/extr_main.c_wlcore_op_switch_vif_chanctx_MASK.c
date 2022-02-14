
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int dummy; } ;
struct wl1271 {int mutex; int dev; } ;
struct ieee80211_vif_chanctx_switch {int new_ctx; int vif; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
typedef enum ieee80211_chanctx_switch_mode { ____Placeholder_ieee80211_chanctx_switch_mode } ieee80211_chanctx_switch_mode ;


 int VAR_0 ;
 int FUNC_0 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,int) ;
 struct wl12xx_vif* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct ieee80211_hw *VAR_1,
        struct ieee80211_vif_chanctx_switch *VAR_2,
        int VAR_3,
        enum ieee80211_chanctx_switch_mode VAR_4)
{
 struct wl1271 *VAR_5 = VAR_1->priv;
 int VAR_6, VAR_7;

 FUNC_7(VAR_0,
       "mac80211 switch chanctx n_vifs %d mode %d",
       VAR_3, VAR_4);

 FUNC_1(&VAR_5->mutex);

 VAR_7 = FUNC_3(VAR_5->dev);
 if (VAR_7 < 0) {
  FUNC_6(VAR_5->dev);
  goto out;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  struct wl12xx_vif *VAR_8 = FUNC_8(VAR_2[VAR_6].vif);

  VAR_7 = FUNC_0(VAR_5, VAR_8, VAR_2[VAR_6].new_ctx);
  if (VAR_7)
   goto out_sleep;
 }
out_sleep:
 FUNC_4(VAR_5->dev);
 FUNC_5(VAR_5->dev);
out:
 FUNC_2(&VAR_5->mutex);

 return 0;
}
