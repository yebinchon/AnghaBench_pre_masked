
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wlan_bssid_ex {int* MacAddress; int ssid; } ;
struct ndis_802_11_ssid {int dummy; } ;
struct TYPE_6__ {int bBusyTraffic; } ;
struct __queue {int lock; int queue; } ;
struct TYPE_4__ {int join_res; } ;
struct mlme_priv {int to_join; scalar_t__ to_roaming; int assoc_ssid; TYPE_3__ LinkDetectInfo; int fw_state; int assoc_timer; struct __queue scanned_queue; struct list_head* pscanned; TYPE_1__ cur_network; } ;
struct list_head {struct list_head* next; } ;
struct TYPE_5__ {struct wlan_bssid_ex dev_network; } ;
struct adapter {TYPE_2__ registrypriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mlme_priv*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct mlme_priv*,int ) ;
 struct list_head* FUNC_3 (struct __queue*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct adapter*) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (struct mlme_priv*) ;
 int FUNC_11 (struct adapter*,int *,int,int *,int ) ;
 int FUNC_12 (struct adapter*) ;
 int FUNC_13 (struct mlme_priv*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

u8 FUNC_16(struct adapter *VAR_10)
{
 struct list_head *VAR_11, *VAR_12;
 u8 *VAR_13 = ((void*)0);
 struct mlme_priv *VAR_14 = &VAR_10->mlmepriv;
 struct __queue *VAR_15 = &VAR_14->scanned_queue;
 u8 VAR_16 = VAR_5;

 FUNC_14(&VAR_14->scanned_queue.lock);
 VAR_12 = FUNC_3(VAR_15);
 VAR_11 = VAR_12->next;

 FUNC_0(VAR_8, VAR_7, ("\n rtw_do_join: phead = %p; plist = %p\n\n\n", VAR_12, VAR_11));

 VAR_14->cur_network.join_res = -2;

 FUNC_13(VAR_14, VAR_4);

 VAR_14->pscanned = VAR_11;

 VAR_14->to_join = 1;

 if (FUNC_4(&VAR_15->queue)) {
  FUNC_15(&VAR_14->scanned_queue.lock);
  FUNC_1(VAR_14, VAR_4);




  if (!VAR_14->LinkDetectInfo.bBusyTraffic ||
      VAR_14->to_roaming > 0) {
   FUNC_0(VAR_8, VAR_7, ("rtw_do_join(): site survey if scanned_queue is empty\n."));

   VAR_16 = FUNC_11(VAR_10, &VAR_14->assoc_ssid, 1, ((void*)0), 0);
   if (VAR_16 != VAR_5) {
    VAR_14->to_join = 0;
    FUNC_0(VAR_8, VAR_6, ("rtw_do_join(): site survey return error\n."));
   }
  } else {
   VAR_14->to_join = 0;
   VAR_16 = VAR_3;
  }

  goto exit;
 } else {
  int VAR_17;

  FUNC_15(&VAR_14->scanned_queue.lock);
  VAR_17 = FUNC_10(VAR_14);
  if (VAR_17 == VAR_5) {
   VAR_14->to_join = 0;
   FUNC_6(&VAR_14->assoc_timer,
      VAR_9 + FUNC_7(VAR_0));
  } else {
   if (FUNC_2(VAR_14, VAR_2)) {



    struct wlan_bssid_ex *VAR_18 = &VAR_10->registrypriv.dev_network;

    VAR_14->fw_state = VAR_1;

    VAR_13 = VAR_10->registrypriv.dev_network.MacAddress;

    FUNC_5(&VAR_18->ssid, &VAR_14->assoc_ssid, sizeof(struct ndis_802_11_ssid));

    FUNC_12(VAR_10);

    FUNC_9(VAR_13);

    if (FUNC_8(VAR_10) != VAR_5) {
     FUNC_0(VAR_8, VAR_6, ("***Error =>do_goin: rtw_createbss_cmd status FAIL***\n "));
     VAR_16 = 0;
     goto exit;
    }
    VAR_14->to_join = 0;

    FUNC_0(VAR_8, VAR_7,
      ("***Error => rtw_select_and_join_from_scanned_queue FAIL under STA_Mode***\n "));
   } else {

    FUNC_1(VAR_14, VAR_4);



    if (!VAR_14->LinkDetectInfo.bBusyTraffic ||
        VAR_14->to_roaming > 0) {
     VAR_16 = FUNC_11(VAR_10, &VAR_14->assoc_ssid, 1, ((void*)0), 0);
     if (VAR_16 != VAR_5) {
      VAR_14->to_join = 0;
      FUNC_0(VAR_8, VAR_6, ("do_join(): site survey return error\n."));
     }
    } else {
     VAR_16 = VAR_3;
     VAR_14->to_join = 0;
    }
   }
  }
 }

exit:
 return VAR_16;
}
