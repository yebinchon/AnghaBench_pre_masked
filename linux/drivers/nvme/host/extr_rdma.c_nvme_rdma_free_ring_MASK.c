
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_rdma_qe {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct nvme_rdma_qe*) ;
 int FUNC_1 (struct ib_device*,struct nvme_rdma_qe*,size_t,int) ;

__attribute__((used)) static void FUNC_2(struct ib_device *VAR_0,
  struct nvme_rdma_qe *VAR_1, size_t VAR_2,
  size_t VAR_3, enum dma_data_direction VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_1(VAR_0, &VAR_1[VAR_5], VAR_3, VAR_4);
 FUNC_0(VAR_1);
}
