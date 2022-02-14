
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int xfer_completion; int dma_rx; } ;
struct bcm2835_spi {size_t chip_select; int tx_dma_active; int rx_dma_active; int * clear_rx_cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm2835_spi*,int ) ;
 int FUNC_1 (struct spi_controller*) ;
 int FUNC_2 (struct bcm2835_spi*) ;
 int FUNC_3 (struct bcm2835_spi*,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 struct bcm2835_spi* FUNC_8 (struct spi_controller*) ;

__attribute__((used)) static void FUNC_9(void *VAR_2)
{
 struct spi_controller *VAR_3 = VAR_2;
 struct bcm2835_spi *VAR_4 = FUNC_8(VAR_3);


 while (!(FUNC_0(VAR_4, VAR_0) & VAR_1))
  FUNC_3(VAR_4, VAR_0,
      VAR_4->clear_rx_cs[VAR_4->chip_select]);

 VAR_4->tx_dma_active = 0;
 FUNC_7();






 if (FUNC_4(&VAR_4->rx_dma_active, 1, 0))
  FUNC_6(VAR_3->dma_rx);

 FUNC_2(VAR_4);
 FUNC_1(VAR_3);
 FUNC_5(&VAR_3->xfer_completion);
}
