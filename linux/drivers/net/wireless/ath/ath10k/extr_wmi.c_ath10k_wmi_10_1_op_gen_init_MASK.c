
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_resource_config_10x {void* max_frag_entries; void* num_msdu_desc; void* vow_config; void* rx_skip_defrag_timeout_dup_detection_check; void* mac_aggr_delim; void* dma_burst_size; void* num_wds_entries; void* tx_dbg_log_size; void* mcast2ucast_mode; void* num_mcast_table_elems; void* num_mcast_groups; void* roam_offload_max_ap_profiles; void* roam_offload_max_vdev; void* bmiss_offload_max_vdev; void* scan_max_pending_reqs; void* rx_decap_mode; void* rx_timeout_pri_bk; void* rx_timeout_pri_be; void* rx_timeout_pri_vi; void* rx_timeout_pri_vo; void* rx_chain_mask; void* tx_chain_mask; void* ast_skid_limit; void* num_tids; void* num_peer_keys; void* num_peers; void* num_vdevs; } ;
struct wmi_init_cmd_10x {int mem_chunks; int resource_config; } ;
struct sk_buff {scalar_t__ data; } ;
struct host_memory_chunk {int dummy; } ;
struct TYPE_2__ {int rx_decap_mode; int num_mem_chunks; } ;
struct ath10k {TYPE_1__ wmi; } ;
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
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;
 int FUNC_4 (struct ath10k*,int *) ;
 int FUNC_5 (int *,struct wmi_resource_config_10x*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct ath10k *VAR_26)
{
 struct wmi_init_cmd_10x *VAR_27;
 struct sk_buff *VAR_28;
 struct wmi_resource_config_10x VAR_29 = {};
 u32 VAR_30, VAR_31;

 VAR_29.num_vdevs = FUNC_1(VAR_14);
 VAR_29.num_peers = FUNC_1(VAR_11);
 VAR_29.num_peer_keys = FUNC_1(VAR_12);
 VAR_29.num_tids = FUNC_1(VAR_13);
 VAR_29.ast_skid_limit = FUNC_1(VAR_2);
 VAR_29.tx_chain_mask = FUNC_1(VAR_23);
 VAR_29.rx_chain_mask = FUNC_1(VAR_18);
 VAR_29.rx_timeout_pri_vo = FUNC_1(VAR_21);
 VAR_29.rx_timeout_pri_vi = FUNC_1(VAR_21);
 VAR_29.rx_timeout_pri_be = FUNC_1(VAR_21);
 VAR_29.rx_timeout_pri_bk = FUNC_1(VAR_20);
 VAR_29.rx_decap_mode = FUNC_1(VAR_26->wmi.rx_decap_mode);
 VAR_29.scan_max_pending_reqs =
  FUNC_1(VAR_22);

 VAR_29.bmiss_offload_max_vdev =
  FUNC_1(VAR_3);

 VAR_29.roam_offload_max_vdev =
  FUNC_1(VAR_17);

 VAR_29.roam_offload_max_ap_profiles =
  FUNC_1(VAR_16);

 VAR_29.num_mcast_groups = FUNC_1(VAR_8);
 VAR_29.num_mcast_table_elems =
  FUNC_1(VAR_9);

 VAR_29.mcast2ucast_mode = FUNC_1(VAR_7);
 VAR_29.tx_dbg_log_size = FUNC_1(VAR_24);
 VAR_29.num_wds_entries = FUNC_1(VAR_15);
 VAR_29.dma_burst_size = FUNC_1(VAR_4);
 VAR_29.mac_aggr_delim = FUNC_1(VAR_5);

 VAR_31 = VAR_19;
 VAR_29.rx_skip_defrag_timeout_dup_detection_check = FUNC_1(VAR_31);

 VAR_29.vow_config = FUNC_1(VAR_25);

 VAR_29.num_msdu_desc = FUNC_1(VAR_10);
 VAR_29.max_frag_entries = FUNC_1(VAR_6);

 VAR_30 = sizeof(*VAR_27) +
       (sizeof(struct host_memory_chunk) * VAR_26->wmi.num_mem_chunks);

 VAR_28 = FUNC_3(VAR_26, VAR_30);
 if (!VAR_28)
  return FUNC_0(-VAR_1);

 VAR_27 = (struct wmi_init_cmd_10x *)VAR_28->data;

 FUNC_5(&VAR_27->resource_config, &VAR_29, sizeof(VAR_29));
 FUNC_4(VAR_26, &VAR_27->mem_chunks);

 FUNC_2(VAR_26, VAR_0, "wmi init 10x\n");
 return VAR_28;
}
