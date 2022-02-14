
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue_count; } ;
struct nvme_rdma_ctrl {int * queues; TYPE_1__ ctrl; } ;


 int FUNC_0 (struct nvme_rdma_ctrl*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct nvme_rdma_ctrl *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 1; VAR_1 < VAR_0->ctrl.queue_count; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2)
   goto out_stop_queues;
 }

 return 0;

out_stop_queues:
 for (VAR_1--; VAR_1 >= 1; VAR_1--)
  FUNC_1(&VAR_0->queues[VAR_1]);
 return VAR_2;
}
