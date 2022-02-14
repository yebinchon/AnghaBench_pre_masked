
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_rdma_rsp {TYPE_1__* queue; int free_list; int allocated; } ;
struct TYPE_2__ {int rsps_lock; int free_rsps; int dev; } ;


 int FUNC_0 (struct nvmet_rdma_rsp*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,struct nvmet_rdma_rsp*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline void
FUNC_6(struct nvmet_rdma_rsp *VAR_0)
{
 unsigned long VAR_1;

 if (FUNC_5(VAR_0->allocated)) {
  FUNC_2(VAR_0->queue->dev, VAR_0);
  FUNC_0(VAR_0);
  return;
 }

 FUNC_3(&VAR_0->queue->rsps_lock, VAR_1);
 FUNC_1(&VAR_0->free_list, &VAR_0->queue->free_rsps);
 FUNC_4(&VAR_0->queue->rsps_lock, VAR_1);
}
