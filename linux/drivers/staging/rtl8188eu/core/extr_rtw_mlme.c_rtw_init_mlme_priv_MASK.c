
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
struct mlme_priv {TYPE_3__ free_bss_pool; int * free_bss_buf; int assoc_ssid; TYPE_3__ scanned_queue; int lock; int scan_mode; TYPE_2__ cur_network; scalar_t__ fw_state; int * pscanned; int * nic_hdl; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;

int FUNC_9(struct adapter *VAR_5)
{
 int VAR_6;
 u8 *VAR_7;
 struct wlan_network *VAR_8;
 struct mlme_priv *VAR_9 = &VAR_5->mlmepriv;
 int VAR_10 = VAR_4;



 VAR_9->nic_hdl = (u8 *)VAR_5;

 VAR_9->pscanned = ((void*)0);
 VAR_9->fw_state = 0;
 VAR_9->cur_network.network.InfrastructureMode = VAR_1;
 VAR_9->scan_mode = VAR_2;

 FUNC_7(&VAR_9->lock);
 FUNC_1(&VAR_9->free_bss_pool);
 FUNC_1(&VAR_9->scanned_queue);

 FUNC_4(&VAR_9->assoc_ssid, 0, sizeof(struct ndis_802_11_ssid));

 VAR_7 = FUNC_8(FUNC_2(VAR_0, sizeof(struct wlan_network)));

 if (!VAR_7) {
  VAR_10 = VAR_3;
  goto exit;
 }
 VAR_9->free_bss_buf = VAR_7;

 VAR_8 = (struct wlan_network *)VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_0(&VAR_8->list);

  FUNC_3(&VAR_8->list, &VAR_9->free_bss_pool.queue);

  VAR_8++;
 }



 FUNC_5(VAR_5);

 FUNC_6(VAR_5);

exit:
 return VAR_10;
}
