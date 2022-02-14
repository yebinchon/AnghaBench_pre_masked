
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_qm_info {scalar_t__ first_rl_pq; scalar_t__ first_mcos_pq; scalar_t__ first_vf_pq; scalar_t__ num_vf_pqs; scalar_t__ num_pf_rls; scalar_t__ num_vports; scalar_t__ num_pqs; } ;
struct qed_hwfn {struct qed_qm_info qm_info; } ;



__attribute__((used)) static void FUNC_0(struct qed_hwfn *VAR_0)
{
 struct qed_qm_info *VAR_1 = &VAR_0->qm_info;

 VAR_1->num_pqs = 0;
 VAR_1->num_vports = 0;
 VAR_1->num_pf_rls = 0;
 VAR_1->num_vf_pqs = 0;
 VAR_1->first_vf_pq = 0;
 VAR_1->first_mcos_pq = 0;
 VAR_1->first_rl_pq = 0;
}
