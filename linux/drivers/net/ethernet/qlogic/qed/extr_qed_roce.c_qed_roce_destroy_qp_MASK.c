
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_rdma_qp {scalar_t__ cur_state; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_rdma_qp*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_rdma_qp*,int *) ;

int FUNC_3(struct qed_hwfn *VAR_4, struct qed_rdma_qp *VAR_5)
{
 u32 VAR_6;
 int VAR_7;


 if ((VAR_5->cur_state != VAR_3) &&
     (VAR_5->cur_state != VAR_1) &&
     (VAR_5->cur_state != VAR_2)) {
  FUNC_0(VAR_4,
     "QP must be in error, reset or init state before destroying it\n");
  return -VAR_0;
 }

 if (VAR_5->cur_state != VAR_3) {
  VAR_7 = FUNC_2(VAR_4, VAR_5,
            &VAR_6);
  if (VAR_7)
   return VAR_7;


  VAR_7 = FUNC_1(VAR_4, VAR_5);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
