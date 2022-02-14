
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; void* rx_dma; scalar_t__ rx_buf; void* tx_dma; scalar_t__ tx_buf; } ;
struct mpc8xxx_spi {int map_tx_dma; int map_rx_dma; void* rx; void* tx_dma; int count; struct spi_transfer* xfer_in_progress; void* rx_dma; scalar_t__ tx; void* dma_dummy_rx; void* dma_dummy_tx; struct fsl_spi_reg* reg_base; struct device* dev; } ;
struct fsl_spi_reg {int mask; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (struct device*,void*,int ,int ) ;
 scalar_t__ FUNC_2 (struct device*,void*) ;
 int FUNC_3 (struct device*,void*,int ,int ) ;
 int FUNC_4 (struct mpc8xxx_spi*) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6(struct mpc8xxx_spi *VAR_4,
       struct spi_transfer *VAR_5, bool VAR_6)
{
 struct device *VAR_7 = VAR_4->dev;
 struct fsl_spi_reg *VAR_8 = VAR_4->reg_base;

 if (VAR_6) {
  VAR_4->map_tx_dma = 0;
  VAR_4->map_rx_dma = 0;
 } else {
  VAR_4->map_tx_dma = 1;
  VAR_4->map_rx_dma = 1;
 }

 if (!VAR_5->tx_buf) {
  VAR_4->tx_dma = VAR_4->dma_dummy_tx;
  VAR_4->map_tx_dma = 0;
 }

 if (!VAR_5->rx_buf) {
  VAR_4->rx_dma = VAR_4->dma_dummy_rx;
  VAR_4->map_rx_dma = 0;
 }

 if (VAR_4->map_tx_dma) {
  void *VAR_9 = (void *)VAR_4->tx;

  VAR_4->tx_dma = FUNC_1(VAR_7, VAR_9, VAR_5->len,
           VAR_1);
  if (FUNC_2(VAR_7, VAR_4->tx_dma)) {
   FUNC_0(VAR_7, "unable to map tx dma\n");
   return -VAR_2;
  }
 } else if (VAR_5->tx_buf) {
  VAR_4->tx_dma = VAR_5->tx_dma;
 }

 if (VAR_4->map_rx_dma) {
  VAR_4->rx_dma = FUNC_1(VAR_7, VAR_4->rx, VAR_5->len,
           VAR_0);
  if (FUNC_2(VAR_7, VAR_4->rx_dma)) {
   FUNC_0(VAR_7, "unable to map rx dma\n");
   goto err_rx_dma;
  }
 } else if (VAR_5->rx_buf) {
  VAR_4->rx_dma = VAR_5->rx_dma;
 }


 FUNC_5(&VAR_8->mask, VAR_3);

 VAR_4->xfer_in_progress = VAR_5;
 VAR_4->count = VAR_5->len;


 FUNC_4(VAR_4);

 return 0;

err_rx_dma:
 if (VAR_4->map_tx_dma)
  FUNC_3(VAR_7, VAR_4->tx_dma, VAR_5->len, VAR_1);
 return -VAR_2;
}
