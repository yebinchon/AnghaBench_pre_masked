
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct macb_dma_desc_64 {scalar_t__ addrh; } ;
struct macb_dma_desc {int addr; } ;
struct macb {int hw_dma_cap; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 struct macb_dma_desc_64* FUNC_2 (struct macb*,struct macb_dma_desc*) ;

__attribute__((used)) static dma_addr_t FUNC_3(struct macb *VAR_2, struct macb_dma_desc *VAR_3)
{
 dma_addr_t VAR_4 = 0;
 VAR_4 |= FUNC_0(VAR_1, FUNC_1(VAR_1, VAR_3->addr));
 return VAR_4;
}
