
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct wmi_resource_config_10_4 {void* qwrap_config; void* iphdr_pad_config; void* atf_config; void* tt_support; void* rx_batchmode; void* vo_minfree; void* vi_minfree; void* be_minfree; void* bk_minfree; void* smart_ant_cap; void* max_peer_ext_stats; void* max_frag_entries; void* num_msdu_desc; void* gtk_offload_max_vdev; void* vow_config; void* rx_skip_defrag_timeout_dup_detection_check; void* mac_aggr_delim; void* dma_burst_size; void* num_wds_entries; void* tx_dbg_log_size; void* mcast2ucast_mode; void* num_mcast_table_elems; void* num_mcast_groups; void* roam_offload_max_ap_profiles; void* roam_offload_max_vdev; void* bmiss_offload_max_vdev; void* scan_max_pending_req; void* rx_decap_mode; void** rx_timeout_pri; void* rx_chain_mask; void* tx_chain_mask; void* ast_skid_limit; void* num_peer_keys; void* num_offload_reorder_buffs; void* num_offload_peers; void* num_tids; void* num_active_peers; void* num_peers; void* num_vdevs; } ;
struct wmi_init_cmd_10_4 {int mem_chunks; int resource_config; } ;
struct sk_buff {scalar_t__ data; } ;
struct host_memory_chunk {int dummy; } ;
struct TYPE_6__ {int num_mem_chunks; int rx_decap_mode; } ;
struct TYPE_5__ {int max_num_pending_tx; } ;
struct TYPE_4__ {int rx_chain_mask; int tx_chain_mask; } ;
struct ath10k {TYPE_3__ wmi; TYPE_2__ htt; TYPE_1__ hw_params; int num_tids; int num_active_peers; int max_num_peers; int max_num_vdevs; } ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;
 int FUNC_4 (struct ath10k*,int *) ;
 int FUNC_5 (int *,struct wmi_resource_config_10_4*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct ath10k *VAR_34)
{
 struct wmi_init_cmd_10_4 *VAR_35;
 struct sk_buff *VAR_36;
 struct wmi_resource_config_10_4 VAR_37 = {};
 u32 VAR_38;

 VAR_37.num_vdevs = FUNC_1(VAR_34->max_num_vdevs);
 VAR_37.num_peers = FUNC_1(VAR_34->max_num_peers);
 VAR_37.num_active_peers = FUNC_1(VAR_34->num_active_peers);
 VAR_37.num_tids = FUNC_1(VAR_34->num_tids);

 VAR_37.num_offload_peers = FUNC_1(VAR_16);
 VAR_37.num_offload_reorder_buffs =
   FUNC_1(VAR_17);
 VAR_37.num_peer_keys = FUNC_1(VAR_18);
 VAR_37.ast_skid_limit = FUNC_1(VAR_3);
 VAR_37.tx_chain_mask = FUNC_1(VAR_34->hw_params.tx_chain_mask);
 VAR_37.rx_chain_mask = FUNC_1(VAR_34->hw_params.rx_chain_mask);

 VAR_37.rx_timeout_pri[0] = FUNC_1(VAR_26);
 VAR_37.rx_timeout_pri[1] = FUNC_1(VAR_26);
 VAR_37.rx_timeout_pri[2] = FUNC_1(VAR_26);
 VAR_37.rx_timeout_pri[3] = FUNC_1(VAR_25);

 VAR_37.rx_decap_mode = FUNC_1(VAR_34->wmi.rx_decap_mode);
 VAR_37.scan_max_pending_req = FUNC_1(VAR_27);
 VAR_37.bmiss_offload_max_vdev =
   FUNC_1(VAR_7);
 VAR_37.roam_offload_max_vdev =
   FUNC_1(VAR_22);
 VAR_37.roam_offload_max_ap_profiles =
   FUNC_1(VAR_21);
 VAR_37.num_mcast_groups = FUNC_1(VAR_14);
 VAR_37.num_mcast_table_elems =
   FUNC_1(VAR_15);

 VAR_37.mcast2ucast_mode = FUNC_1(VAR_13);
 VAR_37.tx_dbg_log_size = FUNC_1(VAR_30);
 VAR_37.num_wds_entries = FUNC_1(VAR_19);
 VAR_37.dma_burst_size = FUNC_1(VAR_8);
 VAR_37.mac_aggr_delim = FUNC_1(VAR_11);

 VAR_37.rx_skip_defrag_timeout_dup_detection_check =
   FUNC_1(VAR_24);

 VAR_37.vow_config = FUNC_1(VAR_32);
 VAR_37.gtk_offload_max_vdev =
   FUNC_1(VAR_9);
 VAR_37.num_msdu_desc = FUNC_1(VAR_34->htt.max_num_pending_tx);
 VAR_37.max_frag_entries = FUNC_1(VAR_2);
 VAR_37.max_peer_ext_stats =
   FUNC_1(VAR_12);
 VAR_37.smart_ant_cap = FUNC_1(VAR_28);

 VAR_37.bk_minfree = FUNC_1(VAR_6);
 VAR_37.be_minfree = FUNC_1(VAR_5);
 VAR_37.vi_minfree = FUNC_1(VAR_31);
 VAR_37.vo_minfree = FUNC_1(VAR_33);

 VAR_37.rx_batchmode = FUNC_1(VAR_23);
 VAR_37.tt_support =
   FUNC_1(VAR_29);
 VAR_37.atf_config = FUNC_1(VAR_4);
 VAR_37.iphdr_pad_config = FUNC_1(VAR_10);
 VAR_37.qwrap_config = FUNC_1(VAR_20);

 VAR_38 = sizeof(*VAR_35) +
       (sizeof(struct host_memory_chunk) * VAR_34->wmi.num_mem_chunks);

 VAR_36 = FUNC_3(VAR_34, VAR_38);
 if (!VAR_36)
  return FUNC_0(-VAR_1);

 VAR_35 = (struct wmi_init_cmd_10_4 *)VAR_36->data;
 FUNC_5(&VAR_35->resource_config, &VAR_37, sizeof(VAR_37));
 FUNC_4(VAR_34, &VAR_35->mem_chunks);

 FUNC_2(VAR_34, VAR_0, "wmi init 10.4\n");
 return VAR_36;
}
