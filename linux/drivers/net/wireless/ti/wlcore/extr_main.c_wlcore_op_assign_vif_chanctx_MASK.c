
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int channel; int radar_enabled; int channel_type; int band; int flags; int role_id; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; scalar_t__ radar_enabled; } ;
struct TYPE_3__ {scalar_t__ dfs_state; int band; int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (struct wl1271*,struct wl12xx_vif*) ;
 struct wl12xx_vif* FUNC_12 (struct ieee80211_vif*) ;
 int FUNC_13 (struct wl1271*,struct wl12xx_vif*,int) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_hw *VAR_5,
     struct ieee80211_vif *VAR_6,
     struct ieee80211_chanctx_conf *VAR_7)
{
 struct wl1271 *VAR_8 = VAR_5->priv;
 struct wl12xx_vif *VAR_9 = FUNC_12(VAR_6);
 int VAR_10 = FUNC_1(
  VAR_7->def.chan->center_freq);
 int VAR_11 = -VAR_1;

 FUNC_10(VAR_0,
       "mac80211 assign chanctx (role %d) %d (type %d) (radar %d dfs_state %d)",
       VAR_9->role_id, VAR_10,
       FUNC_0(&VAR_7->def),
       VAR_7->radar_enabled, VAR_7->def.chan->dfs_state);

 FUNC_2(&VAR_8->mutex);

 if (FUNC_9(VAR_8->state != VAR_3))
  goto out;

 if (FUNC_9(!FUNC_8(VAR_4, &VAR_9->flags)))
  goto out;

 VAR_11 = FUNC_4(VAR_8->dev);
 if (VAR_11 < 0) {
  FUNC_7(VAR_8->dev);
  goto out;
 }

 VAR_9->band = VAR_7->def.chan->band;
 VAR_9->channel = VAR_10;
 VAR_9->channel_type = FUNC_0(&VAR_7->def);


 FUNC_11(VAR_8, VAR_9);

 if (VAR_7->radar_enabled &&
     VAR_7->def.chan->dfs_state == VAR_2) {
  FUNC_10(VAR_0, "Start radar detection");
  FUNC_13(VAR_8, VAR_9, 1);
  VAR_9->radar_enabled = 1;
 }

 FUNC_5(VAR_8->dev);
 FUNC_6(VAR_8->dev);
out:
 FUNC_3(&VAR_8->mutex);

 return 0;
}
