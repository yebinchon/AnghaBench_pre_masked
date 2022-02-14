
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ power; } ;
struct ieee80211_sta {int addr; TYPE_1__ txpwr; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k_vif {int vdev_id; } ;
struct ath10k {int conf_mutex; } ;
typedef scalar_t__ s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath10k*,char*,int) ;
 int FUNC_1 (struct ath10k*,int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_5,
    struct ieee80211_vif *VAR_6,
    struct ieee80211_sta *VAR_7)
{
 struct ath10k *VAR_8 = VAR_5->priv;
 struct ath10k_vif *VAR_9 = (void *)VAR_6->drv_priv;
 int VAR_10 = 0;
 s16 VAR_11;

 if (VAR_7->txpwr.type == VAR_3) {
  VAR_11 = 0;
 } else {
  VAR_11 = VAR_7->txpwr.power;
  if (!VAR_11)
   return -VAR_2;
 }

 if (VAR_11 > VAR_0 || VAR_11 < VAR_1)
  return -VAR_2;

 FUNC_2(&VAR_8->conf_mutex);

 VAR_10 = FUNC_1(VAR_8, VAR_9->vdev_id, VAR_7->addr,
     VAR_4, VAR_11);
 if (VAR_10) {
  FUNC_0(VAR_8, "failed to set tx power for station ret: %d\n",
       VAR_10);
  goto out;
 }

out:
 FUNC_3(&VAR_8->conf_mutex);
 return VAR_10;
}
