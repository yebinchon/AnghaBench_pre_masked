
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_sta_vht_cap {int cap; } ;
struct ath10k_vif {int vdev_id; } ;
struct TYPE_4__ {TYPE_1__* vdev_param; } ;
struct ath10k {int vht_cap_info; TYPE_2__ wmi; } ;
struct TYPE_3__ {scalar_t__ txbf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct ath10k*,char*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_10,
          struct ieee80211_vif *VAR_11,
          struct ieee80211_sta_vht_cap VAR_12)
{
 struct ath10k_vif *VAR_13 = (void *)VAR_11->drv_priv;
 int VAR_14;
 u32 VAR_15;
 u32 VAR_16;

 if (FUNC_2(VAR_10) != VAR_4)
  return 0;

 if (!(VAR_10->vht_cap_info &
       (VAR_2 |
        VAR_0 |
        VAR_3 |
        VAR_1)))
  return 0;

 VAR_15 = VAR_10->wmi.vdev_param->txbf;
 VAR_16 = 0;

 if (FUNC_0(VAR_15 == VAR_9))
  return 0;





 if (VAR_10->vht_cap_info &
     (VAR_2 |
      VAR_0)) {
  if (VAR_12.cap & VAR_3)
   VAR_16 |= VAR_7;

  if (VAR_12.cap & VAR_1)
   VAR_16 |= VAR_5;
 }

 if (VAR_10->vht_cap_info &
     (VAR_3 |
      VAR_1)) {
  if (VAR_12.cap & VAR_2)
   VAR_16 |= VAR_8;

  if (VAR_12.cap & VAR_0)
   VAR_16 |= VAR_6;
 }

 if (VAR_16 & VAR_5)
  VAR_16 |= VAR_7;

 if (VAR_16 & VAR_6)
  VAR_16 |= VAR_8;

 VAR_14 = FUNC_3(VAR_10, VAR_13->vdev_id, VAR_15, VAR_16);
 if (VAR_14) {
  FUNC_1(VAR_10, "failed to submit vdev param txbf 0x%x: %d\n",
       VAR_16, VAR_14);
  return VAR_14;
 }

 return 0;
}
