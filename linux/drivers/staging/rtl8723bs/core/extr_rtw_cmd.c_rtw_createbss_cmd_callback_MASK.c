
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wlan_network {int network; int list; int last_scanned; } ;
struct wlan_bssid_ex {int Length; int MacAddress; } ;
struct sta_info {int dummy; } ;
struct TYPE_2__ {int lock; int queue; } ;
struct mlme_priv {int lock; TYPE_1__ scanned_queue; int assoc_timer; struct wlan_network cur_network; } ;
struct cmd_obj {scalar_t__ res; int * parmbuf; } ;
struct adapter {int stapriv; struct mlme_priv mlmepriv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct mlme_priv*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (struct mlme_priv*,int ) ;
 int FUNC_5 (struct wlan_bssid_ex*) ;
 int VAR_5 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,struct wlan_bssid_ex*,int ) ;
 struct wlan_network* FUNC_8 (struct mlme_priv*) ;
 struct sta_info* FUNC_9 (int *,int ) ;
 int FUNC_10 (struct cmd_obj*) ;
 struct wlan_network* FUNC_11 (TYPE_1__*) ;
 struct sta_info* FUNC_12 (int *,int ) ;
 int FUNC_13 (struct adapter*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

void FUNC_16(struct adapter *VAR_6, struct cmd_obj *VAR_7)
{
 u8 VAR_8;
 struct sta_info *VAR_9 = ((void*)0);
 struct wlan_network *VAR_10 = ((void*)0);
 struct mlme_priv *VAR_11 = &VAR_6->mlmepriv;
 struct wlan_bssid_ex *VAR_12 = (struct wlan_bssid_ex *)VAR_7->parmbuf;
 struct wlan_network *VAR_13 = &(VAR_11->cur_network);

 if (VAR_7->parmbuf == ((void*)0))
  goto exit;

 if ((VAR_7->res != VAR_0)) {
  FUNC_0(VAR_4, VAR_3, ("\n ********Error: rtw_createbss_cmd_callback  Fail ************\n\n."));
  FUNC_3(&VAR_11->assoc_timer, 1);
 }

 FUNC_1(&VAR_11->assoc_timer, &VAR_8);

 FUNC_14(&VAR_11->lock);


 if (FUNC_4(VAR_11, VAR_1)) {
  VAR_9 = FUNC_12(&VAR_6->stapriv, VAR_12->MacAddress);
  if (!VAR_9) {
   VAR_9 = FUNC_9(&VAR_6->stapriv, VAR_12->MacAddress);
   if (VAR_9 == ((void*)0)) {
    FUNC_0(VAR_4, VAR_3, ("\nCan't alloc sta_info when createbss_cmd_callback\n"));
    goto createbss_cmd_fail;
   }
  }

  FUNC_13(VAR_6);
 } else {
  VAR_10 = FUNC_8(VAR_11);
  FUNC_14(&(VAR_11->scanned_queue.lock));
  if (VAR_10 == ((void*)0)) {
   VAR_10 = FUNC_11(&VAR_11->scanned_queue);
   if (VAR_10 == ((void*)0)) {
    FUNC_0(VAR_4, VAR_3, ("\n Error:  can't get pwlan in rtw_joinbss_event_callback\n"));
    FUNC_15(&(VAR_11->scanned_queue.lock));
    goto createbss_cmd_fail;
   }
   VAR_10->last_scanned = VAR_5;
  } else {
   FUNC_6(&(VAR_10->list), &VAR_11->scanned_queue.queue);
  }

  VAR_12->Length = FUNC_5(VAR_12);
  FUNC_7(&(VAR_10->network), VAR_12, VAR_12->Length);





  FUNC_7(&VAR_13->network, VAR_12, (FUNC_5(VAR_12)));




  FUNC_2(VAR_11, VAR_2);

  FUNC_15(&(VAR_11->scanned_queue.lock));


 }

createbss_cmd_fail:

 FUNC_15(&VAR_11->lock);
exit:
 FUNC_10(VAR_7);
}
