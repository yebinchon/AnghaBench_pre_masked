
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_rdma_qp {scalar_t__ cur_state; int cq_prod; } ;
struct qed_rdma_modify_qp_in_params {int modify_flags; } ;
struct qed_hwfn {int dummy; } ;
typedef enum qed_roce_qp_state { ____Placeholder_qed_roce_qp_state } qed_roce_qp_state ;


 int FUNC_0 (struct qed_hwfn*,int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_rdma_qp*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_rdma_qp*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_rdma_qp*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_rdma_qp*,int *) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_rdma_qp*,int,int,int ) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_rdma_qp*,int,int ) ;

int FUNC_7(struct qed_hwfn *VAR_7,
         struct qed_rdma_qp *VAR_8,
         enum qed_roce_qp_state VAR_9,
         struct qed_rdma_modify_qp_in_params *VAR_10)
{
 int VAR_11 = 0;




 if (((VAR_9 == VAR_2) ||
      (VAR_9 == VAR_3)) &&
     (VAR_8->cur_state == VAR_4)) {

  VAR_11 = FUNC_2(VAR_7, VAR_8);
  return VAR_11;
 } else if ((VAR_9 == VAR_4) &&
     (VAR_8->cur_state == VAR_5)) {

  VAR_11 = FUNC_1(VAR_7, VAR_8);
  if (VAR_11)
   return VAR_11;


  VAR_11 = FUNC_6(VAR_7, VAR_8, 0,
        VAR_10->modify_flags);
  return VAR_11;
 } else if ((VAR_9 == VAR_5) &&
     (VAR_8->cur_state == VAR_5)) {

  VAR_11 = FUNC_6(VAR_7, VAR_8, 0,
        VAR_10->modify_flags);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_5(VAR_7, VAR_8, 0, 0,
        VAR_10->modify_flags);
  return VAR_11;
 } else if ((VAR_9 == VAR_5) &&
     (VAR_8->cur_state == VAR_6)) {

  VAR_11 = FUNC_5(VAR_7, VAR_8, 1, 0,
        VAR_10->modify_flags);
  return VAR_11;
 } else if ((VAR_9 == VAR_6) &&
     (VAR_8->cur_state == VAR_6)) {

  VAR_11 = FUNC_6(VAR_7, VAR_8, 0,
        VAR_10->modify_flags);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_5(VAR_7, VAR_8, 0, 0,
        VAR_10->modify_flags);
  return VAR_11;
 } else if ((VAR_9 == VAR_6) &&
     (VAR_8->cur_state == VAR_5)) {

  VAR_11 = FUNC_6(VAR_7, VAR_8, 0,
        VAR_10->modify_flags);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_5(VAR_7, VAR_8, 0, 0,
        VAR_10->modify_flags);

  return VAR_11;
 } else if (VAR_8->cur_state == VAR_1) {

  VAR_11 = FUNC_6(VAR_7, VAR_8, 1,
        VAR_10->modify_flags);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_5(VAR_7, VAR_8, 0, 1,
        VAR_10->modify_flags);
  return VAR_11;
 } else if (VAR_8->cur_state == VAR_3) {

  u32 VAR_12;


  VAR_11 = FUNC_4(VAR_7,
            VAR_8,
            &VAR_12);

  if (VAR_11)
   return VAR_11;

  VAR_8->cq_prod = VAR_12;

  VAR_11 = FUNC_3(VAR_7, VAR_8);
 } else {
  FUNC_0(VAR_7, VAR_0, "0\n");
 }

 return VAR_11;
}
