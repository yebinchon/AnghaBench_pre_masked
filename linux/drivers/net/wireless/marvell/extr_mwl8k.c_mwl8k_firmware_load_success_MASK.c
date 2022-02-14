
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mwl8k_vif {int dummy; } ;
struct mwl8k_sta {int dummy; } ;
struct mwl8k_priv {int radio_on; int radio_short_preamble; int cookie_dma; int * cookie; int pdev; TYPE_1__* device_info; scalar_t__ sta_macids_supported; scalar_t__ ap_macids_supported; int * tx_wait; int stream_lock; int tx_lock; int * hostcmd_wait; scalar_t__ fw_mutex_depth; int * fw_mutex_owner; int fw_mutex; int poll_rx_task; int poll_tx_task; int fw_reload; int watchdog_ba_handle; int finalize_join_worker; int vif_list; scalar_t__ macids_used; scalar_t__ ap_fw; struct ieee80211_hw* hw; } ;
struct mwl8k_dma_data {int dummy; } ;
struct ieee80211_hw {int extra_tx_headroom; int vif_data_size; int sta_data_size; TYPE_2__* wiphy; int queues; } ;
struct ieee80211_cts {int dummy; } ;
struct TYPE_5__ {int n_iface_combinations; int interface_modes; int * iface_combinations; } ;
struct TYPE_4__ {scalar_t__ fw_image_sta; scalar_t__ fw_image_ap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct mwl8k_priv*) ;
 int VAR_12 ;
 int FUNC_9 (struct ieee80211_hw*,int ) ;
 int VAR_13 ;
 int FUNC_10 (struct mwl8k_priv*) ;
 int FUNC_11 (struct ieee80211_hw*,int) ;
 int VAR_14 ;
 int * FUNC_12 (int ,int,int *) ;
 int FUNC_13 (int ,int,int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,unsigned long) ;
 int FUNC_17 (TYPE_2__*,char*) ;
 int FUNC_18 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_19(struct mwl8k_priv *VAR_15)
{
 struct ieee80211_hw *VAR_16 = VAR_15->hw;
 int VAR_17, VAR_18;

 VAR_18 = FUNC_6(VAR_16);
 FUNC_8(VAR_15);
 if (VAR_18) {
  FUNC_17(VAR_16->wiphy, "Cannot start firmware\n");
  return VAR_18;
 }





 VAR_16->extra_tx_headroom =
  sizeof(struct mwl8k_dma_data) - sizeof(struct ieee80211_cts);

 VAR_16->extra_tx_headroom -= VAR_15->ap_fw ? VAR_7 : 0;

 VAR_16->queues = VAR_3;


 FUNC_3(VAR_16, VAR_8);
 FUNC_3(VAR_16, VAR_2);





 if (VAR_15->ap_fw)
  FUNC_3(VAR_16, VAR_0);

 VAR_16->vif_data_size = sizeof(struct mwl8k_vif);
 VAR_16->sta_data_size = sizeof(struct mwl8k_sta);

 VAR_15->macids_used = 0;
 FUNC_1(&VAR_15->vif_list);


 VAR_15->radio_on = 0;
 VAR_15->radio_short_preamble = 0;


 FUNC_2(&VAR_15->finalize_join_worker, VAR_10);

 FUNC_2(&VAR_15->watchdog_ba_handle, VAR_14);

 FUNC_2(&VAR_15->fw_reload, VAR_11);


 FUNC_16(&VAR_15->poll_tx_task, VAR_13, (unsigned long)VAR_16);
 FUNC_15(&VAR_15->poll_tx_task);
 FUNC_16(&VAR_15->poll_rx_task, VAR_12, (unsigned long)VAR_16);
 FUNC_15(&VAR_15->poll_rx_task);


 VAR_15->cookie = FUNC_12(VAR_15->pdev, 4, &VAR_15->cookie_dma);
 if (VAR_15->cookie == ((void*)0))
  return -VAR_1;

 FUNC_5(&VAR_15->fw_mutex);
 VAR_15->fw_mutex_owner = ((void*)0);
 VAR_15->fw_mutex_depth = 0;
 VAR_15->hostcmd_wait = ((void*)0);

 FUNC_14(&VAR_15->tx_lock);

 FUNC_14(&VAR_15->stream_lock);

 VAR_15->tx_wait = ((void*)0);

 VAR_18 = FUNC_7(VAR_16);
 if (VAR_18)
  goto err_free_cookie;

 VAR_16->wiphy->interface_modes = 0;

 if (VAR_15->ap_macids_supported || VAR_15->device_info->fw_image_ap) {
  VAR_16->wiphy->interface_modes |= FUNC_0(VAR_5);
  VAR_16->wiphy->interface_modes |= FUNC_0(VAR_6);
  VAR_16->wiphy->iface_combinations = &VAR_9;
  VAR_16->wiphy->n_iface_combinations = 1;
 }

 if (VAR_15->sta_macids_supported || VAR_15->device_info->fw_image_sta)
  VAR_16->wiphy->interface_modes |= FUNC_0(VAR_6);

 FUNC_18(VAR_16->wiphy, VAR_4);

 VAR_18 = FUNC_4(VAR_16);
 if (VAR_18) {
  FUNC_17(VAR_16->wiphy, "Cannot register device\n");
  goto err_unprobe_hw;
 }

 return 0;

err_unprobe_hw:
 for (VAR_17 = 0; VAR_17 < FUNC_10(VAR_15); VAR_17++)
  FUNC_11(VAR_16, VAR_17);
 FUNC_9(VAR_16, 0);

err_free_cookie:
 if (VAR_15->cookie != ((void*)0))
  FUNC_13(VAR_15->pdev, 4,
    VAR_15->cookie, VAR_15->cookie_dma);

 return VAR_18;
}
