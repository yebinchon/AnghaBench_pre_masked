
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_rdma_start_in_params {int desired_cnq; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int active; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qed_ptt* FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,struct qed_rdma_start_in_params*) ;

__attribute__((used)) static int FUNC_6(void *VAR_2,
     struct qed_rdma_start_in_params *VAR_3)
{
 struct qed_hwfn *VAR_4 = (struct qed_hwfn *)VAR_2;
 struct qed_ptt *VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_0(VAR_4, VAR_1,
     "desired_cnq = %08x\n", VAR_3->desired_cnq);

 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5)
  goto err;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  goto err1;

 VAR_6 = FUNC_5(VAR_4, VAR_5, VAR_3);
 if (VAR_6)
  goto err2;

 FUNC_2(VAR_4, VAR_5);
 VAR_4->p_rdma_info->active = 1;

 return VAR_6;

err2:
 FUNC_4(VAR_4);
err1:
 FUNC_2(VAR_4, VAR_5);
err:
 FUNC_0(VAR_4, VAR_1, "RDMA start - error, rc = %d\n", VAR_6);
 return VAR_6;
}
