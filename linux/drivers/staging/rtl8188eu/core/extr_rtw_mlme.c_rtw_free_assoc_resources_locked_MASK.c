
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ssid; } ;
struct TYPE_4__ {int MacAddress; TYPE_1__ ssid; } ;
struct wlan_network {int fixed; TYPE_2__ network; } ;
struct sta_priv {int asoc_sta_count; int sta_hash_lock; } ;
struct sta_info {int dummy; } ;
struct mlme_priv {scalar_t__ key_mask; int scanned_queue; struct wlan_network cur_network; } ;
struct adapter {struct sta_priv stapriv; struct mlme_priv mlmepriv; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int) ;
 struct wlan_network* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct mlme_priv*,struct wlan_network*) ;
 int FUNC_5 (struct adapter*,struct sta_info*) ;
 struct sta_info* FUNC_6 (struct adapter*) ;
 struct sta_info* FUNC_7 (struct sta_priv*,int ) ;
 int FUNC_8 (struct adapter*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct adapter *VAR_8)
{
 struct wlan_network *VAR_9 = ((void*)0);
 struct mlme_priv *VAR_10 = &VAR_8->mlmepriv;
 struct sta_priv *VAR_11 = &VAR_8->stapriv;
 struct wlan_network *VAR_12 = &VAR_10->cur_network;

 FUNC_0(VAR_7, VAR_6, ("+rtw_free_assoc_resources\n"));
 FUNC_0(VAR_7, VAR_5,
   ("tgt_network->network.MacAddress=%pM ssid=%s\n",
   VAR_12->network.MacAddress, VAR_12->network.ssid.ssid));

 if (FUNC_1(VAR_10, VAR_3 | VAR_2)) {
  struct sta_info *VAR_13;

  VAR_13 = FUNC_7(&VAR_8->stapriv, VAR_12->network.MacAddress);

  FUNC_9(&VAR_11->sta_hash_lock);
  FUNC_5(VAR_8, VAR_13);
  FUNC_10(&VAR_11->sta_hash_lock);
 }

 if (FUNC_1(VAR_10, VAR_1 | VAR_0 | VAR_2)) {
  struct sta_info *VAR_14;

  FUNC_3(VAR_8);

  VAR_14 = FUNC_6(VAR_8);
  FUNC_9(&VAR_11->sta_hash_lock);
  FUNC_5(VAR_8, VAR_14);
  FUNC_10(&VAR_11->sta_hash_lock);

  FUNC_8(VAR_8);
 }

 VAR_9 = FUNC_2(&VAR_10->scanned_queue, VAR_12->network.MacAddress);
 if (VAR_9)
  VAR_9->fixed = 0;
 else
  FUNC_0(VAR_7, VAR_4, ("rtw_free_assoc_resources:pwlan==NULL\n\n"));

 if ((FUNC_1(VAR_10, VAR_0) && (VAR_8->stapriv.asoc_sta_count == 1)))
  FUNC_4(VAR_10, VAR_9);

 VAR_10->key_mask = 0;
}
