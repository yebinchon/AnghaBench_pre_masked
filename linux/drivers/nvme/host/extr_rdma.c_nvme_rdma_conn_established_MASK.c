
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_rdma_queue {int queue_size; int * rsp_ring; } ;


 int FUNC_0 (struct nvme_rdma_queue*) ;
 int FUNC_1 (struct nvme_rdma_queue*,int *) ;

__attribute__((used)) static int FUNC_2(struct nvme_rdma_queue *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->queue_size; VAR_2++) {
  VAR_1 = FUNC_1(VAR_0, &VAR_0->rsp_ring[VAR_2]);
  if (VAR_1)
   goto out_destroy_queue_ib;
 }

 return 0;

out_destroy_queue_ib:
 FUNC_0(VAR_0);
 return VAR_1;
}
