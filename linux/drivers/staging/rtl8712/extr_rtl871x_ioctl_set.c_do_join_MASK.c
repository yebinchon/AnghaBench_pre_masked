
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
struct TYPE_6__ {int traffic_busy; } ;
struct TYPE_4__ {int join_res; } ;
struct list_head {struct list_head* next; } ;
struct __queue {struct list_head queue; } ;
struct mlme_priv {int fw_state; int to_join; int assoc_ssid; TYPE_3__ sitesurveyctrl; int assoc_timer; struct list_head* pscanned; TYPE_1__ cur_network; struct __queue scanned_queue; } ;
struct TYPE_5__ {struct wlan_bssid_ex dev_network; } ;
struct _adapter {TYPE_2__ registrypriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct list_head*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct _adapter*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (struct mlme_priv*) ;
 int FUNC_8 (struct _adapter*,int *) ;
 int FUNC_9 (struct _adapter*) ;

__attribute__((used)) static u8 FUNC_10(struct _adapter *VAR_5)
{
 struct list_head *VAR_6, *VAR_7;
 u8 *VAR_8 = ((void*)0);
 struct mlme_priv *VAR_9 = &(VAR_5->mlmepriv);
 struct __queue *VAR_10 = &(VAR_9->scanned_queue);
 int VAR_11;

 VAR_7 = &VAR_10->queue;
 VAR_6 = VAR_7->next;
 VAR_9->cur_network.join_res = -2;
 VAR_9->fw_state |= VAR_3;
 VAR_9->pscanned = VAR_6;
 VAR_9->to_join = 1;


 if (!FUNC_0(VAR_9, VAR_2) &&
     FUNC_1(&VAR_10->queue)) {
  if (VAR_9->fw_state & VAR_3)
   VAR_9->fw_state ^= VAR_3;



  if (!VAR_9->sitesurveyctrl.traffic_busy)
   FUNC_8(VAR_5, &VAR_9->assoc_ssid);
  return 1;
 }

 VAR_11 = FUNC_7(VAR_9);
 if (!VAR_11) {
  FUNC_3(&VAR_9->assoc_timer,
     VAR_4 + FUNC_4(VAR_0));
 } else {
  if (FUNC_0(VAR_9, VAR_2)) {




   struct wlan_bssid_ex *VAR_12 =
    &(VAR_5->registrypriv.dev_network);
   VAR_9->fw_state = VAR_1;
   VAR_8 = VAR_5->registrypriv.dev_network.MacAddress;
   FUNC_2(&VAR_12->Ssid,
          &VAR_9->assoc_ssid,
          sizeof(struct ndis_802_11_ssid));
   FUNC_9(VAR_5);
   FUNC_6(VAR_8);
   if (FUNC_5(VAR_5))
    return 0;
   VAR_9->to_join = 0;
  } else {

   if (VAR_9->fw_state & VAR_3)
    VAR_9->fw_state ^=
     VAR_3;




   if (!VAR_9->sitesurveyctrl.traffic_busy)
    FUNC_8(VAR_5,
           &VAR_9->assoc_ssid);
  }
 }
 return 1;
}
