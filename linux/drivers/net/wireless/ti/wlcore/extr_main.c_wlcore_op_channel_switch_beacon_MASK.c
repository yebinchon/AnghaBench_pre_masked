
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_vif {int flags; int role_id; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; TYPE_1__* ops; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct cfg80211_chan_def {int dummy; } ;
struct ieee80211_channel_switch {int block_tx; int count; struct cfg80211_chan_def chandef; } ;
struct TYPE_2__ {int (* channel_switch ) (struct wl1271*,struct wl12xx_vif*,struct ieee80211_channel_switch*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_channel_switch*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (char*) ;
 struct wl12xx_vif* FUNC_11 (struct ieee80211_vif*) ;
 int FUNC_12 (struct wl1271*,struct wl12xx_vif*,int *) ;

__attribute__((used)) static void FUNC_13(struct ieee80211_hw *VAR_4,
         struct ieee80211_vif *VAR_5,
         struct cfg80211_chan_def *VAR_6)
{
 struct wl1271 *VAR_7 = VAR_4->priv;
 struct wl12xx_vif *VAR_8 = FUNC_11(VAR_5);
 struct ieee80211_channel_switch VAR_9 = {
  .block_tx = 1,
  .chandef = *VAR_6,
 };
 int VAR_10;

 FUNC_9(VAR_0,
       "mac80211 channel switch beacon (role %d)",
       VAR_8->role_id);

 VAR_10 = FUNC_12(VAR_7, VAR_8, &VAR_9.count);
 if (VAR_10 < 0) {
  FUNC_10("error getting beacon (for CSA counter)");
  return;
 }

 FUNC_0(&VAR_7->mutex);

 if (FUNC_8(VAR_7->state != VAR_2)) {
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_2(VAR_7->dev);
 if (VAR_10 < 0) {
  FUNC_5(VAR_7->dev);
  goto out;
 }

 VAR_10 = VAR_7->ops->channel_switch(VAR_7, VAR_8, &VAR_9);
 if (VAR_10)
  goto out_sleep;

 FUNC_6(VAR_3, &VAR_8->flags);

out_sleep:
 FUNC_3(VAR_7->dev);
 FUNC_4(VAR_7->dev);
out:
 FUNC_1(&VAR_7->mutex);
}
