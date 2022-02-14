
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_master {int dma_rx; int dma_tx; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct spi_master *VAR_0,
      struct spi_transfer *VAR_1)
{
 if (VAR_1->tx_buf)
  FUNC_0(VAR_0->dma_tx);
 if (VAR_1->rx_buf)
  FUNC_0(VAR_0->dma_rx);
}
