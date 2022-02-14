
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int Length; int MacAddress; } ;
struct wlan_network {int join_res; int fixed; TYPE_4__ network; } ;
struct wlan_bssid_ex {int dummy; } ;
struct sta_priv {int dummy; } ;
struct sta_info {int dummy; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {scalar_t__ LowPowerTransitionCount; scalar_t__ TrafficTransitionCount; } ;
struct TYPE_6__ {scalar_t__ SsidLength; int Ssid; } ;
struct mlme_priv {int lock; int assoc_timer; TYPE_3__ scanned_queue; struct wlan_network* cur_network_scanned; TYPE_2__ LinkDetectInfo; TYPE_1__ assoc_ssid; struct wlan_network cur_network; } ;
struct adapter {struct mlme_priv mlmepriv; struct sta_priv stapriv; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (struct mlme_priv*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct wlan_network* FUNC_4 (TYPE_3__*,struct wlan_network*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct mlme_priv*,int ) ;
 int FUNC_7 (struct mlme_priv*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_11 ;
 struct wlan_network* FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (struct adapter*,struct sta_info*) ;
 int FUNC_12 (struct adapter*) ;
 struct sta_info* FUNC_13 (struct sta_priv*,int ) ;
 int FUNC_14 (struct adapter*) ;
 int FUNC_15 (struct adapter*,struct wlan_network*,struct wlan_network*) ;
 struct sta_info* FUNC_16 (struct adapter*,struct wlan_network*) ;
 int FUNC_17 (struct adapter*) ;
 int FUNC_18 (struct mlme_priv*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

void FUNC_21(struct adapter *VAR_12, u8 *VAR_13)
{
 static u8 VAR_14;
 u8 VAR_15;
 struct sta_info *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 struct sta_priv *VAR_18 = &VAR_12->stapriv;
 struct mlme_priv *VAR_19 = &(VAR_12->mlmepriv);
 struct wlan_network *VAR_20 = (struct wlan_network *)VAR_13;
 struct wlan_network *VAR_21 = &(VAR_19->cur_network);
 struct wlan_network *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);
 unsigned int VAR_24 = 0;

 FUNC_1(VAR_10, VAR_9, ("joinbss event call back received with res =%d\n", VAR_20->join_res));

 FUNC_12(VAR_12);


 if (VAR_19->assoc_ssid.SsidLength == 0) {
  FUNC_1(VAR_10, VAR_8, ("@@@@@   joinbss event call back  for Any SSid\n"));
 } else {
  FUNC_1(VAR_10, VAR_8, ("@@@@@   rtw_joinbss_event_callback for SSid:%s\n", VAR_19->assoc_ssid.Ssid));
 }

 VAR_24 = !FUNC_9(VAR_20->network.MacAddress, VAR_21->network.MacAddress, VAR_0);

 VAR_20->network.Length = FUNC_8(&VAR_20->network);
 if (VAR_20->network.Length > sizeof(struct wlan_bssid_ex)) {
  FUNC_1(VAR_10, VAR_8, ("\n\n ***joinbss_evt_callback return a wrong bss ***\n\n"));
  return;
 }

 FUNC_19(&VAR_19->lock);

 VAR_19->LinkDetectInfo.TrafficTransitionCount = 0;
 VAR_19->LinkDetectInfo.LowPowerTransitionCount = 0;

 FUNC_1(VAR_10, VAR_9, ("\n rtw_joinbss_event_callback !! spin_lock_irqsave\n"));

 if (VAR_20->join_res > 0) {
  FUNC_19(&(VAR_19->scanned_queue.lock));
  VAR_14 = 0;
  if (FUNC_6(VAR_19, VAR_5)) {

   if (FUNC_6(VAR_19, VAR_4)) {
    if (VAR_24 == 1) {
     VAR_23 = FUNC_10(&VAR_19->scanned_queue, VAR_21->network.MacAddress);
    } else {
     VAR_22 = FUNC_10(&VAR_19->scanned_queue, VAR_21->network.MacAddress);
     if (VAR_22)
      VAR_22->fixed = 0;

     VAR_17 = FUNC_13(VAR_18, VAR_21->network.MacAddress);
     if (VAR_17)
      FUNC_11(VAR_12, VAR_17);

     VAR_23 = FUNC_10(&VAR_19->scanned_queue, VAR_20->network.MacAddress);
     if (FUNC_6(VAR_19, VAR_2) == 1) {
      if (VAR_23)
       VAR_23->fixed = 1;
     }
    }

   } else {
    VAR_23 = FUNC_4(&VAR_19->scanned_queue, VAR_20);
    if (FUNC_6(VAR_19, VAR_2) == 1) {
     if (VAR_23)
      VAR_23->fixed = 1;
    }
   }


   if (VAR_23) {
    FUNC_15(VAR_12, VAR_23, VAR_20);
   } else {
    FUNC_0(VAR_7, "Can't find ptarget_wlan when joinbss_event callback\n");
    FUNC_20(&(VAR_19->scanned_queue.lock));
    goto ignore_joinbss_callback;
   }



   if (FUNC_6(VAR_19, VAR_2) == 1) {
    VAR_16 = FUNC_16(VAR_12, VAR_20);
    if (VAR_16 == ((void*)0)) {
     FUNC_1(VAR_10, VAR_8, ("Can't update stainfo when joinbss_event callback\n"));
     FUNC_20(&(VAR_19->scanned_queue.lock));
     goto ignore_joinbss_callback;
    }
   }


   if (FUNC_6(VAR_19, VAR_2) == 1) {
    VAR_19->cur_network_scanned = VAR_23;
    FUNC_14(VAR_12);
   } else {

    FUNC_1(VAR_10, VAR_9, ("adhoc mode, fw_state:%x", FUNC_7(VAR_19)));
   }



   FUNC_2(&VAR_19->assoc_timer, &VAR_15);

   FUNC_1(VAR_10, VAR_9, ("Cancel assoc_timer\n"));

  } else {
   FUNC_1(VAR_10, VAR_8, ("rtw_joinbss_event_callback err: fw_state:%x", FUNC_7(VAR_19)));
   FUNC_20(&(VAR_19->scanned_queue.lock));
   goto ignore_joinbss_callback;
  }

  FUNC_20(&(VAR_19->scanned_queue.lock));

 } else if (VAR_20->join_res == -4) {
  FUNC_17(VAR_12);
  FUNC_5(&VAR_19->assoc_timer, 1);



  if ((FUNC_6(VAR_19, VAR_5)) == 1) {
   FUNC_1(VAR_10, VAR_8, ("fail! clear _FW_UNDER_LINKING ^^^fw_state =%x\n", FUNC_7(VAR_19)));
   FUNC_3(VAR_19, VAR_5);
  }

 } else {
   FUNC_5(&VAR_19->assoc_timer, 1);

   FUNC_3(VAR_19, VAR_5);





 }

ignore_joinbss_callback:

 FUNC_20(&VAR_19->lock);
}
