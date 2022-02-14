
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_4__ {int num_vports; TYPE_1__* wfq_data; struct init_qm_vport_params* qm_vport_params; } ;
struct qed_hwfn {TYPE_2__ qm_info; } ;
struct init_qm_vport_params {int vport_wfq; int first_tx_pq_id; } ;
struct TYPE_3__ {int min_speed; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_1,
          struct qed_ptt *VAR_2,
          u32 VAR_3)
{
 struct init_qm_vport_params *VAR_4;
 int VAR_5;

 VAR_4 = VAR_1->qm_info.qm_vport_params;

 for (VAR_5 = 0; VAR_5 < VAR_1->qm_info.num_vports; VAR_5++) {
  u32 VAR_6 = VAR_1->qm_info.wfq_data[VAR_5].min_speed;

  VAR_4[VAR_5].vport_wfq = (VAR_6 * VAR_0) /
      VAR_3;
  FUNC_0(VAR_1, VAR_2,
       VAR_4[VAR_5].first_tx_pq_id,
       VAR_4[VAR_5].vport_wfq);
 }
}
