
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_rdma_start_in_params {int dummy; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;
 int VAR_0 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_rdma_start_in_params*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_rdma_start_in_params*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_rdma_start_in_params*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_6 (struct qed_hwfn*) ;
 int FUNC_7 (struct qed_hwfn*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_rdma_start_in_params*,struct qed_ptt*) ;
 int FUNC_9 (struct qed_hwfn*) ;

__attribute__((used)) static int FUNC_10(struct qed_hwfn *VAR_1,
     struct qed_ptt *VAR_2,
     struct qed_rdma_start_in_params *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1, VAR_0, "RDMA setup\n");

 FUNC_3(VAR_1, VAR_3);
 FUNC_6(VAR_1);
 FUNC_4(VAR_1, VAR_3);

 VAR_4 = FUNC_7(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 if (FUNC_1(VAR_1)) {
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  if (VAR_4)
   return VAR_4;
 } else {
  VAR_4 = FUNC_9(VAR_1);
  if (VAR_4)
   return VAR_4;
 }

 return FUNC_8(VAR_1, VAR_3, VAR_2);
}
