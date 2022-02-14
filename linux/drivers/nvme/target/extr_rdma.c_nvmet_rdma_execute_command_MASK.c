
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvmet_rdma_rsp {int req; int read_cqe; int rw; scalar_t__ n_rdma; struct nvmet_rdma_queue* queue; } ;
struct TYPE_5__ {TYPE_1__* ctrl; } ;
struct nvmet_rdma_queue {TYPE_3__* cm_id; int sq_wr_avail; TYPE_2__ nvme_sq; int idx; } ;
struct TYPE_6__ {int port_num; int qp; } ;
struct TYPE_4__ {int cntlid; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (struct nvmet_rdma_rsp*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int ,int ,int *,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static bool FUNC_8(struct nvmet_rdma_rsp *VAR_1)
{
 struct nvmet_rdma_queue *VAR_2 = VAR_1->queue;

 if (FUNC_7(FUNC_1(1 + VAR_1->n_rdma,
   &VAR_2->sq_wr_avail) < 0)) {
  FUNC_5("IB send queue full (needed %d): queue %u cntlid %u\n",
    1 + VAR_1->n_rdma, VAR_2->idx,
    VAR_2->nvme_sq.ctrl->cntlid);
  FUNC_0(1 + VAR_1->n_rdma, &VAR_2->sq_wr_avail);
  return 0;
 }

 if (FUNC_2(VAR_1)) {
  if (FUNC_6(&VAR_1->rw, VAR_2->cm_id->qp,
    VAR_2->cm_id->port_num, &VAR_1->read_cqe, ((void*)0)))
   FUNC_3(&VAR_1->req, VAR_0);
 } else {
  FUNC_4(&VAR_1->req);
 }

 return 1;
}
