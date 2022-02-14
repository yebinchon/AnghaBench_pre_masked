
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_sta {int addr; int bandwidth; int smps_mode; int rx_nss; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k_vif {int vdev_id; } ;
struct ath10k_sta {int bw; int smps; int changed; int update_wk; int nss; } ;
struct ath10k_peer {int dummy; } ;
struct ath10k {int data_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ath10k*,int ,char*,int,int,int,int ,int) ;
 struct ath10k_peer* FUNC_1 (struct ath10k*,int,int) ;
 int FUNC_2 (struct ath10k*,char*,int,int) ;
 int FUNC_3 (struct ieee80211_hw*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_11,
     struct ieee80211_vif *VAR_12,
     struct ieee80211_sta *VAR_13,
     u32 VAR_14)
{
 struct ath10k *VAR_15 = VAR_11->priv;
 struct ath10k_sta *VAR_16 = (struct ath10k_sta *)VAR_13->drv_priv;
 struct ath10k_vif *VAR_17 = (void *)VAR_12->drv_priv;
 struct ath10k_peer *VAR_18;
 u32 VAR_19, VAR_20;

 FUNC_4(&VAR_15->data_lock);

 VAR_18 = FUNC_1(VAR_15, VAR_17->vdev_id, VAR_13->addr);
 if (!VAR_18) {
  FUNC_5(&VAR_15->data_lock);
  FUNC_2(VAR_15, "mac sta rc update failed to find peer %pM on vdev %i\n",
       VAR_13->addr, VAR_17->vdev_id);
  return;
 }

 FUNC_0(VAR_15, VAR_0,
     "mac sta rc update for %pM changed %08x bw %d nss %d smps %d\n",
     VAR_13->addr, VAR_14, VAR_13->bandwidth, VAR_13->rx_nss,
     VAR_13->smps_mode);

 if (VAR_14 & VAR_1) {
  VAR_19 = VAR_5;

  switch (VAR_13->bandwidth) {
  case 130:
   VAR_19 = VAR_5;
   break;
  case 129:
   VAR_19 = VAR_6;
   break;
  case 128:
   VAR_19 = VAR_7;
   break;
  case 131:
   VAR_19 = VAR_4;
   break;
  default:
   FUNC_2(VAR_15, "Invalid bandwidth %d in rc update for %pM\n",
        VAR_13->bandwidth, VAR_13->addr);
   VAR_19 = VAR_5;
   break;
  }

  VAR_16->bw = VAR_19;
 }

 if (VAR_14 & VAR_2)
  VAR_16->nss = VAR_13->rx_nss;

 if (VAR_14 & VAR_3) {
  VAR_20 = VAR_9;

  switch (VAR_13->smps_mode) {
  case 136:
  case 133:
   VAR_20 = VAR_9;
   break;
  case 132:
   VAR_20 = VAR_10;
   break;
  case 135:
   VAR_20 = VAR_8;
   break;
  case 134:
   FUNC_2(VAR_15, "Invalid smps %d in sta rc update for %pM\n",
        VAR_13->smps_mode, VAR_13->addr);
   VAR_20 = VAR_9;
   break;
  }

  VAR_16->smps = VAR_20;
 }

 VAR_16->changed |= VAR_14;

 FUNC_5(&VAR_15->data_lock);

 FUNC_3(VAR_11, &VAR_16->update_wk);
}
