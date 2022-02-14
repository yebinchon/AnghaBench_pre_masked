
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_resource_config {void* max_frag_entries; void* num_msdu_desc; void* gtk_offload_max_vdev; void* vow_config; void* rx_skip_defrag_timeout_dup_detection_check; void* mac_aggr_delim; void* dma_burst_size; void* num_wds_entries; void* tx_dbg_log_size; void* mcast2ucast_mode; void* num_mcast_table_elems; void* num_mcast_groups; void* roam_offload_max_ap_profiles; void* roam_offload_max_vdev; void* bmiss_offload_max_vdev; void* scan_max_pending_reqs; void* rx_decap_mode; void* rx_timeout_pri_bk; void* rx_timeout_pri_be; void* rx_timeout_pri_vi; void* rx_timeout_pri_vo; void* rx_chain_mask; void* tx_chain_mask; void* ast_skid_limit; void* num_tids; void* num_peer_keys; void* num_offload_reorder_bufs; void* num_offload_peers; void* num_peers; void* num_vdevs; } ;
struct wmi_init_cmd {int mem_chunks; int resource_config; } ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;
 int FUNC_4 (struct ath10k*,int *) ;
 int FUNC_5 (int *,struct wmi_resource_config*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct ath10k *VAR_29)
{
 struct wmi_init_cmd *VAR_30;
 struct sk_buff *VAR_31;
 struct wmi_resource_config VAR_32 = {};
 u32 VAR_33, VAR_34;

 VAR_32.num_vdevs = FUNC_1(VAR_17);
 VAR_32.num_peers = FUNC_1(VAR_14);
 VAR_32.num_offload_peers = FUNC_1(VAR_12);

 VAR_32.num_offload_reorder_bufs =
  FUNC_1(VAR_13);

 VAR_32.num_peer_keys = FUNC_1(VAR_15);
 VAR_32.num_tids = FUNC_1(VAR_16);
 VAR_32.ast_skid_limit = FUNC_1(VAR_2);
 VAR_32.tx_chain_mask = FUNC_1(VAR_26);
 VAR_32.rx_chain_mask = FUNC_1(VAR_21);
 VAR_32.rx_timeout_pri_vo = FUNC_1(VAR_24);
 VAR_32.rx_timeout_pri_vi = FUNC_1(VAR_24);
 VAR_32.rx_timeout_pri_be = FUNC_1(VAR_24);
 VAR_32.rx_timeout_pri_bk = FUNC_1(VAR_23);
 VAR_32.rx_decap_mode = FUNC_1(VAR_29->wmi.rx_decap_mode);
 VAR_32.scan_max_pending_reqs =
  FUNC_1(VAR_25);

 VAR_32.bmiss_offload_max_vdev =
  FUNC_1(VAR_3);

 VAR_32.roam_offload_max_vdev =
  FUNC_1(VAR_20);

 VAR_32.roam_offload_max_ap_profiles =
  FUNC_1(VAR_19);

 VAR_32.num_mcast_groups = FUNC_1(VAR_9);
 VAR_32.num_mcast_table_elems =
  FUNC_1(VAR_10);

 VAR_32.mcast2ucast_mode = FUNC_1(VAR_8);
 VAR_32.tx_dbg_log_size = FUNC_1(VAR_27);
 VAR_32.num_wds_entries = FUNC_1(VAR_18);
 VAR_32.dma_burst_size = FUNC_1(VAR_4);
 VAR_32.mac_aggr_delim = FUNC_1(VAR_6);

 VAR_34 = VAR_22;
 VAR_32.rx_skip_defrag_timeout_dup_detection_check = FUNC_1(VAR_34);

 VAR_32.vow_config = FUNC_1(VAR_28);

 VAR_32.gtk_offload_max_vdev =
  FUNC_1(VAR_5);

 VAR_32.num_msdu_desc = FUNC_1(VAR_11);
 VAR_32.max_frag_entries = FUNC_1(VAR_7);

 VAR_33 = sizeof(*VAR_30) +
       (sizeof(struct host_memory_chunk) * VAR_29->wmi.num_mem_chunks);

 VAR_31 = FUNC_3(VAR_29, VAR_33);
 if (!VAR_31)
  return FUNC_0(-VAR_1);

 VAR_30 = (struct wmi_init_cmd *)VAR_31->data;

 FUNC_5(&VAR_30->resource_config, &VAR_32, sizeof(VAR_32));
 FUNC_4(VAR_29, &VAR_30->mem_chunks);

 FUNC_2(VAR_29, VAR_0, "wmi init\n");
 return VAR_31;
}
