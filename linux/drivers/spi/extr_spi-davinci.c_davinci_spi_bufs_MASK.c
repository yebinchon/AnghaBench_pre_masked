
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int nents; int sgl; } ;
struct TYPE_3__ {int nents; int sgl; } ;
struct spi_transfer {int len; TYPE_2__ tx_sg; TYPE_1__ rx_sg; int tx_buf; int rx_buf; } ;
struct spi_device {size_t chip_select; int dev; int master; scalar_t__ controller_data; } ;
struct dma_slave_config {int src_addr_width; int src_maxburst; int dst_addr_width; int dst_maxburst; scalar_t__ dst_addr; int direction; int src_addr; } ;
struct dma_async_tx_descriptor {void* callback_param; int callback; } ;
struct davinci_spi_platform_data {scalar_t__ cshold_bug; } ;
struct davinci_spi_config {scalar_t__ io_type; } ;
struct davinci_spi {int* bytes_per_word; int wcount; int rcount; int (* get_tx ) (struct davinci_spi*) ;scalar_t__ base; int done; int dma_tx; int dma_rx; scalar_t__ pbase; int rx; int tx; struct davinci_spi_platform_data pdata; } ;
typedef int rx_buf_count ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,struct spi_device*,struct spi_transfer*) ;
 int FUNC_4 (struct davinci_spi*,int) ;
 struct davinci_spi_config VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (struct davinci_spi*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 struct dma_async_tx_descriptor* FUNC_9 (int ,int ,int ,int ,int) ;
 int FUNC_10 (int ,struct dma_slave_config*) ;
 int FUNC_11 (struct dma_async_tx_descriptor*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int,scalar_t__) ;
 int FUNC_14 (int,scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__,int ) ;
 struct davinci_spi* FUNC_17 (int ) ;
 int FUNC_18 (struct davinci_spi*) ;
 scalar_t__ FUNC_19 (int *,int ) ;

__attribute__((used)) static int FUNC_20(struct spi_device *VAR_21, struct spi_transfer *VAR_22)
{
 struct davinci_spi *VAR_23;
 int VAR_24, VAR_25 = -VAR_5;
 u32 VAR_26, VAR_27;
 u32 VAR_28 = 0;
 struct davinci_spi_config *VAR_29;
 struct davinci_spi_platform_data *VAR_30;
 unsigned FUNC_21(rx_buf_count);

 VAR_23 = FUNC_17(VAR_21->master);
 VAR_30 = &VAR_23->pdata;
 VAR_29 = (struct davinci_spi_config *)VAR_21->controller_data;
 if (!VAR_29)
  VAR_29 = &VAR_18;


 VAR_24 = VAR_23->bytes_per_word[VAR_21->chip_select];

 VAR_23->tx = VAR_22->tx_buf;
 VAR_23->rx = VAR_22->rx_buf;
 VAR_23->wcount = VAR_22->len / VAR_24;
 VAR_23->rcount = VAR_23->wcount;

 VAR_27 = FUNC_12(VAR_23->base + VAR_8);

 FUNC_1(VAR_23->base + VAR_10, VAR_11);
 FUNC_16(VAR_23->base + VAR_10, VAR_12);

 FUNC_15(&VAR_23->done);

 if (!FUNC_3(VAR_21->master, VAR_21, VAR_22)) {
  if (VAR_29->io_type != VAR_17)
   FUNC_16(VAR_23->base + VAR_13, VAR_16);

  VAR_23->wcount--;
  VAR_26 = VAR_23->get_tx(VAR_23);
  VAR_27 &= 0xFFFF0000;
  VAR_27 |= VAR_26 & 0xFFFF;
  FUNC_14(VAR_27, VAR_23->base + VAR_8);
 } else {
  struct dma_slave_config VAR_31 = {
   .direction = VAR_1,
   .src_addr = (unsigned long)VAR_23->pbase + VAR_7,
   .src_addr_width = VAR_24,
   .src_maxburst = 1,
  };
  struct dma_slave_config VAR_32 = {
   .direction = VAR_2,
   .dst_addr = (unsigned long)VAR_23->pbase + VAR_8,
   .dst_addr_width = VAR_24,
   .dst_maxburst = 1,
  };
  struct dma_async_tx_descriptor *VAR_33;
  struct dma_async_tx_descriptor *VAR_34;

  FUNC_10(VAR_23->dma_rx, &VAR_31);
  FUNC_10(VAR_23->dma_tx, &VAR_32);

  VAR_33 = FUNC_9(VAR_23->dma_rx,
    VAR_22->rx_sg.sgl, VAR_22->rx_sg.nents, VAR_1,
    VAR_3 | VAR_0);
  if (!VAR_33)
   goto err_desc;

  if (!VAR_22->tx_buf) {





   VAR_22->tx_sg.sgl = VAR_22->rx_sg.sgl;
   VAR_22->tx_sg.nents = VAR_22->rx_sg.nents;
  }

  VAR_34 = FUNC_9(VAR_23->dma_tx,
    VAR_22->tx_sg.sgl, VAR_22->tx_sg.nents, VAR_2,
    VAR_3 | VAR_0);
  if (!VAR_34)
   goto err_desc;

  VAR_33->callback = VAR_19;
  VAR_33->callback_param = (void *)VAR_23;
  VAR_34->callback = VAR_20;
  VAR_34->callback_param = (void *)VAR_23;

  if (VAR_30->cshold_bug)
   FUNC_13(VAR_27 >> 16, VAR_23->base + VAR_8 + 2);

  FUNC_11(VAR_33);
  FUNC_11(VAR_34);

  FUNC_8(VAR_23->dma_rx);
  FUNC_8(VAR_23->dma_tx);

  FUNC_16(VAR_23->base + VAR_13, VAR_14);
 }


 if (VAR_29->io_type != VAR_17) {
  if (FUNC_19(&VAR_23->done, VAR_6) == 0)
   VAR_28 = VAR_9;
 } else {
  while (VAR_23->rcount > 0 || VAR_23->wcount > 0) {
   VAR_28 = FUNC_5(VAR_23);
   if (VAR_28)
    break;
   FUNC_2();
  }
 }

 FUNC_1(VAR_23->base + VAR_13, VAR_15);
 if (FUNC_3(VAR_21->master, VAR_21, VAR_22))
  FUNC_1(VAR_23->base + VAR_13, VAR_14);

 FUNC_1(VAR_23->base + VAR_10, VAR_12);
 FUNC_16(VAR_23->base + VAR_10, VAR_11);





 if (VAR_28) {
  VAR_25 = FUNC_4(VAR_23, VAR_28);
  FUNC_0(!VAR_25, "%s: error reported but no error found!\n",
       FUNC_7(&VAR_21->dev));
  return VAR_25;
 }

 if (VAR_23->rcount != 0 || VAR_23->wcount != 0) {
  FUNC_6(&VAR_21->dev, "SPI data transfer error\n");
  return -VAR_4;
 }

 return VAR_22->len;

err_desc:
 return VAR_25;
}
