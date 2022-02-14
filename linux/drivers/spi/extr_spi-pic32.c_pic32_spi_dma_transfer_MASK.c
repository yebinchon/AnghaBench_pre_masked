
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nents; int sgl; } ;
struct TYPE_3__ {int nents; int sgl; } ;
struct spi_transfer {TYPE_2__ tx_sg; TYPE_1__ rx_sg; } ;
struct spi_master {int dma_rx; int dma_tx; } ;
struct pic32_spi {struct spi_master* master; } ;
struct dma_async_tx_descriptor {struct pic32_spi* callback_param; int callback; } ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct dma_async_tx_descriptor* FUNC_2 (int ,int ,int ,int ,int) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct pic32_spi *VAR_7,
      struct spi_transfer *VAR_8)
{
 struct spi_master *VAR_9 = VAR_7->master;
 struct dma_async_tx_descriptor *VAR_10;
 struct dma_async_tx_descriptor *VAR_11;
 dma_cookie_t VAR_12;
 int VAR_13;

 if (!VAR_9->dma_rx || !VAR_9->dma_tx)
  return -VAR_5;

 VAR_10 = FUNC_2(VAR_9->dma_rx,
       VAR_8->rx_sg.sgl,
       VAR_8->rx_sg.nents,
       VAR_1,
       VAR_3 | VAR_0);
 if (!VAR_10) {
  VAR_13 = -VAR_4;
  goto err_dma;
 }

 VAR_11 = FUNC_2(VAR_9->dma_tx,
       VAR_8->tx_sg.sgl,
       VAR_8->tx_sg.nents,
       VAR_2,
       VAR_3 | VAR_0);
 if (!VAR_11) {
  VAR_13 = -VAR_4;
  goto err_dma;
 }


 VAR_10->callback = VAR_6;
 VAR_10->callback_param = VAR_7;

 VAR_12 = FUNC_3(VAR_10);
 VAR_13 = FUNC_1(VAR_12);
 if (VAR_13)
  goto err_dma;

 VAR_12 = FUNC_3(VAR_11);
 VAR_13 = FUNC_1(VAR_12);
 if (VAR_13)
  goto err_dma_tx;

 FUNC_0(VAR_9->dma_rx);
 FUNC_0(VAR_9->dma_tx);

 return 0;

err_dma_tx:
 FUNC_4(VAR_9->dma_rx);
err_dma:
 return VAR_13;
}
