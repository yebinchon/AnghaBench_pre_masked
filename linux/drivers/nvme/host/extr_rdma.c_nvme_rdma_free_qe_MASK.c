
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_rdma_qe {int data; int dma; } ;
struct ib_device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct ib_device*,int ,size_t,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ib_device *VAR_0, struct nvme_rdma_qe *VAR_1,
  size_t VAR_2, enum dma_data_direction VAR_3)
{
 FUNC_0(VAR_0, VAR_1->dma, VAR_2, VAR_3);
 FUNC_1(VAR_1->data);
}
