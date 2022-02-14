
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_rdma_qp {scalar_t__ iwarp_state; int shared_queue_phys_addr; scalar_t__ shared_queue; struct qed_iwarp_ep* ep; } ;
struct qed_iwarp_ep {scalar_t__ state; } ;
struct qed_hwfn {TYPE_2__* cdev; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_iwarp_ep*,int) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_rdma_qp*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_rdma_qp*,scalar_t__,int) ;

int FUNC_7(struct qed_hwfn *VAR_3, struct qed_rdma_qp *VAR_4)
{
 struct qed_iwarp_ep *VAR_5 = VAR_4->ep;
 int VAR_6 = 0;
 int VAR_7 = 0;

 if (VAR_4->iwarp_state != VAR_2) {
  VAR_7 = FUNC_6(VAR_3, VAR_4,
      VAR_2, 0);
  if (VAR_7)
   return VAR_7;
 }


 if (VAR_5) {
  while (FUNC_1(VAR_5->state) != VAR_1 &&
         VAR_6++ < 200)
   FUNC_3(100);

  if (VAR_5->state != VAR_1)
   FUNC_0(VAR_3, "ep state close timeout state=%x\n",
      VAR_5->state);

  FUNC_4(VAR_3, VAR_5, 0);
 }

 VAR_7 = FUNC_5(VAR_3, VAR_4);

 if (VAR_4->shared_queue)
  FUNC_2(&VAR_3->cdev->pdev->dev,
      VAR_0,
      VAR_4->shared_queue, VAR_4->shared_queue_phys_addr);

 return VAR_7;
}
