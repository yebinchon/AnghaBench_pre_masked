
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_cq_info {void* cq_desc; } ;
struct ionic_cq {unsigned int num_descs; unsigned int desc_size; struct ionic_cq_info* info; int base_pa; void* base; } ;
typedef int dma_addr_t ;



void FUNC_0(struct ionic_cq *VAR_0, void *VAR_1, dma_addr_t VAR_2)
{
 struct ionic_cq_info *VAR_3;
 unsigned int VAR_4;

 VAR_0->base = VAR_1;
 VAR_0->base_pa = VAR_2;

 for (VAR_4 = 0, VAR_3 = VAR_0->info; VAR_4 < VAR_0->num_descs; VAR_4++, VAR_3++)
  VAR_3->cq_desc = VAR_1 + (VAR_4 * VAR_0->desc_size);
}
