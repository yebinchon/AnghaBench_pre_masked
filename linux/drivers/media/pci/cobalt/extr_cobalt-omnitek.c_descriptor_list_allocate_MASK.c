
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_dma_desc_info {size_t size; void* virt; int bus; int dev; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,size_t,int *,int ) ;

void *FUNC_1(struct sg_dma_desc_info *VAR_1, size_t VAR_2)
{
 VAR_1->size = VAR_2;
 VAR_1->virt = FUNC_0(VAR_1->dev, VAR_2,
     &VAR_1->bus, VAR_0);
 return VAR_1->virt;
}
