
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int radar_enabled; int flags; int role_id; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; } ;
struct TYPE_3__ {int center_freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
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
 int FUNC_11 (struct wl1271*) ;
 struct wl12xx_vif* FUNC_12 (struct ieee80211_vif*) ;
 int FUNC_13 (struct wl1271*,struct wl12xx_vif*,int) ;

__attribute__((used)) static void FUNC_14(struct ieee80211_hw *VAR_3,
        struct ieee80211_vif *VAR_4,
        struct ieee80211_chanctx_conf *VAR_5)
{
 struct wl1271 *VAR_6 = VAR_3->priv;
 struct wl12xx_vif *VAR_7 = FUNC_12(VAR_4);
 int VAR_8;

 FUNC_10(VAR_0,
       "mac80211 unassign chanctx (role %d) %d (type %d)",
       VAR_7->role_id,
       FUNC_1(VAR_5->def.chan->center_freq),
       FUNC_0(&VAR_5->def));

 FUNC_11(VAR_6);

 FUNC_2(&VAR_6->mutex);

 if (FUNC_9(VAR_6->state != VAR_1))
  goto out;

 if (FUNC_9(!FUNC_8(VAR_2, &VAR_7->flags)))
  goto out;

 VAR_8 = FUNC_4(VAR_6->dev);
 if (VAR_8 < 0) {
  FUNC_7(VAR_6->dev);
  goto out;
 }

 if (VAR_7->radar_enabled) {
  FUNC_10(VAR_0, "Stop radar detection");
  FUNC_13(VAR_6, VAR_7, 0);
  VAR_7->radar_enabled = 0;
 }

 FUNC_5(VAR_6->dev);
 FUNC_6(VAR_6->dev);
out:
 FUNC_3(&VAR_6->mutex);
}
