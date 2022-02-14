
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ update_tpa_param_flg; scalar_t__ update_tpa_en_flg; } ;
struct eth_vport_tpa_param {int tpa_min_size_to_cont; int tpa_min_size_to_start; int tpa_max_size; int tpa_max_aggs_num; int tpa_gro_consistent_flg; int tpa_hdr_data_split_flg; int tpa_pkt_split_flg; int max_buff_num; int tpa_ipv6_tunn_en_flg; int tpa_ipv4_tunn_en_flg; int tpa_ipv6_en_flg; int tpa_ipv4_en_flg; } ;
struct vport_update_ramrod_data {TYPE_1__ common; struct eth_vport_tpa_param tpa_param; } ;
struct qed_sge_tpa_params {int tpa_min_size_to_cont; int tpa_min_size_to_start; int tpa_max_size; int tpa_max_aggs_num; int tpa_gro_consistent_flg; int tpa_hdr_data_split_flg; int tpa_pkt_split_flg; int max_buffers_per_cqe; scalar_t__ update_tpa_param_flg; int tpa_ipv6_tunn_en_flg; int tpa_ipv4_tunn_en_flg; int tpa_ipv6_en_flg; int tpa_ipv4_en_flg; scalar_t__ update_tpa_en_flg; } ;
struct qed_hwfn {int dummy; } ;



__attribute__((used)) static void
FUNC_0(struct qed_hwfn *VAR_0,
       struct vport_update_ramrod_data *VAR_1,
       struct qed_sge_tpa_params *VAR_2)
{
 struct eth_vport_tpa_param *VAR_3;

 if (!VAR_2) {
  VAR_1->common.update_tpa_param_flg = 0;
  VAR_1->common.update_tpa_en_flg = 0;
  VAR_1->common.update_tpa_param_flg = 0;
  return;
 }

 VAR_1->common.update_tpa_en_flg = VAR_2->update_tpa_en_flg;
 VAR_3 = &VAR_1->tpa_param;
 VAR_3->tpa_ipv4_en_flg = VAR_2->tpa_ipv4_en_flg;
 VAR_3->tpa_ipv6_en_flg = VAR_2->tpa_ipv6_en_flg;
 VAR_3->tpa_ipv4_tunn_en_flg = VAR_2->tpa_ipv4_tunn_en_flg;
 VAR_3->tpa_ipv6_tunn_en_flg = VAR_2->tpa_ipv6_tunn_en_flg;

 VAR_1->common.update_tpa_param_flg = VAR_2->update_tpa_param_flg;
 VAR_3->max_buff_num = VAR_2->max_buffers_per_cqe;
 VAR_3->tpa_pkt_split_flg = VAR_2->tpa_pkt_split_flg;
 VAR_3->tpa_hdr_data_split_flg = VAR_2->tpa_hdr_data_split_flg;
 VAR_3->tpa_gro_consistent_flg = VAR_2->tpa_gro_consistent_flg;
 VAR_3->tpa_max_aggs_num = VAR_2->tpa_max_aggs_num;
 VAR_3->tpa_max_size = VAR_2->tpa_max_size;
 VAR_3->tpa_min_size_to_start = VAR_2->tpa_min_size_to_start;
 VAR_3->tpa_min_size_to_cont = VAR_2->tpa_min_size_to_cont;
}
