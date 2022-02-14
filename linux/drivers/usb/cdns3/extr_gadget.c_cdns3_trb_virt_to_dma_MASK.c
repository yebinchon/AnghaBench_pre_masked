
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cdns3_trb {int dummy; } ;
struct cdns3_endpoint {int trb_pool_dma; scalar_t__ trb_pool; } ;
typedef int dma_addr_t ;



dma_addr_t FUNC_0(struct cdns3_endpoint *VAR_0,
     struct cdns3_trb *VAR_1)
{
 u32 VAR_2 = (char *)VAR_1 - (char *)VAR_0->trb_pool;

 return VAR_0->trb_pool_dma + VAR_2;
}
