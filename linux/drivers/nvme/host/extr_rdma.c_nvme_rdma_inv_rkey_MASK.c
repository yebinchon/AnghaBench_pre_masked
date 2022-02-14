
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int done; } ;
struct nvme_rdma_request {TYPE_3__ reg_cqe; TYPE_1__* mr; } ;
struct nvme_rdma_queue {int qp; } ;
struct TYPE_5__ {int invalidate_rkey; } ;
struct ib_send_wr {TYPE_3__* wr_cqe; TYPE_2__ ex; int send_flags; int num_sge; int * next; int opcode; } ;
struct TYPE_4__ {int rkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ib_send_wr*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct nvme_rdma_queue *VAR_3,
  struct nvme_rdma_request *VAR_4)
{
 struct ib_send_wr VAR_5 = {
  .opcode = VAR_1,
  .next = ((void*)0),
  .num_sge = 0,
  .send_flags = VAR_0,
  .ex.invalidate_rkey = VAR_4->mr->rkey,
 };

 VAR_4->reg_cqe.done = VAR_2;
 VAR_5.wr_cqe = &VAR_4->reg_cqe;

 return FUNC_0(VAR_3->qp, &VAR_5, ((void*)0));
}
