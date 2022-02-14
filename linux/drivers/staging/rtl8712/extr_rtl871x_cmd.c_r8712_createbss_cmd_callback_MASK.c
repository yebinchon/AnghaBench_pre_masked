
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlan_network {int fixed; int network; int list; scalar_t__ last_scanned; } ;
struct TYPE_6__ {void* Length; void* HopSet; void* HopPattern; void* DwellTime; } ;
struct TYPE_7__ {void* Length; TYPE_2__ FHConfig; void* DSConfig; void* ATIMWindow; } ;
struct TYPE_5__ {void* SsidLength; } ;
struct wlan_bssid_ex {void* Length; int MacAddress; void* IELength; void* InfrastructureMode; TYPE_3__ Configuration; void* NetworkTypeInUse; void* Rssi; void* Privacy; TYPE_1__ Ssid; } ;
struct sta_info {int dummy; } ;
struct TYPE_8__ {int queue; } ;
struct mlme_priv {int fw_state; int lock; TYPE_4__ scanned_queue; int assoc_timer; struct wlan_network cur_network; } ;
struct cmd_obj {scalar_t__ res; scalar_t__ parmbuf; } ;
struct _adapter {int stapriv; struct mlme_priv mlmepriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wlan_network* FUNC_0 (struct mlme_priv*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,struct wlan_bssid_ex*,void*) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 struct sta_info* FUNC_7 (int *,int ) ;
 int FUNC_8 (struct cmd_obj*) ;
 struct wlan_network* FUNC_9 (TYPE_4__*) ;
 struct sta_info* FUNC_10 (int *,int ) ;
 void* FUNC_11 (struct wlan_bssid_ex*) ;
 int FUNC_12 (struct _adapter*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

void FUNC_15(struct _adapter *VAR_4,
      struct cmd_obj *VAR_5)
{
 unsigned long VAR_6;
 struct sta_info *VAR_7 = ((void*)0);
 struct wlan_network *VAR_8 = ((void*)0);
 struct mlme_priv *VAR_9 = &VAR_4->mlmepriv;
 struct wlan_bssid_ex *VAR_10 = (struct wlan_bssid_ex *)VAR_5->parmbuf;
 struct wlan_network *VAR_11 = &(VAR_9->cur_network);

 if (VAR_5->res != VAR_0)
  FUNC_5(&VAR_9->assoc_timer,
     VAR_3 + FUNC_6(1));
 FUNC_1(&VAR_9->assoc_timer);
 FUNC_13(&VAR_9->lock, VAR_6);
 if ((VAR_9->fw_state) & VAR_1) {
  VAR_7 = FUNC_10(&VAR_4->stapriv,
      VAR_10->MacAddress);
  if (!VAR_7) {
   VAR_7 = FUNC_7(&VAR_4->stapriv,
         VAR_10->MacAddress);
   if (!VAR_7)
    goto createbss_cmd_fail;
  }
  FUNC_12(VAR_4);
 } else {
  VAR_8 = FUNC_0(VAR_9);
  if (!VAR_8) {
   VAR_8 = FUNC_9(
    &VAR_9->scanned_queue);
   if (!VAR_8)
    goto createbss_cmd_fail;
   VAR_8->last_scanned = VAR_3;
  } else {
   FUNC_3(&(VAR_8->list),
      &VAR_9->scanned_queue.queue);
  }
  VAR_10->Length = FUNC_11(VAR_10);
  FUNC_4(&(VAR_8->network), VAR_10, VAR_10->Length);
  VAR_8->fixed = 1;
  FUNC_4(&VAR_11->network, VAR_10,
   (FUNC_11(VAR_10)));
  if (VAR_9->fw_state & VAR_2)
   VAR_9->fw_state ^= VAR_2;




 }
createbss_cmd_fail:
 FUNC_14(&VAR_9->lock, VAR_6);
 FUNC_8(VAR_5);
}
