
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_rdma_qe {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 struct nvme_rdma_qe* FUNC_0 (size_t,int,int ) ;
 scalar_t__ FUNC_1 (struct ib_device*,struct nvme_rdma_qe*,size_t,int) ;
 int FUNC_2 (struct ib_device*,struct nvme_rdma_qe*,int,size_t,int) ;

__attribute__((used)) static struct nvme_rdma_qe *FUNC_3(struct ib_device *VAR_1,
  size_t VAR_2, size_t VAR_3,
  enum dma_data_direction VAR_4)
{
 struct nvme_rdma_qe *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2, sizeof(struct nvme_rdma_qe), VAR_0);
 if (!VAR_5)
  return ((void*)0);






 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (FUNC_1(VAR_1, &VAR_5[VAR_6], VAR_3, VAR_4))
   goto out_free_ring;
 }

 return VAR_5;

out_free_ring:
 FUNC_2(VAR_1, VAR_5, VAR_6, VAR_3, VAR_4);
 return ((void*)0);
}
