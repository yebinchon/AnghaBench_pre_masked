
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_ptt {int dummy; } ;
struct qed_hwfn {int rdma_prs_search_reg; scalar_t__ b_rdma_enabled_in_prs; TYPE_1__* p_rdma_info; int cdev; } ;
struct TYPE_2__ {scalar_t__ active; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 struct qed_ptt* FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

int FUNC_4(struct qed_hwfn *VAR_2)
{
 struct qed_ptt *VAR_3;

 if (FUNC_0(VAR_2->cdev))
  return 0;

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 if (VAR_2->p_rdma_info &&
     VAR_2->p_rdma_info->active && VAR_2->b_rdma_enabled_in_prs)
  FUNC_3(VAR_2, VAR_3, VAR_2->rdma_prs_search_reg, 0x1);


 FUNC_3(VAR_2, VAR_3, VAR_1, 0x0);
 FUNC_2(VAR_2, VAR_3);

 return 0;
}
