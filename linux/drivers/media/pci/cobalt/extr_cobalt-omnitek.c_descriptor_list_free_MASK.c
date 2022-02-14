
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_dma_desc_info {int * virt; int bus; int size; int dev; } ;


 int FUNC_0 (int ,int ,int *,int ) ;

void FUNC_1(struct sg_dma_desc_info *VAR_0)
{
 if (VAR_0->virt)
  FUNC_0(VAR_0->dev, VAR_0->size,
      VAR_0->virt, VAR_0->bus);
 VAR_0->virt = ((void*)0);
}
