
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
struct TYPE_5__ {int MacAddress; } ;
struct TYPE_6__ {TYPE_2__ network; } ;
struct mlme_priv {int to_join; int lock; TYPE_3__ cur_network; int assoc_ssid; int assoc_timer; int fw_state; int scan_to_timer; int * wps_probe_req_ie; scalar_t__ wps_probe_req_ie_len; } ;
struct TYPE_4__ {struct wlan_bssid_ex dev_network; } ;
struct adapter {TYPE_1__ registrypriv; int recvpriv; struct mlme_priv mlmepriv; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (struct mlme_priv*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct mlme_priv*,int ) ;
 int FUNC_6 (struct mlme_priv*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (struct adapter*,int ,int ) ;
 int FUNC_10 (struct adapter*) ;
 scalar_t__ FUNC_11 (struct adapter*,int ) ;
 int FUNC_12 (struct adapter*) ;
 scalar_t__ FUNC_13 (struct adapter*) ;
 int FUNC_14 (struct adapter*,int) ;
 int FUNC_15 (int*) ;
 int FUNC_16 (struct adapter*) ;
 int FUNC_17 (struct adapter*) ;
 int FUNC_18 (struct adapter*,int) ;
 int FUNC_19 (struct adapter*) ;
 int FUNC_20 (struct mlme_priv*) ;
 int FUNC_21 (struct mlme_priv*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct adapter*,int ) ;
 int FUNC_24 (struct adapter*,int *,int,int *,int ) ;
 scalar_t__ FUNC_25 (struct adapter*) ;
 int FUNC_26 (struct adapter*) ;
 int FUNC_27 (struct mlme_priv*,int ) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;

void FUNC_30(struct adapter *VAR_13, u8 *VAR_14)
{
 u8 VAR_15 = 0;
 struct mlme_priv *VAR_16 = &(VAR_13->mlmepriv);

 FUNC_28(&VAR_16->lock);
 if (VAR_16->wps_probe_req_ie) {
  VAR_16->wps_probe_req_ie_len = 0;
  FUNC_7(VAR_16->wps_probe_req_ie);
  VAR_16->wps_probe_req_ie = ((void*)0);
 }

 FUNC_1(VAR_12, VAR_11, ("rtw_surveydone_event_callback: fw_state:%x\n\n", FUNC_6(VAR_16)));

 if (FUNC_5(VAR_16, VAR_8)) {


  VAR_15 = 1;


  FUNC_3(VAR_16, VAR_8);
 } else {

  FUNC_1(VAR_12, VAR_10, ("nic status =%x, survey done event comes too late!\n", FUNC_6(VAR_16)));
 }
 FUNC_29(&VAR_16->lock);

 if (VAR_15)
  FUNC_2(&VAR_16->scan_to_timer, &VAR_15);


 FUNC_28(&VAR_16->lock);

 FUNC_22(&VAR_13->recvpriv);

 if (VAR_16->to_join == 1) {
  if ((FUNC_5(VAR_16, VAR_3) == 1)) {
   if (FUNC_5(VAR_16, VAR_6) == 0) {
    FUNC_27(VAR_16, VAR_7);

    if (FUNC_20(VAR_16) == VAR_9) {
     FUNC_4(&VAR_16->assoc_timer, VAR_0);
    } else {
     struct wlan_bssid_ex *VAR_17 = &(VAR_13->registrypriv.dev_network);
     u8 *VAR_18 = VAR_13->registrypriv.dev_network.MacAddress;


     FUNC_3(VAR_16, VAR_8);

     FUNC_1(VAR_12, VAR_10, ("switching to adhoc master\n"));

     FUNC_8(&VAR_17->Ssid, &VAR_16->assoc_ssid, sizeof(struct ndis_802_11_ssid));

     FUNC_26(VAR_13);
     FUNC_15(VAR_18);

     VAR_16->fw_state = VAR_2;

     if (FUNC_12(VAR_13) != VAR_9) {
     FUNC_1(VAR_12, VAR_10, ("Error =>rtw_createbss_cmd status FAIL\n"));
     }

     VAR_16->to_join = 0;
    }
   }
  } else {
   int VAR_19;
   FUNC_27(VAR_16, VAR_7);
   VAR_16->to_join = 0;
   VAR_19 = FUNC_20(VAR_16);
   if (VAR_9 == VAR_19) {
        FUNC_4(&VAR_16->assoc_timer, VAR_0);
   } else if (VAR_19 == 2) {
    FUNC_3(VAR_16, VAR_7);
    FUNC_16(VAR_13);
   } else {
    FUNC_0("try_to_join, but select scanning queue fail, to_roam:%d\n", FUNC_25(VAR_13));

    if (FUNC_25(VAR_13) != 0) {
     if (FUNC_13(VAR_13) == 0
      || VAR_9 != FUNC_24(VAR_13, &VAR_16->assoc_ssid, 1, ((void*)0), 0)
     ) {
      FUNC_23(VAR_13, 0);
      FUNC_14(VAR_13, 1);
      FUNC_17(VAR_13);
     } else {
      VAR_16->to_join = 1;
     }
    } else
     FUNC_17(VAR_13);

    FUNC_3(VAR_16, VAR_7);
   }
  }
 } else {
  if (FUNC_11(VAR_13, VAR_1)) {
   if (FUNC_5(VAR_16, VAR_4)
    && FUNC_5(VAR_16, VAR_6)) {
    if (FUNC_21(VAR_16) == VAR_9) {
     FUNC_9(VAR_13, VAR_16->cur_network.network.MacAddress
      , VAR_5);
    }
   }
  }
 }



 FUNC_29(&VAR_16->lock);

 FUNC_19(VAR_13);

 FUNC_10(VAR_13);

 FUNC_18(VAR_13, 0);
}
