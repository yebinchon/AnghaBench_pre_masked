
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_rdma_queue {TYPE_1__* ctrl; } ;
struct TYPE_2__ {scalar_t__* io_queues; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct nvme_rdma_queue*) ;

__attribute__((used)) static bool FUNC_1(struct nvme_rdma_queue *VAR_2)
{
 return FUNC_0(VAR_2) >
  VAR_2->ctrl->io_queues[VAR_0] +
  VAR_2->ctrl->io_queues[VAR_1];
}
