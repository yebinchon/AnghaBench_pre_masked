
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_rdma_queue {struct nvme_rdma_ctrl* ctrl; } ;
struct TYPE_2__ {scalar_t__ state; int device; } ;
struct nvme_rdma_ctrl {TYPE_1__ ctrl; } ;
struct ib_wc {int status; int wr_cqe; } ;
struct ib_cq {struct nvme_rdma_queue* cq_context; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char const*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_rdma_ctrl*) ;

__attribute__((used)) static void FUNC_3(struct ib_cq *VAR_1, struct ib_wc *VAR_2,
  const char *VAR_3)
{
 struct nvme_rdma_queue *VAR_4 = VAR_1->cq_context;
 struct nvme_rdma_ctrl *VAR_5 = VAR_4->ctrl;

 if (VAR_5->ctrl.state == VAR_0)
  FUNC_0(VAR_5->ctrl.device,
        "%s for CQE 0x%p failed with status %s (%d)\n",
        VAR_3, VAR_2->wr_cqe,
        FUNC_1(VAR_2->status), VAR_2->status);
 FUNC_2(VAR_5);
}
