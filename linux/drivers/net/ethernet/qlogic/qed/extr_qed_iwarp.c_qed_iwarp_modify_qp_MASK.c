
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_rdma_qp {int iwarp_state; int icid; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; } ;
typedef enum qed_iwarp_qp_state { ____Placeholder_qed_iwarp_qp_state } qed_iwarp_qp_state ;
struct TYPE_3__ {int qp_lock; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,int ,int ,char*) ;
 int VAR_0 ;





 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_rdma_qp*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct qed_hwfn *VAR_3,
      struct qed_rdma_qp *VAR_4,
      enum qed_iwarp_qp_state VAR_5, bool VAR_6)
{
 enum qed_iwarp_qp_state VAR_7;
 bool VAR_8 = 0;
 int VAR_9 = 0;




 FUNC_2(&VAR_3->p_rdma_info->iwarp.qp_lock);
 VAR_7 = VAR_4->iwarp_state;

 if (VAR_7 == VAR_5) {
  FUNC_3(&VAR_3->p_rdma_info->iwarp.qp_lock);
  return 0;
 }

 switch (VAR_7) {
 case 130:
  switch (VAR_5) {
  case 129:
   VAR_4->iwarp_state = 129;
   break;
  case 131:
   VAR_4->iwarp_state = 131;
   if (!VAR_6)
    VAR_8 = 1;
   break;
  default:
   break;
  }
  break;
 case 129:
  switch (VAR_5) {
  case 132:
   if (!VAR_6)
    VAR_8 = 1;

   VAR_4->iwarp_state = 132;
   break;
  case 131:
   if (!VAR_6)
    VAR_8 = 1;
   VAR_4->iwarp_state = 131;
   break;
  default:
   break;
  }
  break;
 case 131:
  switch (VAR_5) {
  case 130:

   VAR_4->iwarp_state = VAR_5;
   break;
  case 132:

   break;
  default:
   VAR_9 = -VAR_0;
  }
  break;
 case 128:
 case 132:
  VAR_4->iwarp_state = VAR_5;
  break;
 default:
  break;
 }

 FUNC_0(VAR_3, VAR_1, "QP(0x%x) %s --> %s%s\n",
     VAR_4->icid,
     VAR_2[VAR_7],
     VAR_2[VAR_4->iwarp_state],
     VAR_6 ? "internal" : "");

 FUNC_3(&VAR_3->p_rdma_info->iwarp.qp_lock);

 if (VAR_8)
  VAR_9 = FUNC_1(VAR_3, VAR_4);

 return VAR_9;
}
