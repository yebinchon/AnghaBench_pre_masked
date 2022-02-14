
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {int b_rdma_enabled_in_prs; int rdma_prs_search_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

void FUNC_1(struct qed_hwfn *VAR_1, struct qed_ptt *VAR_2)
{
 VAR_1->rdma_prs_search_reg = VAR_0;
 FUNC_0(VAR_1, VAR_2, VAR_1->rdma_prs_search_reg, 1);
 VAR_1->b_rdma_enabled_in_prs = 1;
}
