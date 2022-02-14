
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macb_dma_desc_64 {int addrh; } ;
struct macb_dma_desc {int addr; } ;
struct macb {int hw_dma_cap; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct macb_dma_desc_64* FUNC_2 (struct macb*,struct macb_dma_desc*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct macb *VAR_1, struct macb_dma_desc *VAR_2, dma_addr_t VAR_3)
{
 VAR_2->addr = FUNC_1(VAR_3);
}
