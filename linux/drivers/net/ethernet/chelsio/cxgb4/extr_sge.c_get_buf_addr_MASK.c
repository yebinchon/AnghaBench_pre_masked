
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_sw_desc {int dma_addr; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline dma_addr_t FUNC_0(const struct rx_sw_desc *VAR_1)
{
 return VAR_1->dma_addr & ~(dma_addr_t)VAR_0;
}
