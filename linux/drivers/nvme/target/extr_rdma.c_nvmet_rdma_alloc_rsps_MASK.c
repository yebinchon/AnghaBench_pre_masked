
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_rdma_rsp {int free_list; } ;
struct nvmet_rdma_queue {int recv_queue_size; struct nvmet_rdma_rsp* rsps; int free_rsps; struct nvmet_rdma_device* dev; } ;
struct nvmet_rdma_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvmet_rdma_rsp* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct nvmet_rdma_rsp*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nvmet_rdma_device*,struct nvmet_rdma_rsp*) ;
 int FUNC_5 (struct nvmet_rdma_device*,struct nvmet_rdma_rsp*) ;

__attribute__((used)) static int
FUNC_6(struct nvmet_rdma_queue *VAR_2)
{
 struct nvmet_rdma_device *VAR_3 = VAR_2->dev;
 int VAR_4 = VAR_2->recv_queue_size * 2;
 int VAR_5 = -VAR_0, VAR_6;

 VAR_2->rsps = FUNC_0(VAR_4, sizeof(struct nvmet_rdma_rsp),
   VAR_1);
 if (!VAR_2->rsps)
  goto out;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct nvmet_rdma_rsp *VAR_7 = &VAR_2->rsps[VAR_6];

  VAR_5 = FUNC_4(VAR_3, VAR_7);
  if (VAR_5)
   goto out_free;

  FUNC_2(&VAR_7->free_list, &VAR_2->free_rsps);
 }

 return 0;

out_free:
 while (--VAR_6 >= 0) {
  struct nvmet_rdma_rsp *VAR_8 = &VAR_2->rsps[VAR_6];

  FUNC_3(&VAR_8->free_list);
  FUNC_5(VAR_3, VAR_8);
 }
 FUNC_1(VAR_2->rsps);
out:
 return VAR_5;
}
