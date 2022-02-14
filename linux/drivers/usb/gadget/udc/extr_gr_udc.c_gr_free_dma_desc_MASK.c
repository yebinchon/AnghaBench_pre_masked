
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gr_udc {int desc_pool; } ;
struct gr_dma_desc {scalar_t__ paddr; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,struct gr_dma_desc*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct gr_udc *VAR_0,
        struct gr_dma_desc *VAR_1)
{
 FUNC_0(VAR_0->desc_pool, VAR_1, (dma_addr_t)VAR_1->paddr);
}
