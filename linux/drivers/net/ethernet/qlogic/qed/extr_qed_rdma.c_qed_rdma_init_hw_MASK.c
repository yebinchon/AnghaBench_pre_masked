
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {int b_rdma_enabled_in_prs; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;
 int VAR_0 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_1, struct qed_ptt *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(VAR_1, VAR_0, "Initializing HW\n");
 VAR_1->b_rdma_enabled_in_prs = 0;

 if (FUNC_1(VAR_1))
  FUNC_2(VAR_1, VAR_2);
 else
  VAR_3 = FUNC_3(VAR_1, VAR_2);

 return VAR_3;
}
