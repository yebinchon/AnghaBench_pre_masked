
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sg; int sg_cnt; } ;
struct nvmet_rdma_rsp {TYPE_3__ req; TYPE_2__* cmd; int rw; scalar_t__ n_rdma; struct nvmet_rdma_queue* queue; } ;
struct nvmet_rdma_queue {int rsp_wr_wait_list; TYPE_1__* cm_id; int sq_wr_avail; } ;
struct TYPE_6__ {scalar_t__ inline_sg; } ;
struct TYPE_5__ {int port_num; int qp; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct nvmet_rdma_queue*) ;
 int FUNC_4 (struct nvmet_rdma_rsp*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct nvmet_rdma_rsp *VAR_0)
{
 struct nvmet_rdma_queue *VAR_1 = VAR_0->queue;

 FUNC_0(1 + VAR_0->n_rdma, &VAR_1->sq_wr_avail);

 if (VAR_0->n_rdma) {
  FUNC_6(&VAR_0->rw, VAR_1->cm_id->qp,
    VAR_1->cm_id->port_num, VAR_0->req.sg,
    VAR_0->req.sg_cnt, FUNC_2(&VAR_0->req));
 }

 if (VAR_0->req.sg != VAR_0->cmd->inline_sg)
  FUNC_5(&VAR_0->req);

 if (FUNC_7(!FUNC_1(&VAR_1->rsp_wr_wait_list)))
  FUNC_3(VAR_1);

 FUNC_4(VAR_0);
}
