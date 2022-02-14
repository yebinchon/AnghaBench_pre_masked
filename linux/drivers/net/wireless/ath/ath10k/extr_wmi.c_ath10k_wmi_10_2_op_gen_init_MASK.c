
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wmi_resource_config_10x {void* max_frag_entries; void* num_msdu_desc; void* vow_config; void* rx_skip_defrag_timeout_dup_detection_check; void* mac_aggr_delim; void* dma_burst_size; void* num_wds_entries; void* tx_dbg_log_size; void* mcast2ucast_mode; void* num_mcast_table_elems; void* num_mcast_groups; void* roam_offload_max_ap_profiles; void* roam_offload_max_vdev; void* bmiss_offload_max_vdev; void* scan_max_pending_reqs; void* rx_decap_mode; void* rx_timeout_pri_bk; void* rx_timeout_pri_be; void* rx_timeout_pri_vi; void* rx_timeout_pri_vo; void* rx_chain_mask; void* tx_chain_mask; void* ast_skid_limit; void* num_tids; void* num_peers; void* num_peer_keys; void* num_vdevs; } ;
struct TYPE_4__ {int common; void* feature_mask; } ;
struct wmi_init_cmd_10_2 {int mem_chunks; TYPE_2__ resource_config; } ;
struct sk_buff {scalar_t__ data; } ;
struct host_memory_chunk {int dummy; } ;
struct TYPE_3__ {int rx_decap_mode; int num_mem_chunks; int * svc_map; } ;
struct ath10k {TYPE_1__ wmi; int dev_flags; } ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
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
 int VAR_34 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 scalar_t__ FUNC_3 (struct ath10k*) ;
 struct sk_buff* FUNC_4 (struct ath10k*,int) ;
 int FUNC_5 (struct ath10k*,int *) ;
 int FUNC_6 (int *,struct wmi_resource_config_10x*,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct ath10k *VAR_35)
{
 struct wmi_init_cmd_10_2 *VAR_36;
 struct sk_buff *VAR_37;
 struct wmi_resource_config_10x VAR_38 = {};
 u32 VAR_39, VAR_40, VAR_41;

 VAR_38.num_vdevs = FUNC_1(VAR_14);
 VAR_38.num_peer_keys = FUNC_1(VAR_12);

 if (FUNC_3(VAR_35)) {
  VAR_38.num_peers = FUNC_1(VAR_25);
  VAR_38.num_tids = FUNC_1(VAR_26);
 } else {
  VAR_38.num_peers = FUNC_1(VAR_11);
  VAR_38.num_tids = FUNC_1(VAR_13);
 }

 VAR_38.ast_skid_limit = FUNC_1(VAR_3);
 VAR_38.tx_chain_mask = FUNC_1(VAR_23);
 VAR_38.rx_chain_mask = FUNC_1(VAR_18);
 VAR_38.rx_timeout_pri_vo = FUNC_1(VAR_21);
 VAR_38.rx_timeout_pri_vi = FUNC_1(VAR_21);
 VAR_38.rx_timeout_pri_be = FUNC_1(VAR_21);
 VAR_38.rx_timeout_pri_bk = FUNC_1(VAR_20);
 VAR_38.rx_decap_mode = FUNC_1(VAR_35->wmi.rx_decap_mode);

 VAR_38.scan_max_pending_reqs =
  FUNC_1(VAR_22);

 VAR_38.bmiss_offload_max_vdev =
  FUNC_1(VAR_4);

 VAR_38.roam_offload_max_vdev =
  FUNC_1(VAR_17);

 VAR_38.roam_offload_max_ap_profiles =
  FUNC_1(VAR_16);

 VAR_38.num_mcast_groups = FUNC_1(VAR_8);
 VAR_38.num_mcast_table_elems =
  FUNC_1(VAR_9);

 VAR_38.mcast2ucast_mode = FUNC_1(VAR_7);
 VAR_38.tx_dbg_log_size = FUNC_1(VAR_24);
 VAR_38.num_wds_entries = FUNC_1(VAR_15);
 VAR_38.dma_burst_size = FUNC_1(VAR_28);
 VAR_38.mac_aggr_delim = FUNC_1(VAR_5);

 VAR_40 = VAR_19;
 VAR_38.rx_skip_defrag_timeout_dup_detection_check = FUNC_1(VAR_40);

 VAR_38.vow_config = FUNC_1(VAR_27);

 VAR_38.num_msdu_desc = FUNC_1(VAR_10);
 VAR_38.max_frag_entries = FUNC_1(VAR_6);

 VAR_39 = sizeof(*VAR_36) +
       (sizeof(struct host_memory_chunk) * VAR_35->wmi.num_mem_chunks);

 VAR_37 = FUNC_4(VAR_35, VAR_39);
 if (!VAR_37)
  return FUNC_0(-VAR_2);

 VAR_36 = (struct wmi_init_cmd_10_2 *)VAR_37->data;

 VAR_41 = VAR_32;

 if (FUNC_7(VAR_1, &VAR_35->dev_flags) &&
     FUNC_7(VAR_34, VAR_35->wmi.svc_map))
  VAR_41 |= VAR_30;

 if (FUNC_3(VAR_35))
  VAR_41 |= VAR_31;

 if (FUNC_7(VAR_33, VAR_35->wmi.svc_map))
  VAR_41 |= VAR_29;

 VAR_36->resource_config.feature_mask = FUNC_1(VAR_41);

 FUNC_6(&VAR_36->resource_config.common, &VAR_38, sizeof(VAR_38));
 FUNC_5(VAR_35, &VAR_36->mem_chunks);

 FUNC_2(VAR_35, VAR_0, "wmi init 10.2\n");
 return VAR_37;
}
