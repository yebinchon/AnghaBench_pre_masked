
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_qspi {scalar_t__ dma_chrx; scalar_t__ dma_chtx; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct stm32_qspi *VAR_0)
{
 if (VAR_0->dma_chtx)
  FUNC_0(VAR_0->dma_chtx);
 if (VAR_0->dma_chrx)
  FUNC_0(VAR_0->dma_chrx);
}
