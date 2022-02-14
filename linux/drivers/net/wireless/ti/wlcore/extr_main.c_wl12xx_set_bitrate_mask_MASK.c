
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_vif {scalar_t__ bss_type; int basic_rate_set; int basic_rate; int flags; int * bitrate_masks; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct cfg80211_bitrate_mask {TYPE_1__* control; } ;
struct TYPE_2__ {int legacy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_9 (int ,char*,int ,int ) ;
 int FUNC_10 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_11 (struct wl1271*,int ,int) ;
 int FUNC_12 (struct wl1271*,int ) ;
 struct wl12xx_vif* FUNC_13 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_hw *VAR_7,
       struct ieee80211_vif *VAR_8,
       const struct cfg80211_bitrate_mask *VAR_9)
{
 struct wl12xx_vif *VAR_10 = FUNC_13(VAR_8);
 struct wl1271 *VAR_11 = VAR_7->priv;
 int VAR_12, VAR_13 = 0;

 FUNC_9(VAR_1, "mac80211 set_bitrate_mask 0x%x 0x%x",
  VAR_9->control[VAR_2].legacy,
  VAR_9->control[VAR_3].legacy);

 FUNC_0(&VAR_11->mutex);

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
  VAR_10->bitrate_masks[VAR_12] =
   FUNC_11(VAR_11,
          VAR_9->control[VAR_12].legacy,
          VAR_12);

 if (FUNC_7(VAR_11->state != VAR_5))
  goto out;

 if (VAR_10->bss_type == VAR_0 &&
     !FUNC_6(VAR_6, &VAR_10->flags)) {

  VAR_13 = FUNC_2(VAR_11->dev);
  if (VAR_13 < 0) {
   FUNC_5(VAR_11->dev);
   goto out;
  }

  FUNC_10(VAR_11, VAR_10);
  VAR_10->basic_rate =
   FUNC_12(VAR_11, VAR_10->basic_rate_set);
  VAR_13 = FUNC_8(VAR_11, VAR_10);

  FUNC_3(VAR_11->dev);
  FUNC_4(VAR_11->dev);
 }
out:
 FUNC_1(&VAR_11->mutex);

 return VAR_13;
}
