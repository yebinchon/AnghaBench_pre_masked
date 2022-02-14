
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {scalar_t__ dma_tx; scalar_t__ dma_rx; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct spi_controller *VAR_0)
{
 if (VAR_0->dma_rx)
  FUNC_0(VAR_0->dma_rx);
 if (VAR_0->dma_tx)
  FUNC_0(VAR_0->dma_tx);
}
