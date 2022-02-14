
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int nents; struct scatterlist* sgl; } ;
struct TYPE_3__ {unsigned int nents; struct scatterlist* sgl; } ;
struct spi_transfer {scalar_t__ rx_buf; TYPE_2__ rx_sg; TYPE_1__ tx_sg; } ;
struct spi_device {int chip_select; } ;
struct spi_controller {struct dma_chan* dma_rx; struct dma_chan* dma_tx; } ;
struct scatterlist {int dummy; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {struct spi_controller* callback_param; int callback; } ;
struct bcm2835_spi {int chip_select; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct dma_async_tx_descriptor* FUNC_1 (struct dma_chan*,struct scatterlist*,unsigned int,int,unsigned long) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static int FUNC_3(struct spi_controller *VAR_6,
      struct spi_device *VAR_7,
      struct spi_transfer *VAR_8,
      struct bcm2835_spi *VAR_9,
      bool VAR_10)
{
 struct dma_chan *VAR_11;
 struct scatterlist *VAR_12;
 unsigned int VAR_13;
 enum dma_transfer_direction VAR_14;
 unsigned long VAR_15;

 struct dma_async_tx_descriptor *VAR_16;
 dma_cookie_t VAR_17;

 if (VAR_10) {
  VAR_14 = VAR_1;
  VAR_11 = VAR_6->dma_tx;
  VAR_13 = VAR_8->tx_sg.nents;
  VAR_12 = VAR_8->tx_sg.sgl;
  VAR_15 = VAR_8->rx_buf ? 0 : VAR_2;
 } else {
  VAR_14 = VAR_0;
  VAR_11 = VAR_6->dma_rx;
  VAR_13 = VAR_8->rx_sg.nents;
  VAR_12 = VAR_8->rx_sg.sgl;
  VAR_15 = VAR_2;
 }

 VAR_16 = FUNC_1(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
 if (!VAR_16)
  return -VAR_3;





 if (!VAR_10) {
  VAR_16->callback = VAR_4;
  VAR_16->callback_param = VAR_6;
 } else if (!VAR_8->rx_buf) {
  VAR_16->callback = VAR_5;
  VAR_16->callback_param = VAR_6;
  VAR_9->chip_select = VAR_7->chip_select;
 }


 VAR_17 = FUNC_2(VAR_16);

 return FUNC_0(VAR_17);
}
