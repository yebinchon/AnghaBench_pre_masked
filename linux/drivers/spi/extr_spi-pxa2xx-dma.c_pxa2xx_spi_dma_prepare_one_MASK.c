
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sg_table {int nents; int sgl; } ;
struct spi_transfer {struct sg_table rx_sg; struct sg_table tx_sg; } ;
struct driver_data {int n_bytes; TYPE_3__* pdev; TYPE_2__* controller; int ssdr_physical; } ;
struct dma_slave_config {int direction; int dst_addr_width; int src_addr_width; int src_maxburst; int src_addr; int dst_maxburst; int dst_addr; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct chip_data {int dma_burst_size; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
typedef int cfg ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct dma_chan* dma_rx; struct dma_chan* dma_tx; TYPE_1__* cur_msg; } ;
struct TYPE_4__ {int spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 struct dma_async_tx_descriptor* FUNC_1 (struct dma_chan*,int ,int ,int,int) ;
 int FUNC_2 (struct dma_chan*,struct dma_slave_config*) ;
 int FUNC_3 (struct dma_slave_config*,int ,int) ;
 struct chip_data* FUNC_4 (int ) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_5(struct driver_data *VAR_6,
      enum dma_transfer_direction VAR_7,
      struct spi_transfer *VAR_8)
{
 struct chip_data *VAR_9 =
  FUNC_4(VAR_6->controller->cur_msg->spi);
 enum dma_slave_buswidth VAR_10;
 struct dma_slave_config VAR_11;
 struct dma_chan *VAR_12;
 struct sg_table *VAR_13;
 int VAR_14;

 switch (VAR_6->n_bytes) {
 case 1:
  VAR_10 = VAR_3;
  break;
 case 2:
  VAR_10 = VAR_4;
  break;
 default:
  VAR_10 = VAR_5;
  break;
 }

 FUNC_3(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.direction = VAR_7;

 if (VAR_7 == VAR_1) {
  VAR_11.dst_addr = VAR_6->ssdr_physical;
  VAR_11.dst_addr_width = VAR_10;
  VAR_11.dst_maxburst = VAR_9->dma_burst_size;

  VAR_13 = &VAR_8->tx_sg;
  VAR_12 = VAR_6->controller->dma_tx;
 } else {
  VAR_11.src_addr = VAR_6->ssdr_physical;
  VAR_11.src_addr_width = VAR_10;
  VAR_11.src_maxburst = VAR_9->dma_burst_size;

  VAR_13 = &VAR_8->rx_sg;
  VAR_12 = VAR_6->controller->dma_rx;
 }

 VAR_14 = FUNC_2(VAR_12, &VAR_11);
 if (VAR_14) {
  FUNC_0(&VAR_6->pdev->dev, "DMA slave config failed\n");
  return ((void*)0);
 }

 return FUNC_1(VAR_12, VAR_13->sgl, VAR_13->nents, VAR_7,
           VAR_2 | VAR_0);
}
