
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_dxe_mem_pool {int chunk_size; int phy_addr; void* virt_addr; } ;
struct wcn36xx_dxe_ctl {int bd_phy_addr; struct wcn36xx_dxe_ctl* next; int * bd_cpu_addr; } ;
struct wcn36xx_dxe_ch {int desc_num; struct wcn36xx_dxe_ctl* head_blk_ctl; } ;
typedef int dma_addr_t ;



__attribute__((used)) static void FUNC_0(struct wcn36xx_dxe_ch *VAR_0,
       struct wcn36xx_dxe_mem_pool *VAR_1)
{
 int VAR_2, VAR_3 = VAR_1->chunk_size;
 dma_addr_t VAR_4 = VAR_1->phy_addr;
 void *VAR_5 = VAR_1->virt_addr;
 struct wcn36xx_dxe_ctl *VAR_6 = VAR_0->head_blk_ctl;

 for (VAR_2 = 0; VAR_2 < VAR_0->desc_num; VAR_2++) {


  if (!(VAR_2 & 1)) {
   VAR_6->bd_phy_addr = VAR_4;
   VAR_6->bd_cpu_addr = VAR_5;
   VAR_4 += VAR_3;
   VAR_5 += VAR_3;
  } else {
   VAR_6->bd_phy_addr = 0;
   VAR_6->bd_cpu_addr = ((void*)0);
  }
  VAR_6 = VAR_6->next;
 }
}
