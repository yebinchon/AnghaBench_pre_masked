
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fifosize; } ;
struct mxs_auart_port {TYPE_1__ port; int dev; int flags; void* tx_dma_buf; void* tx_dma_chan; void* rx_dma_buf; void* rx_dma_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mxs_auart_port*) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int ,char*) ;
 void* FUNC_3 (int ,int) ;
 int FUNC_4 (struct mxs_auart_port*) ;

__attribute__((used)) static int FUNC_5(struct mxs_auart_port *VAR_5)
{
 if (FUNC_0(VAR_5))
  return 0;


 VAR_5->rx_dma_chan = FUNC_2(VAR_5->dev, "rx");
 if (!VAR_5->rx_dma_chan)
  goto err_out;
 VAR_5->rx_dma_buf = FUNC_3(VAR_4, VAR_2 | VAR_1);
 if (!VAR_5->rx_dma_buf)
  goto err_out;


 VAR_5->tx_dma_chan = FUNC_2(VAR_5->dev, "tx");
 if (!VAR_5->tx_dma_chan)
  goto err_out;
 VAR_5->tx_dma_buf = FUNC_3(VAR_4, VAR_2 | VAR_1);
 if (!VAR_5->tx_dma_buf)
  goto err_out;


 VAR_5->flags |= VAR_3;
 FUNC_1(VAR_5->dev, "enabled the DMA support.");


 VAR_5->port.fifosize = VAR_4;

 return 0;

err_out:
 FUNC_4(VAR_5);
 return -VAR_0;

}
