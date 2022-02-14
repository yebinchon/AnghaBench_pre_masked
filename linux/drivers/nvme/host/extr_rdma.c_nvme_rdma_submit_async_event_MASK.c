
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvme_rdma_queue {TYPE_1__* device; } ;
struct TYPE_6__ {int done; } ;
struct nvme_rdma_qe {int dma; TYPE_3__ cqe; struct nvme_command* data; } ;
struct nvme_rdma_ctrl {struct nvme_rdma_qe async_event_sqe; struct nvme_rdma_queue* queues; } ;
struct nvme_ctrl {int dummy; } ;
struct TYPE_5__ {int flags; int command_id; int opcode; } ;
struct nvme_command {TYPE_2__ common; } ;
struct ib_sge {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {struct ib_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ib_device*,int ,int,int ) ;
 int FUNC_2 (struct ib_device*,int ,int,int ) ;
 int FUNC_3 (struct nvme_command*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct nvme_rdma_queue*,struct nvme_rdma_qe*,struct ib_sge*,int,int *) ;
 int FUNC_5 (struct nvme_command*) ;
 struct nvme_rdma_ctrl* FUNC_6 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_7(struct nvme_ctrl *VAR_5)
{
 struct nvme_rdma_ctrl *VAR_6 = FUNC_6(VAR_5);
 struct nvme_rdma_queue *VAR_7 = &VAR_6->queues[0];
 struct ib_device *VAR_8 = VAR_7->device->dev;
 struct nvme_rdma_qe *VAR_9 = &VAR_6->async_event_sqe;
 struct nvme_command *VAR_10 = VAR_9->data;
 struct ib_sge VAR_11;
 int VAR_12;

 FUNC_1(VAR_8, VAR_9->dma, sizeof(*VAR_10), VAR_0);

 FUNC_3(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->common.opcode = VAR_3;
 VAR_10->common.command_id = VAR_1;
 VAR_10->common.flags |= VAR_2;
 FUNC_5(VAR_10);

 VAR_9->cqe.done = VAR_4;

 FUNC_2(VAR_8, VAR_9->dma, sizeof(*VAR_10),
   VAR_0);

 VAR_12 = FUNC_4(VAR_7, VAR_9, &VAR_11, 1, ((void*)0));
 FUNC_0(VAR_12);
}
