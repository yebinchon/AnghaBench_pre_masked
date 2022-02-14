
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wlan_network {int list; } ;
struct ndis_802_11_ssid {int dummy; } ;
struct TYPE_7__ {int traffic_busy; scalar_t__ last_tx_pkts; scalar_t__ last_rx_pkts; } ;
struct TYPE_8__ {int queue; } ;
struct TYPE_5__ {int InfrastructureMode; } ;
struct TYPE_6__ {TYPE_1__ network; } ;
struct mlme_priv {int passive_mode; TYPE_3__ sitesurveyctrl; TYPE_4__ free_bss_pool; int * free_bss_buf; int assoc_ssid; TYPE_4__ scanned_queue; int lock2; int lock; TYPE_2__ cur_network; scalar_t__ fw_state; int * pscanned; int * nic_hdl; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;
typedef scalar_t__ sint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (scalar_t__,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct _adapter*) ;
 int FUNC_6 (struct mlme_priv*,int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct _adapter *VAR_4)
{
 sint VAR_5;
 u8 *VAR_6;
 struct wlan_network *VAR_7;
 struct mlme_priv *VAR_8 = &VAR_4->mlmepriv;

 FUNC_4((u8 *)VAR_8, 0, sizeof(struct mlme_priv));
 VAR_8->nic_hdl = (u8 *)VAR_4;
 VAR_8->pscanned = ((void*)0);
 VAR_8->fw_state = 0;
 VAR_8->cur_network.network.InfrastructureMode =
     VAR_3;

 VAR_8->passive_mode = 1;
 FUNC_7(&(VAR_8->lock));
 FUNC_7(&(VAR_8->lock2));
 FUNC_1(&(VAR_8->free_bss_pool));
 FUNC_1(&(VAR_8->scanned_queue));
 FUNC_6(VAR_8, 0);
 FUNC_4(&VAR_8->assoc_ssid, 0, sizeof(struct ndis_802_11_ssid));
 VAR_6 = FUNC_2(VAR_2, sizeof(struct wlan_network),
        VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_8->free_bss_buf = VAR_6;
 VAR_7 = (struct wlan_network *)VAR_6;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_0(&(VAR_7->list));
  FUNC_3(&(VAR_7->list),
     &(VAR_8->free_bss_pool.queue));
  VAR_7++;
 }
 VAR_8->sitesurveyctrl.last_rx_pkts = 0;
 VAR_8->sitesurveyctrl.last_tx_pkts = 0;
 VAR_8->sitesurveyctrl.traffic_busy = 0;

 FUNC_5(VAR_4);
 return 0;
}
