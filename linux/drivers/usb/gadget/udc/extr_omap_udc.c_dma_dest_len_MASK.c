
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_ep {int dma_counter; int lch; } ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct omap_ep *VAR_0, dma_addr_t VAR_1)
{
 dma_addr_t VAR_2;

 VAR_2 = FUNC_1(VAR_0->lch);
 if (VAR_2 == VAR_0->dma_counter)
  return 0;

 VAR_2 |= VAR_1 & (0xffff << 16);
 if (FUNC_0())
  VAR_2++;
 if (VAR_2 < VAR_1)
  VAR_2 += 0x10000;
 return VAR_2 - VAR_1;
}
