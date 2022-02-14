
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_rdma_qp {int icid; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,...) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;
 int VAR_0 ;
 int FUNC_2 (struct qed_rdma_qp*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_rdma_qp*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_rdma_qp*) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, struct qed_rdma_qp *VAR_2)
{
 struct qed_hwfn *VAR_3 = (struct qed_hwfn *)VAR_1;
 int VAR_4 = 0;

 FUNC_0(VAR_3, VAR_0, "icid = %08x\n", VAR_2->icid);

 if (FUNC_1(VAR_3))
  VAR_4 = FUNC_3(VAR_3, VAR_2);
 else
  VAR_4 = FUNC_4(VAR_3, VAR_2);


 FUNC_2(VAR_2);

 FUNC_0(VAR_3, VAR_0, "QP destroyed\n");
 return VAR_4;
}
