
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt7603_vif {int idx; } ;
struct TYPE_2__ {int mutex; int pre_tbtt_tasklet; } ;
struct mt7603_dev {int slottime; TYPE_1__ mt76; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct mt7603_dev* priv; } ;
struct ieee80211_bss_conf {int beacon_int; int enable_beacon; scalar_t__ use_short_slot; scalar_t__ bssid; scalar_t__ ibss_joined; scalar_t__ assoc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct mt7603_dev*,int ,int) ;
 int FUNC_5 (struct mt7603_dev*) ;
 int FUNC_6 (struct mt7603_dev*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct ieee80211_hw *VAR_6, struct ieee80211_vif *VAR_7,
   struct ieee80211_bss_conf *VAR_8, u32 VAR_9)
{
 struct mt7603_dev *VAR_10 = VAR_6->priv;
 struct mt7603_vif *VAR_11 = (struct mt7603_vif *)VAR_7->drv_priv;

 FUNC_7(&VAR_10->mt76.mutex);

 if (VAR_9 & (VAR_0 | VAR_3)) {
  if (VAR_8->assoc || VAR_8->ibss_joined) {
   FUNC_6(VAR_10, FUNC_0(VAR_11->idx),
    FUNC_3(VAR_8->bssid));
   FUNC_6(VAR_10, FUNC_1(VAR_11->idx),
    (FUNC_2(VAR_8->bssid + 4) |
     VAR_5));
  } else {
   FUNC_6(VAR_10, FUNC_0(VAR_11->idx), 0);
   FUNC_6(VAR_10, FUNC_1(VAR_11->idx), 0);
  }
 }

 if (VAR_9 & VAR_4) {
  int VAR_12 = VAR_8->use_short_slot ? 9 : 20;

  if (VAR_12 != VAR_10->slottime) {
   VAR_10->slottime = VAR_12;
   FUNC_5(VAR_10);
  }
 }

 if (VAR_9 & (VAR_1 | VAR_2)) {
  int VAR_13 = !!VAR_8->enable_beacon * VAR_8->beacon_int;

  FUNC_9(&VAR_10->mt76.pre_tbtt_tasklet);
  FUNC_4(VAR_10, VAR_11->idx, VAR_13);
  FUNC_10(&VAR_10->mt76.pre_tbtt_tasklet);
 }

 FUNC_8(&VAR_10->mt76.mutex);
}
