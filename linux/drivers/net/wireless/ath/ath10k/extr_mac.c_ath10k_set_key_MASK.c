
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int * bssid; } ;
struct ieee80211_vif {scalar_t__ type; int * addr; TYPE_1__ bss_conf; scalar_t__ drv_priv; } ;
struct ieee80211_sta {int * addr; scalar_t__ tdls; } ;
struct ieee80211_key_conf {scalar_t__ cipher; size_t keyidx; size_t hw_key_idx; int flags; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k_vif {scalar_t__ vdev_type; int def_wep_key_idx; int vdev_id; struct ieee80211_key_conf** wep_keys; scalar_t__ nohwcrypt; } ;
struct ath10k_peer {struct ieee80211_key_conf** keys; } ;
struct ath10k {int conf_mutex; int data_lock; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (struct ath10k_vif*,struct ieee80211_key_conf*) ;
 int FUNC_2 (struct ath10k_vif*,struct ieee80211_key_conf*,int,int const*,int ) ;
 int FUNC_3 (struct ath10k_vif*,struct ieee80211_key_conf*) ;
 struct ath10k_peer* FUNC_4 (struct ath10k*,int ,int const*) ;
 int FUNC_5 (struct ath10k*,struct ath10k_vif*,int,struct ieee80211_key_conf*) ;
 int FUNC_6 (struct ath10k*,char*,int const*,...) ;
 int FUNC_7 (struct ath10k*,int ,int *,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct ieee80211_hw *VAR_19, enum set_key_cmd VAR_20,
     struct ieee80211_vif *VAR_21, struct ieee80211_sta *VAR_22,
     struct ieee80211_key_conf *VAR_23)
{
 struct ath10k *VAR_24 = VAR_19->priv;
 struct ath10k_vif *VAR_25 = (void *)VAR_21->drv_priv;
 struct ath10k_peer *VAR_26;
 const u8 *VAR_27;
 bool VAR_28 = VAR_23->cipher == VAR_12 ||
        VAR_23->cipher == VAR_11;
 int VAR_29 = 0;
 int VAR_30;
 u32 VAR_31 = 0;
 u32 VAR_32;


 if (VAR_23->cipher == VAR_7 ||
     VAR_23->cipher == VAR_9 ||
     VAR_23->cipher == VAR_10 ||
     VAR_23->cipher == VAR_8)
  return 1;

 if (VAR_25->nohwcrypt)
  return 1;

 if (VAR_23->keyidx > VAR_16)
  return -VAR_1;

 FUNC_8(&VAR_24->conf_mutex);

 if (VAR_22)
  VAR_27 = VAR_22->addr;
 else if (VAR_25->vdev_type == VAR_18)
  VAR_27 = VAR_21->bss_conf.bssid;
 else
  VAR_27 = VAR_21->addr;

 VAR_23->hw_key_idx = VAR_23->keyidx;

 if (VAR_28) {
  if (VAR_20 == VAR_6)
   VAR_25->wep_keys[VAR_23->keyidx] = VAR_23;
  else
   VAR_25->wep_keys[VAR_23->keyidx] = ((void*)0);
 }




 FUNC_10(&VAR_24->data_lock);
 VAR_26 = FUNC_4(VAR_24, VAR_25->vdev_id, VAR_27);
 FUNC_11(&VAR_24->data_lock);

 if (!VAR_26) {
  if (VAR_20 == VAR_6) {
   FUNC_6(VAR_24, "failed to install key for non-existent peer %pM\n",
        VAR_27);
   VAR_29 = -VAR_2;
   goto exit;
  } else {

   goto exit;
  }
 }

 if (VAR_23->flags & VAR_3)
  VAR_31 |= VAR_14;
 else
  VAR_31 |= VAR_13;

 if (VAR_28) {
  if (VAR_20 == VAR_0)
   FUNC_1(VAR_25, VAR_23);





  if (VAR_21->type == VAR_4 &&
      VAR_20 == VAR_6)
   FUNC_3(VAR_25, VAR_23);







  if (VAR_20 == VAR_6 && VAR_25->def_wep_key_idx == -1)
   VAR_31 |= VAR_15;
 }

 VAR_29 = FUNC_2(VAR_25, VAR_23, VAR_20, VAR_27, VAR_31);
 if (VAR_29) {
  FUNC_0(VAR_29 > 0);
  FUNC_6(VAR_24, "failed to install key for vdev %i peer %pM: %d\n",
       &VAR_25->vdev_id, VAR_27, VAR_29);
  goto exit;
 }




 if (VAR_28 && !VAR_22 && VAR_21->type == VAR_5) {
  VAR_32 = VAR_31;
  VAR_32 &= ~VAR_13;
  VAR_32 |= VAR_14;

  VAR_29 = FUNC_2(VAR_25, VAR_23, VAR_20, VAR_27, VAR_32);
  if (VAR_29) {
   FUNC_0(VAR_29 > 0);
   FUNC_6(VAR_24, "failed to install (ucast) key for vdev %i peer %pM: %d\n",
        &VAR_25->vdev_id, VAR_27, VAR_29);
   VAR_30 = FUNC_2(VAR_25, VAR_23, VAR_0,
        VAR_27, VAR_31);
   if (VAR_30) {
    FUNC_0(VAR_30 > 0);
    FUNC_6(VAR_24, "failed to disable (mcast) key for vdev %i peer %pM: %d\n",
         &VAR_25->vdev_id, VAR_27, VAR_30);
   }
   goto exit;
  }
 }

 FUNC_5(VAR_24, VAR_25, VAR_20, VAR_23);

 FUNC_10(&VAR_24->data_lock);
 VAR_26 = FUNC_4(VAR_24, VAR_25->vdev_id, VAR_27);
 if (VAR_26 && VAR_20 == VAR_6)
  VAR_26->keys[VAR_23->keyidx] = VAR_23;
 else if (VAR_26 && VAR_20 == VAR_0)
  VAR_26->keys[VAR_23->keyidx] = ((void*)0);
 else if (VAR_26 == ((void*)0))

  FUNC_6(VAR_24, "Peer %pM disappeared!\n", VAR_27);
 FUNC_11(&VAR_24->data_lock);

 if (VAR_22 && VAR_22->tdls)
  FUNC_7(VAR_24, VAR_25->vdev_id, VAR_22->addr,
       VAR_17, 1);

exit:
 FUNC_9(&VAR_24->conf_mutex);
 return VAR_29;
}
