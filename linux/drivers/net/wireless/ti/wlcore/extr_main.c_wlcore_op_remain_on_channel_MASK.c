
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int role_id; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; int roc_complete_work; struct ieee80211_vif* roc_vif; int roc_map; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct ieee80211_channel {int band; int center_freq; } ;
typedef enum ieee80211_roc_type { ____Placeholder_ieee80211_roc_type } ieee80211_roc_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*,int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ,char*,int,int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (struct wl1271*,struct wl12xx_vif*,int ,int) ;
 struct wl12xx_vif* FUNC_14 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_15(struct ieee80211_hw *VAR_4,
           struct ieee80211_vif *VAR_5,
           struct ieee80211_channel *VAR_6,
           int VAR_7,
           enum ieee80211_roc_type VAR_8)
{
 struct wl12xx_vif *VAR_9 = FUNC_14(VAR_5);
 struct wl1271 *VAR_10 = VAR_4->priv;
 int VAR_11, VAR_12, VAR_13 = 0;

 VAR_11 = FUNC_1(VAR_6->center_freq);

 FUNC_11(VAR_0, "mac80211 roc %d (%d)",
       VAR_11, VAR_9->role_id);

 FUNC_4(&VAR_10->mutex);

 if (FUNC_10(VAR_10->state != VAR_3))
  goto out;


 VAR_12 = FUNC_0(VAR_10->roc_map, VAR_2);
 if (VAR_10->roc_vif || VAR_12 < VAR_2) {
  FUNC_12("active roc on role %d", VAR_12);
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_13 = FUNC_6(VAR_10->dev);
 if (VAR_13 < 0) {
  FUNC_9(VAR_10->dev);
  goto out;
 }

 VAR_13 = FUNC_13(VAR_10, VAR_9, VAR_6->band, VAR_11);
 if (VAR_13 < 0)
  goto out_sleep;

 VAR_10->roc_vif = VAR_5;
 FUNC_2(VAR_4, &VAR_10->roc_complete_work,
         FUNC_3(VAR_7));
out_sleep:
 FUNC_7(VAR_10->dev);
 FUNC_8(VAR_10->dev);
out:
 FUNC_5(&VAR_10->mutex);
 return VAR_13;
}
