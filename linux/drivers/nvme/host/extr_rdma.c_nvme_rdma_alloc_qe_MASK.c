
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_rdma_qe {int * data; int dma; } ;
struct ib_device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_device*,int *,size_t,int) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t,int ) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_2, struct nvme_rdma_qe *VAR_3,
  size_t VAR_4, enum dma_data_direction VAR_5)
{
 VAR_3->data = FUNC_3(VAR_4, VAR_1);
 if (!VAR_3->data)
  return -VAR_0;

 VAR_3->dma = FUNC_0(VAR_2, VAR_3->data, VAR_4, VAR_5);
 if (FUNC_1(VAR_2, VAR_3->dma)) {
  FUNC_2(VAR_3->data);
  VAR_3->data = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
