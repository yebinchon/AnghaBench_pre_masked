
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_rdma_rsp {int free_list; } ;
struct nvmet_rdma_queue {int recv_queue_size; struct nvmet_rdma_rsp* rsps; struct nvmet_rdma_device* dev; } ;
struct nvmet_rdma_device {int dummy; } ;


 int FUNC_0 (struct nvmet_rdma_rsp*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvmet_rdma_device*,struct nvmet_rdma_rsp*) ;

__attribute__((used)) static void FUNC_3(struct nvmet_rdma_queue *VAR_0)
{
 struct nvmet_rdma_device *VAR_1 = VAR_0->dev;
 int VAR_2, VAR_3 = VAR_0->recv_queue_size * 2;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  struct nvmet_rdma_rsp *VAR_4 = &VAR_0->rsps[VAR_2];

  FUNC_1(&VAR_4->free_list);
  FUNC_2(VAR_1, VAR_4);
 }
 FUNC_0(VAR_0->rsps);
}
