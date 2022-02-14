
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int dummy; } ;
struct spi_device {size_t chip_select; } ;
struct spi_controller {int dma_rx; int dma_tx; } ;
struct bcm2835_spi {int tx_len; int tx_dma_active; int rx_dma_active; scalar_t__ rx_buf; int * clear_rx_desc; int fill_tx_desc; scalar_t__ tx_buf; int count_transfer_dma; } ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct spi_controller*,struct spi_device*,struct spi_transfer*,struct bcm2835_spi*,int) ;
 int FUNC_1 (struct spi_controller*) ;
 int FUNC_2 (struct spi_controller*,struct spi_transfer*,struct bcm2835_spi*,int) ;
 int FUNC_3 (struct bcm2835_spi*) ;
 int FUNC_4 (struct bcm2835_spi*,int ,int) ;
 scalar_t__ FUNC_5 (int*,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 struct bcm2835_spi* FUNC_13 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_14(struct spi_controller *VAR_4,
     struct spi_device *VAR_5,
     struct spi_transfer *VAR_6,
     u32 VAR_7)
{
 struct bcm2835_spi *VAR_8 = FUNC_13(VAR_4);
 dma_cookie_t VAR_9;
 int VAR_10;


 VAR_8->count_transfer_dma++;





 FUNC_2(VAR_4, VAR_6, VAR_8, VAR_7);


 if (VAR_8->tx_buf) {
  VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_8, 1);
 } else {
  VAR_9 = FUNC_8(VAR_8->fill_tx_desc);
  VAR_10 = FUNC_7(VAR_9);
 }
 if (VAR_10)
  goto err_reset_hw;


 FUNC_4(VAR_8, VAR_3, VAR_8->tx_len);


 FUNC_4(VAR_8, VAR_0,
     VAR_7 | VAR_2 | VAR_1);

 VAR_8->tx_dma_active = 1;
 FUNC_12();


 FUNC_6(VAR_4->dma_tx);





 if (VAR_8->rx_buf) {
  VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_8, 0);
 } else {
  VAR_9 = FUNC_8(VAR_8->clear_rx_desc[VAR_5->chip_select]);
  VAR_10 = FUNC_7(VAR_9);
 }
 if (VAR_10) {

  FUNC_10(VAR_4->dma_tx);
  VAR_8->tx_dma_active = 0;
  goto err_reset_hw;
 }


 FUNC_6(VAR_4->dma_rx);
 VAR_8->rx_dma_active = 1;
 FUNC_11();





 if (!VAR_8->rx_buf && !VAR_8->tx_dma_active &&
     FUNC_5(&VAR_8->rx_dma_active, 1, 0)) {
  FUNC_9(VAR_4->dma_rx);
  FUNC_1(VAR_4);
 }


 return 1;

err_reset_hw:
 FUNC_1(VAR_4);
 FUNC_3(VAR_8);
 return VAR_10;
}
