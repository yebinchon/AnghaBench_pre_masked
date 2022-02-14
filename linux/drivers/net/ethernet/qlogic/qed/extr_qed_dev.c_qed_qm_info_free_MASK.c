
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_qm_info {int * wfq_data; int * qm_port_params; int * qm_vport_params; int * qm_pq_params; } ;
struct qed_hwfn {struct qed_qm_info qm_info; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_0)
{
 struct qed_qm_info *VAR_1 = &VAR_0->qm_info;

 FUNC_0(VAR_1->qm_pq_params);
 VAR_1->qm_pq_params = ((void*)0);
 FUNC_0(VAR_1->qm_vport_params);
 VAR_1->qm_vport_params = ((void*)0);
 FUNC_0(VAR_1->qm_port_params);
 VAR_1->qm_port_params = ((void*)0);
 FUNC_0(VAR_1->wfq_data);
 VAR_1->wfq_data = ((void*)0);
}
