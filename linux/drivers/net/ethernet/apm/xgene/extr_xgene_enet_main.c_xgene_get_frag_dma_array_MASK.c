
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_desc_ring {size_t tail; TYPE_1__* cp_ring; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int * frag_dma_addr; } ;


 size_t VAR_0 ;

__attribute__((used)) static dma_addr_t *FUNC_0(struct xgene_enet_desc_ring *VAR_1)
{
 return &VAR_1->cp_ring->frag_dma_addr[VAR_1->tail * VAR_0];
}
