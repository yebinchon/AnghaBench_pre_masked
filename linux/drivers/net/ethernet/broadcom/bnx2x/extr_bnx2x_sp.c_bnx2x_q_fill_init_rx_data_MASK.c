
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* hi; void* lo; } ;
struct TYPE_5__ {void* hi; void* lo; } ;
struct TYPE_4__ {void* hi; void* lo; } ;
struct client_init_rx_data {int tpa_en; int enable_dynamic_hc; int inner_vlan_removal_enable_flg; int outer_vlan_removal_enable_flg; int is_leading_rss; int is_approx_mcast; int silent_vlan_removal_flg; void* silent_vlan_mask; void* silent_vlan_value; int rss_engine_id; int approx_mcast_engine_id; TYPE_3__ cqe_page_base; TYPE_2__ sge_page_base; TYPE_1__ bd_page_base; void* sge_buff_size; void* max_bytes_on_bd; int max_tpa_queues; int rx_sb_index_number; int status_block_id; scalar_t__ drop_udp_cs_err_flg; scalar_t__ drop_ttl0_flg; scalar_t__ drop_tcp_cs_err_flg; scalar_t__ drop_ip_cs_err_flg; void* state; void* max_agg_size; int client_qzone_id; int max_sges_for_packet; int cache_line_alignment_log_size; scalar_t__ vmqueue_mode_en_flg; } ;
struct bnx2x_rxq_setup_params {int tpa_agg_sz; int buf_sz; int sge_buf_sz; int silent_removal_value; int silent_removal_mask; int rss_engine_id; int mcast_engine_id; int rcq_map; int sge_map; int dscr_map; int max_tpa_queues; int sb_cq_index; int fw_sb_id; int cl_qzone_id; int max_sges_pkt; int cache_line_log; } ;
struct bnx2x_queue_sp_obj {int dummy; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_5(struct bnx2x_queue_sp_obj *VAR_12,
    struct bnx2x_rxq_setup_params *VAR_13,
    struct client_init_rx_data *VAR_14,
    unsigned long *VAR_15)
{
 VAR_14->tpa_en = FUNC_4(VAR_5, VAR_15) *
    VAR_9;
 VAR_14->tpa_en |= FUNC_4(VAR_6, VAR_15) *
    VAR_10;
 VAR_14->vmqueue_mode_en_flg = 0;

 VAR_14->cache_line_alignment_log_size =
  VAR_13->cache_line_log;
 VAR_14->enable_dynamic_hc =
  FUNC_4(VAR_0, VAR_15);
 VAR_14->max_sges_for_packet = VAR_13->max_sges_pkt;
 VAR_14->client_qzone_id = VAR_13->cl_qzone_id;
 VAR_14->max_agg_size = FUNC_2(VAR_13->tpa_agg_sz);


 VAR_14->state = FUNC_2(VAR_11 |
         VAR_8);


 VAR_14->drop_ip_cs_err_flg = 0;
 VAR_14->drop_tcp_cs_err_flg = 0;
 VAR_14->drop_ttl0_flg = 0;
 VAR_14->drop_udp_cs_err_flg = 0;
 VAR_14->inner_vlan_removal_enable_flg =
  FUNC_4(VAR_7, VAR_15);
 VAR_14->outer_vlan_removal_enable_flg =
  FUNC_4(VAR_3, VAR_15);
 VAR_14->status_block_id = VAR_13->fw_sb_id;
 VAR_14->rx_sb_index_number = VAR_13->sb_cq_index;
 VAR_14->max_tpa_queues = VAR_13->max_tpa_queues;
 VAR_14->max_bytes_on_bd = FUNC_2(VAR_13->buf_sz);
 VAR_14->sge_buff_size = FUNC_2(VAR_13->sge_buf_sz);
 VAR_14->bd_page_base.lo =
  FUNC_3(FUNC_1(VAR_13->dscr_map));
 VAR_14->bd_page_base.hi =
  FUNC_3(FUNC_0(VAR_13->dscr_map));
 VAR_14->sge_page_base.lo =
  FUNC_3(FUNC_1(VAR_13->sge_map));
 VAR_14->sge_page_base.hi =
  FUNC_3(FUNC_0(VAR_13->sge_map));
 VAR_14->cqe_page_base.lo =
  FUNC_3(FUNC_1(VAR_13->rcq_map));
 VAR_14->cqe_page_base.hi =
  FUNC_3(FUNC_0(VAR_13->rcq_map));
 VAR_14->is_leading_rss = FUNC_4(VAR_1, VAR_15);

 if (FUNC_4(VAR_2, VAR_15)) {
  VAR_14->approx_mcast_engine_id = VAR_13->mcast_engine_id;
  VAR_14->is_approx_mcast = 1;
 }

 VAR_14->rss_engine_id = VAR_13->rss_engine_id;


 VAR_14->silent_vlan_removal_flg =
  FUNC_4(VAR_4, VAR_15);
 VAR_14->silent_vlan_value =
  FUNC_2(VAR_13->silent_removal_value);
 VAR_14->silent_vlan_mask =
  FUNC_2(VAR_13->silent_removal_mask);
}
