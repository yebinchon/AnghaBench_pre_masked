
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct qed_qm_info {TYPE_1__* qm_vport_params; } ;
struct qed_hwfn {struct qed_qm_info qm_info; } ;
struct TYPE_2__ {int vport_wfq; } ;


 size_t FUNC_0 (struct qed_hwfn*) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_0)
{
 struct qed_qm_info *VAR_1 = &VAR_0->qm_info;
 u8 VAR_2;


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  VAR_1->qm_vport_params[VAR_2].vport_wfq = 1;
}
