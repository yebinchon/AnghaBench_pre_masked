
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_vif {int dummy; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; TYPE_1__* ops; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct TYPE_2__ {int (* sched_scan_stop ) (struct wl1271*,struct wl12xx_vif*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct wl1271*,struct wl12xx_vif*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,char*) ;
 struct wl12xx_vif* FUNC_9 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_2,
         struct ieee80211_vif *VAR_3)
{
 struct wl1271 *VAR_4 = VAR_2->priv;
 struct wl12xx_vif *VAR_5 = FUNC_9(VAR_3);
 int VAR_6;

 FUNC_8(VAR_0, "wl1271_op_sched_scan_stop");

 FUNC_0(&VAR_4->mutex);

 if (FUNC_7(VAR_4->state != VAR_1))
  goto out;

 VAR_6 = FUNC_2(VAR_4->dev);
 if (VAR_6 < 0) {
  FUNC_5(VAR_4->dev);
  goto out;
 }

 VAR_4->ops->sched_scan_stop(VAR_4, VAR_5);

 FUNC_3(VAR_4->dev);
 FUNC_4(VAR_4->dev);
out:
 FUNC_1(&VAR_4->mutex);

 return 0;
}
