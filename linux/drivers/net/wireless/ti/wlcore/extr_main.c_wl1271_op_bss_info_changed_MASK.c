
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {scalar_t__ bss_type; scalar_t__ power_level; int flags; int connection_loss_work; int role_id; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct ieee80211_bss_conf {scalar_t__ txpower; int enable_beacon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct wl1271*,struct wl12xx_vif*,scalar_t__) ;
 int FUNC_10 (struct wl1271*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_11 (struct wl1271*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_12 (int ,char*,int ,int) ;
 int FUNC_13 (struct wl1271*) ;
 struct wl12xx_vif* FUNC_14 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_15(struct ieee80211_hw *VAR_7,
           struct ieee80211_vif *VAR_8,
           struct ieee80211_bss_conf *VAR_9,
           u32 VAR_10)
{
 struct wl1271 *VAR_11 = VAR_7->priv;
 struct wl12xx_vif *VAR_12 = FUNC_14(VAR_8);
 bool VAR_13 = (VAR_12->bss_type == VAR_3);
 int VAR_14;

 FUNC_12(VAR_4, "mac80211 bss info role %d changed 0x%x",
       VAR_12->role_id, (int)VAR_10);





 if (!VAR_13 && (VAR_10 & VAR_0))
  FUNC_0(&VAR_12->connection_loss_work);

 if (VAR_13 && (VAR_10 & VAR_1) &&
     !VAR_9->enable_beacon)
  FUNC_13(VAR_11);

 FUNC_1(&VAR_11->mutex);

 if (FUNC_8(VAR_11->state != VAR_5))
  goto out;

 if (FUNC_8(!FUNC_7(VAR_6, &VAR_12->flags)))
  goto out;

 VAR_14 = FUNC_3(VAR_11->dev);
 if (VAR_14 < 0) {
  FUNC_6(VAR_11->dev);
  goto out;
 }

 if ((VAR_10 & VAR_2) &&
     VAR_9->txpower != VAR_12->power_level) {

  VAR_14 = FUNC_9(VAR_11, VAR_12, VAR_9->txpower);
  if (VAR_14 < 0)
   goto out;

  VAR_12->power_level = VAR_9->txpower;
 }

 if (VAR_13)
  FUNC_10(VAR_11, VAR_8, VAR_9, VAR_10);
 else
  FUNC_11(VAR_11, VAR_8, VAR_9, VAR_10);

 FUNC_4(VAR_11->dev);
 FUNC_5(VAR_11->dev);

out:
 FUNC_2(&VAR_11->mutex);
}
