
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int Length; int MacAddress; } ;
struct wlan_network {int join_res; int fixed; TYPE_3__ network; } ;
struct wlan_bssid_ex {int dummy; } ;
struct sta_priv {int sta_hash_lock; } ;
struct sta_info {int dummy; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {scalar_t__ ssid_length; int ssid; } ;
struct mlme_priv {int lock; int assoc_timer; TYPE_2__ scanned_queue; TYPE_1__ assoc_ssid; struct wlan_network cur_network; } ;
struct adapter {struct mlme_priv mlmepriv; struct sta_priv stapriv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlme_priv*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct mlme_priv*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlme_priv*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 struct wlan_network* FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (struct adapter*,struct sta_info*) ;
 int FUNC_11 (struct adapter*) ;
 struct sta_info* FUNC_12 (struct sta_priv*,int ) ;
 int FUNC_13 (struct adapter*) ;
 int FUNC_14 (struct adapter*,struct wlan_network*,struct wlan_network*) ;
 struct sta_info* FUNC_15 (struct adapter*,struct wlan_network*) ;
 int FUNC_16 (struct adapter*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

void FUNC_19(struct adapter *VAR_8, u8 *VAR_9)
{
 struct sta_info *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 struct sta_priv *VAR_12 = &VAR_8->stapriv;
 struct mlme_priv *VAR_13 = &VAR_8->mlmepriv;
 struct wlan_network *VAR_14 = (struct wlan_network *)VAR_9;
 struct wlan_network *VAR_15 = &VAR_13->cur_network;
 struct wlan_network *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 unsigned int VAR_18 = 0;

 FUNC_0(VAR_6, VAR_5, ("joinbss event call back received with res=%d\n", VAR_14->join_res));

 FUNC_11(VAR_8);

 if (VAR_13->assoc_ssid.ssid_length == 0)
  FUNC_0(VAR_6, VAR_4, ("@@@@@   joinbss event call back  for Any SSid\n"));
 else
  FUNC_0(VAR_6, VAR_4, ("@@@@@   rtw_joinbss_event_callback for SSid:%s\n", VAR_13->assoc_ssid.ssid));

 VAR_18 = !FUNC_6(VAR_14->network.MacAddress, VAR_15->network.MacAddress, VAR_0);

 VAR_14->network.Length = FUNC_5(&VAR_14->network);
 if (VAR_14->network.Length > sizeof(struct wlan_bssid_ex)) {
  FUNC_0(VAR_6, VAR_4, ("\n\n ***joinbss_evt_callback return a wrong bss ***\n\n"));
  return;
 }

 FUNC_17(&VAR_13->lock);

 FUNC_0(VAR_6, VAR_5, ("\nrtw_joinbss_event_callback!! _enter_critical\n"));

 if (VAR_14->join_res > 0) {
  FUNC_17(&VAR_13->scanned_queue.lock);
  if (FUNC_2(VAR_13, VAR_3)) {

   if (FUNC_2(VAR_13, VAR_2)) {
    if (VAR_18) {
     VAR_17 = FUNC_9(&VAR_13->scanned_queue, VAR_15->network.MacAddress);
    } else {
     VAR_16 = FUNC_9(&VAR_13->scanned_queue, VAR_15->network.MacAddress);
     if (VAR_16)
      VAR_16->fixed = 0;

     VAR_11 = FUNC_12(VAR_12, VAR_15->network.MacAddress);
     if (VAR_11) {
      FUNC_17(&VAR_12->sta_hash_lock);
      FUNC_10(VAR_8, VAR_11);
      FUNC_18(&VAR_12->sta_hash_lock);
     }

     VAR_17 = FUNC_9(&VAR_13->scanned_queue, VAR_14->network.MacAddress);
     if (FUNC_2(VAR_13, VAR_1)) {
      if (VAR_17)
       VAR_17->fixed = 1;
     }
    }
   } else {
    VAR_17 = FUNC_9(&VAR_13->scanned_queue, VAR_14->network.MacAddress);
    if (FUNC_2(VAR_13, VAR_1)) {
     if (VAR_17)
      VAR_17->fixed = 1;
    }
   }


   if (VAR_17) {
    FUNC_14(VAR_8, VAR_17, VAR_14);
   } else {
    FUNC_0(VAR_6, VAR_4, ("Can't find ptarget_wlan when joinbss_event callback\n"));
    FUNC_18(&VAR_13->scanned_queue.lock);
    goto ignore_joinbss_callback;
   }


   if (FUNC_2(VAR_13, VAR_1)) {
    VAR_10 = FUNC_15(VAR_8, VAR_14);
    if (!VAR_10) {
     FUNC_0(VAR_6, VAR_4, ("Can't update stainfo when joinbss_event callback\n"));
     FUNC_18(&VAR_13->scanned_queue.lock);
     goto ignore_joinbss_callback;
    }
   }


   if (FUNC_2(VAR_13, VAR_1)) {
    FUNC_13(VAR_8);
   } else {

    FUNC_0(VAR_6, VAR_5, ("adhoc mode, fw_state:%x", FUNC_4(VAR_13)));
   }


   FUNC_3(&VAR_13->assoc_timer);

   FUNC_0(VAR_6, VAR_5, ("Cancel assoc_timer\n"));

  } else {
   FUNC_0(VAR_6, VAR_4, ("rtw_joinbss_event_callback err: fw_state:%x", FUNC_4(VAR_13)));
   FUNC_18(&VAR_13->scanned_queue.lock);
   goto ignore_joinbss_callback;
  }

  FUNC_18(&VAR_13->scanned_queue.lock);

 } else if (VAR_14->join_res == -4) {
  FUNC_16(VAR_8);
  FUNC_7(&VAR_13->assoc_timer,
     VAR_7 + FUNC_8(1));

  if (FUNC_2(VAR_13, VAR_3)) {
   FUNC_0(VAR_6, VAR_4, ("fail! clear _FW_UNDER_LINKING ^^^fw_state=%x\n", FUNC_4(VAR_13)));
   FUNC_1(VAR_13, VAR_3);
  }
 } else {
  FUNC_7(&VAR_13->assoc_timer,
     VAR_7 + FUNC_8(1));
  FUNC_1(VAR_13, VAR_3);
 }

ignore_joinbss_callback:
 FUNC_18(&VAR_13->lock);
}
