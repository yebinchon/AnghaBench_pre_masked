
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wlan_bssid_ex {int* MacAddress; int Ssid; } ;
struct ndis_802_11_ssid {int dummy; } ;
struct TYPE_6__ {int bBusyTraffic; } ;
struct __queue {int lock; int queue; } ;
struct TYPE_4__ {int join_res; } ;
struct mlme_priv {int to_join; int assoc_ssid; TYPE_3__ LinkDetectInfo; int fw_state; int assoc_timer; struct __queue scanned_queue; struct list_head* pscanned; TYPE_1__ cur_network; } ;
struct list_head {int dummy; } ;
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
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mlme_priv*,int ) ;
 struct list_head* FUNC_4 (struct __queue*) ;
 struct list_head* FUNC_5 (struct list_head*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (struct adapter*) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (struct mlme_priv*) ;
 int FUNC_11 (struct adapter*,int *,int,int *,int ) ;
 scalar_t__ FUNC_12 (struct adapter*) ;
 int FUNC_13 (struct adapter*) ;
 int FUNC_14 (struct mlme_priv*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

u8 FUNC_17(struct adapter *VAR_9)
{
 struct list_head *VAR_10, *VAR_11;
 u8 *VAR_12 = ((void*)0);
 struct mlme_priv *VAR_13 = &(VAR_9->mlmepriv);
 struct __queue *VAR_14 = &(VAR_13->scanned_queue);
 u8 VAR_15 = VAR_5;

 FUNC_15(&(VAR_13->scanned_queue.lock));
 VAR_11 = FUNC_4(VAR_14);
 VAR_10 = FUNC_5(VAR_11);

 FUNC_0(VAR_8, VAR_7, ("\n rtw_do_join: phead = %p; plist = %p\n\n\n", VAR_11, VAR_10));

 VAR_13->cur_network.join_res = -2;

 FUNC_14(VAR_13, VAR_4);

 VAR_13->pscanned = VAR_10;

 VAR_13->to_join = 1;

 if (FUNC_6(&VAR_14->queue)) {
  FUNC_16(&(VAR_13->scanned_queue.lock));
  FUNC_1(VAR_13, VAR_4);




  if (VAR_13->LinkDetectInfo.bBusyTraffic == 0
   || FUNC_12(VAR_9) > 0
  ) {
   FUNC_0(VAR_8, VAR_7, ("rtw_do_join(): site survey if scanned_queue is empty\n."));

   VAR_15 = FUNC_11(VAR_9, &VAR_13->assoc_ssid, 1, ((void*)0), 0);
   if (VAR_5 != VAR_15) {
    VAR_13->to_join = 0;
    FUNC_0(VAR_8, VAR_6, ("rtw_do_join(): site survey return error\n."));
   }
  } else {
   VAR_13->to_join = 0;
   VAR_15 = VAR_3;
  }

  goto exit;
 } else {
  int VAR_16;
  FUNC_16(&(VAR_13->scanned_queue.lock));
  VAR_16 = FUNC_10(VAR_13);
  if (VAR_16 == VAR_5) {
   VAR_13->to_join = 0;
   FUNC_2(&VAR_13->assoc_timer, VAR_0);
  } else {
   if (FUNC_3(VAR_13, VAR_2) == 1) {



    struct wlan_bssid_ex *VAR_17 = &(VAR_9->registrypriv.dev_network);

    VAR_13->fw_state = VAR_1;

    VAR_12 = VAR_9->registrypriv.dev_network.MacAddress;

    FUNC_7(&VAR_17->Ssid, &VAR_13->assoc_ssid, sizeof(struct ndis_802_11_ssid));

    FUNC_13(VAR_9);

    FUNC_9(VAR_12);

    if (FUNC_8(VAR_9) != VAR_5) {
     FUNC_0(VAR_8, VAR_6, ("***Error =>do_goin: rtw_createbss_cmd status FAIL***\n "));
     VAR_15 = 0;
     goto exit;
    }

    VAR_13->to_join = 0;

    FUNC_0(VAR_8, VAR_7, ("***Error => rtw_select_and_join_from_scanned_queue FAIL under STA_Mode***\n "));

   } else {

    FUNC_1(VAR_13, VAR_4);



    if (VAR_13->LinkDetectInfo.bBusyTraffic == 0
     || FUNC_12(VAR_9) > 0
    ) {

     VAR_15 = FUNC_11(VAR_9, &VAR_13->assoc_ssid, 1, ((void*)0), 0);
     if (VAR_5 != VAR_15) {
      VAR_13->to_join = 0;
      FUNC_0(VAR_8, VAR_6, ("do_join(): site survey return error\n."));
     }
    } else {
     VAR_15 = VAR_3;
     VAR_13->to_join = 0;
    }
   }

  }

 }

exit:
 return VAR_15;
}
