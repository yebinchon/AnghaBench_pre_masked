
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_sw_desc {int dma_addr; struct page* page; } ;
struct page {int dummy; } ;
typedef int dma_addr_t ;



__attribute__((used)) static inline void FUNC_0(struct rx_sw_desc *VAR_0, struct page *VAR_1,
      dma_addr_t VAR_2)
{
 VAR_0->page = VAR_1;
 VAR_0->dma_addr = VAR_2;
}
