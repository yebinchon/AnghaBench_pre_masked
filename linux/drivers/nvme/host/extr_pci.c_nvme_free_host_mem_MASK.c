
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_host_mem_buf_desc {int addr; int size; } ;
struct TYPE_2__ {size_t page_size; } ;
struct nvme_dev {int nr_host_mem_descs; struct nvme_host_mem_buf_desc* host_mem_descs; int host_mem_descs_dma; int dev; int * host_mem_desc_bufs; TYPE_1__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t,int ,int ,int) ;
 int FUNC_1 (int ,int,struct nvme_host_mem_buf_desc*,int ) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct nvme_dev *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_host_mem_descs; VAR_3++) {
  struct nvme_host_mem_buf_desc *VAR_4 = &VAR_2->host_mem_descs[VAR_3];
  size_t VAR_5 = FUNC_3(VAR_4->size) * VAR_2->ctrl.page_size;

  FUNC_0(VAR_2->dev, VAR_5, VAR_2->host_mem_desc_bufs[VAR_3],
          FUNC_4(VAR_4->addr),
          VAR_0 | VAR_1);
 }

 FUNC_2(VAR_2->host_mem_desc_bufs);
 VAR_2->host_mem_desc_bufs = ((void*)0);
 FUNC_1(VAR_2->dev,
   VAR_2->nr_host_mem_descs * sizeof(*VAR_2->host_mem_descs),
   VAR_2->host_mem_descs, VAR_2->host_mem_descs_dma);
 VAR_2->host_mem_descs = ((void*)0);
 VAR_2->nr_host_mem_descs = 0;
}
