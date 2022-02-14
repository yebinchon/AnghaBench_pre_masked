
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_rdma_queue {int cq; TYPE_1__* cm_id; } ;
struct ib_qp {int dummy; } ;
struct TYPE_2__ {struct ib_qp* qp; } ;


 int FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct nvmet_rdma_queue *VAR_0)
{
 struct ib_qp *VAR_1 = VAR_0->cm_id->qp;

 FUNC_1(VAR_1);
 FUNC_3(VAR_0->cm_id);
 FUNC_0(VAR_1);
 FUNC_2(VAR_0->cq);
}
