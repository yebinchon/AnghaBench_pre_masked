
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_qm_pf_rt_init_params {int is_pf_loading; int vport_params; int pq_params; int link_speed; int pf_rl; int pf_wfq; int num_vports; int start_vport; scalar_t__ num_vf_pqs; scalar_t__ num_pf_pqs; int start_pq; int tids; int num_tids; int vf_cids; int num_vf_cids; int cids; int num_pf_cids; int max_phys_tcs_per_port; int pf_id; int port_id; } ;
struct qed_qm_info {int qm_vport_params; int qm_pq_params; int pf_rl; int pf_wfq; int num_vports; int start_vport; scalar_t__ num_vf_pqs; scalar_t__ num_pqs; int start_pq; int max_phys_tcs_per_port; } ;
struct qed_qm_iids {int is_pf_loading; int vport_params; int pq_params; int link_speed; int pf_rl; int pf_wfq; int num_vports; int start_vport; scalar_t__ num_vf_pqs; scalar_t__ num_pf_pqs; int start_pq; int tids; int num_tids; int vf_cids; int num_vf_cids; int cids; int num_pf_cids; int max_phys_tcs_per_port; int pf_id; int port_id; } ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_link_state {int speed; } ;
struct qed_hwfn {int rel_pf_id; int port_id; int cdev; struct qed_qm_info qm_info; } ;
typedef int params ;
typedef int iids ;
struct TYPE_4__ {TYPE_1__* mcp_info; } ;
struct TYPE_3__ {struct qed_mcp_link_state link_output; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct qed_qm_pf_rt_init_params*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_qm_pf_rt_init_params*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct qed_qm_pf_rt_init_params*) ;

void FUNC_4(struct qed_hwfn *VAR_0,
      struct qed_ptt *VAR_1, bool VAR_2)
{
 struct qed_qm_info *VAR_3 = &VAR_0->qm_info;
 struct qed_qm_pf_rt_init_params VAR_4;
 struct qed_mcp_link_state *VAR_5;
 struct qed_qm_iids VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 FUNC_2(VAR_0, &VAR_6);

 VAR_5 = &FUNC_0(VAR_0->cdev)->mcp_info->link_output;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.port_id = VAR_0->port_id;
 VAR_4.pf_id = VAR_0->rel_pf_id;
 VAR_4.max_phys_tcs_per_port = VAR_3->max_phys_tcs_per_port;
 VAR_4.is_pf_loading = VAR_2;
 VAR_4.num_pf_cids = VAR_6.cids;
 VAR_4.num_vf_cids = VAR_6.vf_cids;
 VAR_4.num_tids = VAR_6.tids;
 VAR_4.start_pq = VAR_3->start_pq;
 VAR_4.num_pf_pqs = VAR_3->num_pqs - VAR_3->num_vf_pqs;
 VAR_4.num_vf_pqs = VAR_3->num_vf_pqs;
 VAR_4.start_vport = VAR_3->start_vport;
 VAR_4.num_vports = VAR_3->num_vports;
 VAR_4.pf_wfq = VAR_3->pf_wfq;
 VAR_4.pf_rl = VAR_3->pf_rl;
 VAR_4.link_speed = VAR_5->speed;
 VAR_4.pq_params = VAR_3->qm_pq_params;
 VAR_4.vport_params = VAR_3->qm_vport_params;

 FUNC_3(VAR_0, VAR_1, &VAR_4);
}
