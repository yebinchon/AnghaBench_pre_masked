
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hlid; } ;
struct wl12xx_vif {int default_key; scalar_t__ encryption_type; TYPE_1__ sta; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (struct wl1271*,int,int ) ;
 struct wl12xx_vif* FUNC_9 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_4,
       struct ieee80211_vif *VAR_5,
       int VAR_6)
{
 struct wl1271 *VAR_7 = VAR_4->priv;
 struct wl12xx_vif *VAR_8 = FUNC_9(VAR_5);
 int VAR_9;

 FUNC_7(VAR_0, "mac80211 set default key idx %d",
       VAR_6);


 if (VAR_6 == -1)
  return;

 FUNC_0(&VAR_7->mutex);

 if (FUNC_6(VAR_7->state != VAR_3)) {
  VAR_9 = -VAR_1;
  goto out_unlock;
 }

 VAR_9 = FUNC_2(VAR_7->dev);
 if (VAR_9 < 0) {
  FUNC_5(VAR_7->dev);
  goto out_unlock;
 }

 VAR_8->default_key = VAR_6;


 if (VAR_8->encryption_type == VAR_2) {
  VAR_9 = FUNC_8(VAR_7,
    VAR_6,
    VAR_8->sta.hlid);
  if (VAR_9 < 0)
   goto out_sleep;
 }

out_sleep:
 FUNC_3(VAR_7->dev);
 FUNC_4(VAR_7->dev);

out_unlock:
 FUNC_1(&VAR_7->mutex);
}
