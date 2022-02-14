
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wl12xx_vif {scalar_t__ bss_type; int flags; int list; int dev_role_id; int role_id; struct wl1271* wl; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; int sta_count; int ap_count; int wlvif_list; int recovery_work; int flags; TYPE_1__* addresses; scalar_t__ plt; } ;
struct vif_counter_data {int dummy; } ;
struct ieee80211_vif {int driver_flags; int addr; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct TYPE_2__ {int addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct ieee80211_vif*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,char*,int ,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct wl1271*,struct ieee80211_vif*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_16 (struct wl1271*,int ,scalar_t__,int *) ;
 int FUNC_17 (struct wl1271*) ;
 scalar_t__ FUNC_18 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_19 (struct ieee80211_hw*,struct ieee80211_vif*,struct vif_counter_data*) ;
 int FUNC_20 (struct wl1271*) ;
 int FUNC_21 (struct wl1271*,struct ieee80211_vif*) ;
 scalar_t__ FUNC_22 (struct wl1271*,struct vif_counter_data,int) ;
 struct wl12xx_vif* FUNC_23 (struct ieee80211_vif*) ;
 int FUNC_24 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_25 (struct wl12xx_vif*) ;

__attribute__((used)) static int FUNC_26(struct ieee80211_hw *VAR_14,
       struct ieee80211_vif *VAR_15)
{
 struct wl1271 *VAR_16 = VAR_14->priv;
 struct wl12xx_vif *VAR_17 = FUNC_23(VAR_15);
 struct vif_counter_data VAR_18;
 int VAR_19 = 0;
 u8 VAR_20;

 if (VAR_16->plt) {
  FUNC_12("Adding Interface not allowed while in PLT mode");
  return -VAR_2;
 }

 VAR_15->driver_flags |= VAR_5 |
        VAR_7 |
        VAR_6;

 FUNC_11(VAR_1, "mac80211 add interface type %d mac %pM",
       FUNC_0(VAR_15), VAR_15->addr);

 FUNC_19(VAR_14, VAR_15, &VAR_18);

 FUNC_3(&VAR_16->mutex);






 if (FUNC_10(VAR_9, &VAR_16->flags) ||
     FUNC_10(VAR_13, &VAR_17->flags)) {
  VAR_19 = -VAR_2;
  goto out;
 }


 VAR_19 = FUNC_21(VAR_16, VAR_15);
 if (VAR_19 < 0)
  goto out;

 VAR_17->wl = VAR_16;
 VAR_20 = FUNC_18(VAR_16, VAR_17);
 if (VAR_20 == VAR_11) {
  VAR_19 = -VAR_3;
  goto out;
 }

 VAR_19 = FUNC_24(VAR_16, VAR_17);
 if (VAR_19 < 0)
  goto out;





 if (VAR_16->state == VAR_12) {




  FUNC_2(VAR_16->addresses[0].addr, VAR_15->addr, VAR_4);

  VAR_19 = FUNC_20(VAR_16);
  if (VAR_19 < 0)
   goto out;
 }





 VAR_19 = FUNC_5(VAR_16->dev);
 if (VAR_19 < 0) {
  FUNC_8(VAR_16->dev);
  goto out_unlock;
 }

 if (FUNC_22(VAR_16, VAR_18, 1)) {
  FUNC_17(VAR_16);
  FUNC_9(VAR_8, &VAR_16->flags);
  FUNC_4(&VAR_16->mutex);
  FUNC_14(&VAR_16->recovery_work);
  return 0;
 }

 if (!FUNC_25(VAR_17)) {
  VAR_19 = FUNC_16(VAR_16, VAR_15->addr,
          VAR_20, &VAR_17->role_id);
  if (VAR_19 < 0)
   goto out;

  VAR_19 = FUNC_13(VAR_16, VAR_15);
  if (VAR_19 < 0)
   goto out;

 } else {
  VAR_19 = FUNC_16(VAR_16, VAR_15->addr, VAR_10,
          &VAR_17->dev_role_id);
  if (VAR_19 < 0)
   goto out;


  VAR_19 = FUNC_15(VAR_16, VAR_17);
  if (VAR_19 < 0)
   goto out;
 }

 FUNC_1(&VAR_17->list, &VAR_16->wlvif_list);
 FUNC_9(VAR_13, &VAR_17->flags);

 if (VAR_17->bss_type == VAR_0)
  VAR_16->ap_count++;
 else
  VAR_16->sta_count++;
out:
 FUNC_6(VAR_16->dev);
 FUNC_7(VAR_16->dev);
out_unlock:
 FUNC_4(&VAR_16->mutex);

 return VAR_19;
}
