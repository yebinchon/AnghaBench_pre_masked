
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vf_op_params ;
struct TYPE_6__ {int update_ipv6; int update_ipv4; int tpa_mode; int sge_pause_thr_low; int sge_pause_thr_high; int sge_buff_size; int max_tpa_queues; int max_sges_for_packet; int max_agg_size; int dont_verify_thr; int complete_on_both_clients; } ;
struct vfpf_tpa_tlv {TYPE_3__ tpa_client_info; } ;
struct bnx2x_virtf {int dummy; } ;
struct bnx2x_vf_mbx {TYPE_2__* msg; } ;
struct bnx2x_queue_update_tpa_params {int update_ipv6; int update_ipv4; int tpa_mode; int sge_pause_thr_low; int sge_pause_thr_high; int sge_buff_sz; int max_tpa_queues; int max_sges_pkt; int max_agg_sz; int dont_verify_thr; int complete_on_both_clients; } ;
struct bnx2x {int dummy; } ;
struct TYPE_4__ {struct vfpf_tpa_tlv update_tpa; } ;
struct TYPE_5__ {TYPE_1__ req; } ;


 scalar_t__ FUNC_0 (struct bnx2x*,struct vfpf_tpa_tlv*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_virtf*,int) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,struct vfpf_tpa_tlv*,struct bnx2x_queue_update_tpa_params*) ;
 int FUNC_3 (struct bnx2x_queue_update_tpa_params*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_0, struct bnx2x_virtf *VAR_1,
        struct bnx2x_vf_mbx *VAR_2)
{
 struct bnx2x_queue_update_tpa_params VAR_3;
 struct vfpf_tpa_tlv *VAR_4 = &VAR_2->msg->req.update_tpa;
 int VAR_5 = 0;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));

 if (FUNC_0(VAR_0, VAR_4))
  goto mbx_resp;

 VAR_3.complete_on_both_clients =
  VAR_4->tpa_client_info.complete_on_both_clients;
 VAR_3.dont_verify_thr =
  VAR_4->tpa_client_info.dont_verify_thr;
 VAR_3.max_agg_sz =
  VAR_4->tpa_client_info.max_agg_size;
 VAR_3.max_sges_pkt =
  VAR_4->tpa_client_info.max_sges_for_packet;
 VAR_3.max_tpa_queues =
  VAR_4->tpa_client_info.max_tpa_queues;
 VAR_3.sge_buff_sz =
  VAR_4->tpa_client_info.sge_buff_size;
 VAR_3.sge_pause_thr_high =
  VAR_4->tpa_client_info.sge_pause_thr_high;
 VAR_3.sge_pause_thr_low =
  VAR_4->tpa_client_info.sge_pause_thr_low;
 VAR_3.tpa_mode =
  VAR_4->tpa_client_info.tpa_mode;
 VAR_3.update_ipv4 =
  VAR_4->tpa_client_info.update_ipv4;
 VAR_3.update_ipv6 =
  VAR_4->tpa_client_info.update_ipv6;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_4, &VAR_3);

mbx_resp:
 FUNC_1(VAR_0, VAR_1, VAR_5);
}
