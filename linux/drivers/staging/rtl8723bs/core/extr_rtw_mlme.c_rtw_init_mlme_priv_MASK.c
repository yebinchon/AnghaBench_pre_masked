
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wlan_network {int list; } ;
struct ndis_802_11_ssid {int dummy; } ;
struct TYPE_6__ {int queue; } ;
struct TYPE_4__ {int InfrastructureMode; } ;
struct TYPE_5__ {TYPE_1__ network; } ;
struct mlme_priv {int roam_flags; int roam_scan_int_ms; int roam_rssi_diff_th; int roam_scanr_exp_ms; TYPE_3__ free_bss_pool; int * free_bss_buf; int assoc_ssid; TYPE_3__ scanned_queue; int lock; int scan_mode; TYPE_2__ cur_network; int fw_state; int * pscanned; int * nic_hdl; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct mlme_priv*,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;

int FUNC_10(struct adapter *VAR_12)
{
 int VAR_13;
 u8 *VAR_14;
 struct wlan_network *VAR_15;
 struct mlme_priv *VAR_16 = &VAR_12->mlmepriv;
 int VAR_17 = VAR_11;

 VAR_16->nic_hdl = (u8 *)VAR_12;

 VAR_16->pscanned = ((void*)0);
 VAR_16->fw_state = VAR_9;

 VAR_16->cur_network.network.InfrastructureMode = VAR_1;
 VAR_16->scan_mode = VAR_8;

 FUNC_8(&VAR_16->lock);
 FUNC_1(&VAR_16->free_bss_pool);
 FUNC_1(&VAR_16->scanned_queue);

 FUNC_7(VAR_16, 0);

 FUNC_4(&VAR_16->assoc_ssid, 0, sizeof(struct ndis_802_11_ssid));

 VAR_14 = FUNC_9(FUNC_2(VAR_0, sizeof(struct wlan_network)));

 if (VAR_14 == ((void*)0)) {
  VAR_17 = VAR_10;
  goto exit;
 }
 VAR_16->free_bss_buf = VAR_14;

 VAR_15 = (struct wlan_network *)VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  FUNC_0(&VAR_15->list);

  FUNC_3(&VAR_15->list, &VAR_16->free_bss_pool.queue);

  VAR_15++;
 }



 FUNC_5(VAR_12);





 VAR_16->roam_flags = 0
  | VAR_3
  | VAR_4



  ;

 VAR_16->roam_scanr_exp_ms = 5000;
 VAR_16->roam_rssi_diff_th = 10;
 VAR_16->roam_scan_int_ms = 10000;

 FUNC_6(VAR_12);

exit:

 return VAR_17;
}
