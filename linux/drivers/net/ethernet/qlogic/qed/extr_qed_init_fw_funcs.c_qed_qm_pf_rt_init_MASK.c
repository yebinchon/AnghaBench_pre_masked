
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct qed_qm_pf_rt_init_params {size_t num_vports; int link_speed; int start_vport; int pf_rl; int pf_id; scalar_t__ pf_wfq; scalar_t__ num_tids; scalar_t__ num_pf_cids; int is_pf_loading; struct init_qm_vport_params* vport_params; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct init_qm_vport_params {int * first_tx_pq_id; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct qed_hwfn*,int ,int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,int ,int ) ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,struct qed_qm_pf_rt_init_params*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,struct qed_qm_pf_rt_init_params*,int) ;
 scalar_t__ FUNC_5 (struct qed_hwfn*,size_t,struct init_qm_vport_params*) ;
 scalar_t__ FUNC_6 (struct qed_hwfn*,int ,size_t,int ,struct init_qm_vport_params*) ;

int FUNC_7(struct qed_hwfn *VAR_3,
        struct qed_ptt *VAR_4,
        struct qed_qm_pf_rt_init_params *VAR_5)
{
 struct init_qm_vport_params *VAR_6 = VAR_5->vport_params;
 u32 VAR_7 = FUNC_0(VAR_5->num_pf_cids +
            VAR_5->num_tids) *
     VAR_2;
 u8 VAR_8, VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_5->num_vports; VAR_9++)
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   VAR_6[VAR_9].first_tx_pq_id[VAR_8] = VAR_1;


 FUNC_1(VAR_3,
     VAR_5->pf_id,
     VAR_5->is_pf_loading, VAR_5->num_pf_cids,
     VAR_5->num_tids, 0);


 FUNC_4(VAR_3, VAR_4, VAR_5, VAR_7);


 if (VAR_5->pf_wfq)
  if (FUNC_3(VAR_3, VAR_5))
   return -1;


 if (FUNC_2(VAR_3, VAR_5->pf_id, VAR_5->pf_rl))
  return -1;


 if (FUNC_5(VAR_3, VAR_5->num_vports, VAR_6))
  return -1;


 if (FUNC_6(VAR_3, VAR_5->start_vport,
     VAR_5->num_vports, VAR_5->link_speed,
     VAR_6))
  return -1;

 return 0;
}
