
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hlid; int tx_last_rate_mbps; int tx_last_rate; int tx_voice_released_blks; int tx_lnk_free_pkts; int tx_released_pkts; } ;
struct wl_fw_status {int * priv; void* log_start_addr; TYPE_1__ counters; void* tx_total; void* total_released_blks; void* link_fast_bitmap; void* link_ps_bitmap; void* fw_localtime; int rx_pkt_descs; int tx_results_counter; int drv_rx_counter; int fw_rx_counter; void* intr; } ;
struct TYPE_4__ {int hlid; int tx_last_rate_mbps; int tx_last_rate; int tx_voice_released_blks; int tx_lnk_free_pkts; int tx_released_pkts; } ;
struct wl18xx_fw_status {int priv; int log_start_addr; TYPE_2__ counters; int tx_total; int total_released_blks; int link_fast_bitmap; int link_ps_bitmap; int fw_localtime; int rx_pkt_descs; int tx_results_counter; int drv_rx_counter; int fw_rx_counter; int intr; } ;
struct wl1271 {int dummy; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct wl1271 *VAR_0, void *VAR_1,
         struct wl_fw_status *VAR_2)
{
 struct wl18xx_fw_status *VAR_3 = VAR_1;

 VAR_2->intr = FUNC_0(VAR_3->intr);
 VAR_2->fw_rx_counter = VAR_3->fw_rx_counter;
 VAR_2->drv_rx_counter = VAR_3->drv_rx_counter;
 VAR_2->tx_results_counter = VAR_3->tx_results_counter;
 VAR_2->rx_pkt_descs = VAR_3->rx_pkt_descs;

 VAR_2->fw_localtime = FUNC_0(VAR_3->fw_localtime);
 VAR_2->link_ps_bitmap = FUNC_0(VAR_3->link_ps_bitmap);
 VAR_2->link_fast_bitmap =
   FUNC_0(VAR_3->link_fast_bitmap);
 VAR_2->total_released_blks =
   FUNC_0(VAR_3->total_released_blks);
 VAR_2->tx_total = FUNC_0(VAR_3->tx_total);

 VAR_2->counters.tx_released_pkts =
   VAR_3->counters.tx_released_pkts;
 VAR_2->counters.tx_lnk_free_pkts =
   VAR_3->counters.tx_lnk_free_pkts;
 VAR_2->counters.tx_voice_released_blks =
   VAR_3->counters.tx_voice_released_blks;
 VAR_2->counters.tx_last_rate =
   VAR_3->counters.tx_last_rate;
 VAR_2->counters.tx_last_rate_mbps =
   VAR_3->counters.tx_last_rate_mbps;
 VAR_2->counters.hlid =
   VAR_3->counters.hlid;

 VAR_2->log_start_addr = FUNC_0(VAR_3->log_start_addr);

 VAR_2->priv = &VAR_3->priv;
}
