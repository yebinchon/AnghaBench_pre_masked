
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_vif {int channel_switch_work; int beacon_int; int flags; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; TYPE_1__* ops; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct ieee80211_channel_switch {unsigned long count; } ;
struct TYPE_2__ {int (* channel_switch ) (struct wl1271*,struct wl12xx_vif*,struct ieee80211_channel_switch*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_vif*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int *,scalar_t__) ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_channel_switch*) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (unsigned long) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (struct wl1271*) ;
 struct wl12xx_vif* FUNC_17 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_18(struct ieee80211_hw *VAR_5,
         struct ieee80211_vif *VAR_6,
         struct ieee80211_channel_switch *VAR_7)
{
 struct wl1271 *VAR_8 = VAR_5->priv;
 struct wl12xx_vif *VAR_9 = FUNC_17(VAR_6);
 int VAR_10;

 FUNC_15(VAR_0, "mac80211 channel switch");

 FUNC_16(VAR_8);

 FUNC_4(&VAR_8->mutex);

 if (FUNC_13(VAR_8->state == VAR_1)) {
  if (FUNC_12(VAR_4, &VAR_9->flags))
   FUNC_0(VAR_6, 0);
  goto out;
 } else if (FUNC_13(VAR_8->state != VAR_2)) {
  goto out;
 }

 VAR_10 = FUNC_6(VAR_8->dev);
 if (VAR_10 < 0) {
  FUNC_9(VAR_8->dev);
  goto out;
 }



 if (FUNC_12(VAR_4, &VAR_9->flags)) {
  unsigned long VAR_11;

  VAR_10 = VAR_8->ops->channel_switch(VAR_8, VAR_9, VAR_7);
  if (VAR_10)
   goto out_sleep;

  FUNC_10(VAR_3, &VAR_9->flags);


  VAR_11 = FUNC_2(VAR_9->beacon_int) *
   VAR_7->count;
  FUNC_1(VAR_5, &VAR_9->channel_switch_work,
          FUNC_14(VAR_11) +
          FUNC_3(5000));
 }

out_sleep:
 FUNC_7(VAR_8->dev);
 FUNC_8(VAR_8->dev);

out:
 FUNC_5(&VAR_8->mutex);
}
