
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_dma_descriptor {int next_l; } ;
struct sg_dma_desc_info {struct sg_dma_descriptor* last_desc_virt; } ;


 int VAR_0 ;

void FUNC_0(struct sg_dma_desc_info *VAR_1)
{
 struct sg_dma_descriptor *VAR_2 = VAR_1->last_desc_virt;

 VAR_2->next_l &= ~VAR_0;
}
