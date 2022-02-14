
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vfpf_vport_update_sge_tpa_tlv {int update_sge_tpa_flags; int sge_tpa_flags; int max_buffers_per_cqe; int tpa_min_size_to_cont; int tpa_min_size_to_start; int tpa_max_size; int tpa_max_aggs_num; } ;
struct qed_vf_info {int dummy; } ;
struct qed_sp_vport_update_params {struct qed_sge_tpa_params* sge_tpa_params; } ;
struct qed_sge_tpa_params {int update_tpa_en_flg; int update_tpa_param_flg; int tpa_ipv4_en_flg; int tpa_ipv6_en_flg; int tpa_pkt_split_flg; int tpa_hdr_data_split_flg; int tpa_gro_consistent_flg; int max_buffers_per_cqe; int tpa_min_size_to_cont; int tpa_min_size_to_start; int tpa_max_size; int tpa_max_aggs_num; } ;
struct qed_iov_vf_mbx {int req_virt; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct qed_sge_tpa_params*,int ,int) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct qed_hwfn *VAR_9,
    struct qed_vf_info *VAR_10,
    struct qed_sp_vport_update_params *VAR_11,
    struct qed_sge_tpa_params *VAR_12,
    struct qed_iov_vf_mbx *VAR_13, u16 *VAR_14)
{
 struct vfpf_vport_update_sge_tpa_tlv *VAR_15;
 u16 VAR_16 = VAR_0;

 VAR_15 = (struct vfpf_vport_update_sge_tpa_tlv *)
     FUNC_1(VAR_9, VAR_13->req_virt, VAR_16);

 if (!VAR_15) {
  VAR_11->sge_tpa_params = ((void*)0);
  return;
 }

 FUNC_0(VAR_12, 0, sizeof(struct qed_sge_tpa_params));

 VAR_12->update_tpa_en_flg =
     !!(VAR_15->update_sge_tpa_flags & VAR_7);
 VAR_12->update_tpa_param_flg =
     !!(VAR_15->update_sge_tpa_flags &
  VAR_8);

 VAR_12->tpa_ipv4_en_flg =
     !!(VAR_15->sge_tpa_flags & VAR_4);
 VAR_12->tpa_ipv6_en_flg =
     !!(VAR_15->sge_tpa_flags & VAR_5);
 VAR_12->tpa_pkt_split_flg =
     !!(VAR_15->sge_tpa_flags & VAR_6);
 VAR_12->tpa_hdr_data_split_flg =
     !!(VAR_15->sge_tpa_flags & VAR_3);
 VAR_12->tpa_gro_consistent_flg =
     !!(VAR_15->sge_tpa_flags & VAR_2);

 VAR_12->tpa_max_aggs_num = VAR_15->tpa_max_aggs_num;
 VAR_12->tpa_max_size = VAR_15->tpa_max_size;
 VAR_12->tpa_min_size_to_start = VAR_15->tpa_min_size_to_start;
 VAR_12->tpa_min_size_to_cont = VAR_15->tpa_min_size_to_cont;
 VAR_12->max_buffers_per_cqe = VAR_15->max_buffers_per_cqe;

 VAR_11->sge_tpa_params = VAR_12;

 *VAR_14 |= 1 << VAR_1;
}
