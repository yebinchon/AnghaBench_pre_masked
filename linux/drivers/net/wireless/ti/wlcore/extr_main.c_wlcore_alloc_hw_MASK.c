
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct wl1271 {int sg_enabled; int hw_pg_ver; int num_tx_desc; int mbox_size; void* priv; int freezable_wq; int * aggr_buf; int dummy_packet; int * fwlog; void* mbox; void* buffer_32; void* aggr_buf_size; int nvs_loading_complete; int flush_mutex; int mutex; int fw_type; int state; int wl_lock; int ** tx_frames; struct wl1271* tx_frames_map; int links_map; scalar_t__ fwlog_size; scalar_t__ active_link_count; scalar_t__ active_sta_count; int system_hlid; scalar_t__ quirks; scalar_t__ ap_fw_ps_map; scalar_t__ ap_ps_map; scalar_t__ recovery_count; int sleep_auth; scalar_t__ flags; int channel_type; int band; int power_level; scalar_t__ rx_counter; scalar_t__ channel; int tx_watchdog_work; int roc_complete_work; int scan_complete_work; int recovery_work; int tx_work; int netstack_work; int deferred_tx_queue; int deferred_rx_queue; TYPE_1__* links; struct ieee80211_hw* hw; int wlvif_list; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct TYPE_2__ {int * tx_queue; } ;


 int VAR_0 ;
 struct ieee80211_hw* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int,unsigned int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long,unsigned int) ;
 unsigned int FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (int) ;
 struct ieee80211_hw* FUNC_13 (int,int *) ;
 int FUNC_14 (struct ieee80211_hw*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (void*) ;
 void* FUNC_17 (int,int) ;
 void* FUNC_18 (size_t,int) ;
 int FUNC_19 (struct wl1271*,int ,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct wl1271*) ;
 int FUNC_24 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_25 (struct wl1271*) ;
 int VAR_17 ;
 int VAR_18 ;

struct ieee80211_hw *FUNC_26(size_t VAR_19, u32 VAR_20,
         u32 VAR_21)
{
 struct ieee80211_hw *VAR_22;
 struct wl1271 *VAR_23;
 int VAR_24, VAR_25, VAR_26;
 unsigned int VAR_27;

 VAR_22 = FUNC_13(sizeof(*VAR_23), &VAR_13);
 if (!VAR_22) {
  FUNC_24("could not alloc ieee80211_hw");
  VAR_26 = -VAR_0;
  goto err_hw_alloc;
 }

 VAR_23 = VAR_22->priv;
 FUNC_19(VAR_23, 0, sizeof(*VAR_23));

 VAR_23->priv = FUNC_18(VAR_19, VAR_2);
 if (!VAR_23->priv) {
  FUNC_24("could not alloc wl priv");
  VAR_26 = -VAR_0;
  goto err_priv_alloc;
 }

 FUNC_2(&VAR_23->wlvif_list);

 VAR_23->hw = VAR_22;





 for (VAR_24 = 0; VAR_24 < VAR_5; VAR_24++)
  for (VAR_25 = 0; VAR_25 < VAR_10; VAR_25++)
   FUNC_21(&VAR_23->links[VAR_25].tx_queue[VAR_24]);

 FUNC_21(&VAR_23->deferred_rx_queue);
 FUNC_21(&VAR_23->deferred_tx_queue);

 FUNC_3(&VAR_23->netstack_work, VAR_12);
 FUNC_3(&VAR_23->tx_work, VAR_16);
 FUNC_3(&VAR_23->recovery_work, VAR_14);
 FUNC_1(&VAR_23->scan_complete_work, VAR_15);
 FUNC_1(&VAR_23->roc_complete_work, VAR_18);
 FUNC_1(&VAR_23->tx_watchdog_work, VAR_17);

 VAR_23->freezable_wq = FUNC_6("wl12xx_wq");
 if (!VAR_23->freezable_wq) {
  VAR_26 = -VAR_0;
  goto err_hw;
 }

 VAR_23->channel = 0;
 VAR_23->rx_counter = 0;
 VAR_23->power_level = VAR_6;
 VAR_23->band = VAR_3;
 VAR_23->channel_type = VAR_4;
 VAR_23->flags = 0;
 VAR_23->sg_enabled = 1;
 VAR_23->sleep_auth = VAR_7;
 VAR_23->recovery_count = 0;
 VAR_23->hw_pg_ver = -1;
 VAR_23->ap_ps_map = 0;
 VAR_23->ap_fw_ps_map = 0;
 VAR_23->quirks = 0;
 VAR_23->system_hlid = VAR_9;
 VAR_23->active_sta_count = 0;
 VAR_23->active_link_count = 0;
 VAR_23->fwlog_size = 0;


 FUNC_5(VAR_9, VAR_23->links_map);

 FUNC_19(VAR_23->tx_frames_map, 0, sizeof(VAR_23->tx_frames_map));
 for (VAR_24 = 0; VAR_24 < VAR_23->num_tx_desc; VAR_24++)
  VAR_23->tx_frames[VAR_24] = ((void*)0);

 FUNC_22(&VAR_23->wl_lock);

 VAR_23->state = VAR_11;
 VAR_23->fw_type = VAR_8;
 FUNC_20(&VAR_23->mutex);
 FUNC_20(&VAR_23->flush_mutex);
 FUNC_15(&VAR_23->nvs_loading_complete);

 VAR_27 = FUNC_11(VAR_20);
 VAR_23->aggr_buf = (u8 *)FUNC_4(VAR_2, VAR_27);
 if (!VAR_23->aggr_buf) {
  VAR_26 = -VAR_0;
  goto err_wq;
 }
 VAR_23->aggr_buf_size = VAR_20;

 VAR_23->dummy_packet = FUNC_25(VAR_23);
 if (!VAR_23->dummy_packet) {
  VAR_26 = -VAR_0;
  goto err_aggr;
 }


 VAR_23->fwlog = (u8 *)FUNC_12(VAR_2);
 if (!VAR_23->fwlog) {
  VAR_26 = -VAR_0;
  goto err_dummy_packet;
 }

 VAR_23->mbox_size = VAR_21;
 VAR_23->mbox = FUNC_17(VAR_23->mbox_size, VAR_2 | VAR_1);
 if (!VAR_23->mbox) {
  VAR_26 = -VAR_0;
  goto err_fwlog;
 }

 VAR_23->buffer_32 = FUNC_17(sizeof(*VAR_23->buffer_32), VAR_2);
 if (!VAR_23->buffer_32) {
  VAR_26 = -VAR_0;
  goto err_mbox;
 }

 return VAR_22;

err_mbox:
 FUNC_16(VAR_23->mbox);

err_fwlog:
 FUNC_9((unsigned long)VAR_23->fwlog);

err_dummy_packet:
 FUNC_8(VAR_23->dummy_packet);

err_aggr:
 FUNC_10((unsigned long)VAR_23->aggr_buf, VAR_27);

err_wq:
 FUNC_7(VAR_23->freezable_wq);

err_hw:
 FUNC_23(VAR_23);
 FUNC_16(VAR_23->priv);

err_priv_alloc:
 FUNC_14(VAR_22);

err_hw_alloc:

 return FUNC_0(VAR_26);
}
