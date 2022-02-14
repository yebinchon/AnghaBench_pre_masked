
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_2__ {int num_vports; struct init_qm_vport_params* qm_vport_params; } ;
struct qed_hwfn {TYPE_1__ qm_info; } ;
struct init_qm_vport_params {int vport_wfq; int first_tx_pq_id; } ;


 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,int ) ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_0,
        struct qed_ptt *VAR_1,
        u32 VAR_2)
{
 struct init_qm_vport_params *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0->qm_info.qm_vport_params;

 for (VAR_4 = 0; VAR_4 < VAR_0->qm_info.num_vports; VAR_4++) {
  FUNC_1(VAR_0, VAR_2);
  FUNC_0(VAR_0, VAR_1,
       VAR_3[VAR_4].first_tx_pq_id,
       VAR_3[VAR_4].vport_wfq);
 }
}
