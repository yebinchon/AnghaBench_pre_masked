
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_queue {unsigned int num_descs; unsigned int sg_desc_size; struct ionic_desc_info* info; int sg_base_pa; void* sg_base; } ;
struct ionic_desc_info {void* sg_desc; } ;
typedef int dma_addr_t ;



void FUNC_0(struct ionic_queue *VAR_0, void *VAR_1, dma_addr_t VAR_2)
{
 struct ionic_desc_info *VAR_3;
 unsigned int VAR_4;

 VAR_0->sg_base = VAR_1;
 VAR_0->sg_base_pa = VAR_2;

 for (VAR_4 = 0, VAR_3 = VAR_0->info; VAR_4 < VAR_0->num_descs; VAR_4++, VAR_3++)
  VAR_3->sg_desc = VAR_1 + (VAR_4 * VAR_0->sg_desc_size);
}
