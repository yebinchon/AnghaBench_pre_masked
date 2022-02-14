
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int dummy; } ;
struct spi_controller {int dma_rx; int dma_tx; } ;
struct bcm2835_spi {int tx_dma_active; int rx_dma_active; } ;


 int FUNC_0 (struct spi_controller*) ;
 int FUNC_1 (struct bcm2835_spi*) ;
 int FUNC_2 (int ) ;
 struct bcm2835_spi* FUNC_3 (struct spi_controller*) ;

__attribute__((used)) static void FUNC_4(struct spi_controller *VAR_0,
       struct spi_message *VAR_1)
{
 struct bcm2835_spi *VAR_2 = FUNC_3(VAR_0);


 FUNC_2(VAR_0->dma_tx);
 VAR_2->tx_dma_active = 0;
 FUNC_2(VAR_0->dma_rx);
 VAR_2->rx_dma_active = 0;
 FUNC_1(VAR_2);


 FUNC_0(VAR_0);
}
