
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_sta {int uapsd_queues; scalar_t__ max_sp; int addr; scalar_t__ wme; } ;
struct ath10k_vif {int vdev_id; } ;
struct ath10k {int conf_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ath10k*,int ,char*,int,scalar_t__) ;
 int FUNC_1 (struct ath10k*,char*,int ,int) ;
 int FUNC_2 (struct ath10k*,int ,int ,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_17,
        struct ath10k_vif *VAR_18,
        struct ieee80211_sta *VAR_19)
{
 u32 VAR_20 = 0;
 u32 VAR_21 = 0;
 int VAR_22 = 0;

 FUNC_3(&VAR_17->conf_mutex);

 if (VAR_19->wme && VAR_19->uapsd_queues) {
  FUNC_0(VAR_17, VAR_0, "mac uapsd_queues 0x%x max_sp %d\n",
      VAR_19->uapsd_queues, VAR_19->max_sp);

  if (VAR_19->uapsd_queues & VAR_4)
   VAR_20 |= VAR_15 |
     VAR_16;
  if (VAR_19->uapsd_queues & VAR_3)
   VAR_20 |= VAR_13 |
     VAR_14;
  if (VAR_19->uapsd_queues & VAR_2)
   VAR_20 |= VAR_11 |
     VAR_12;
  if (VAR_19->uapsd_queues & VAR_1)
   VAR_20 |= VAR_9 |
     VAR_10;

  if (VAR_19->max_sp < VAR_5)
   VAR_21 = VAR_19->max_sp;

  VAR_22 = FUNC_2(VAR_17, VAR_18->vdev_id,
       VAR_19->addr,
       VAR_8,
       VAR_20);
  if (VAR_22) {
   FUNC_1(VAR_17, "failed to set ap ps peer param uapsd for vdev %i: %d\n",
        VAR_18->vdev_id, VAR_22);
   return VAR_22;
  }

  VAR_22 = FUNC_2(VAR_17, VAR_18->vdev_id,
       VAR_19->addr,
       VAR_7,
       VAR_21);
  if (VAR_22) {
   FUNC_1(VAR_17, "failed to set ap ps peer param max sp for vdev %i: %d\n",
        VAR_18->vdev_id, VAR_22);
   return VAR_22;
  }






  VAR_22 = FUNC_2(VAR_17, VAR_18->vdev_id, VAR_19->addr,
       VAR_6,
       10);
  if (VAR_22) {
   FUNC_1(VAR_17, "failed to set ap ps peer param ageout time for vdev %i: %d\n",
        VAR_18->vdev_id, VAR_22);
   return VAR_22;
  }
 }

 return 0;
}
