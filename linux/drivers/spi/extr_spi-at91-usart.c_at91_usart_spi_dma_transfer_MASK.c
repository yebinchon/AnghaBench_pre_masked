
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nents; int sgl; } ;
struct TYPE_4__ {int nents; int sgl; } ;
struct spi_transfer {TYPE_2__ tx_sg; TYPE_1__ rx_sg; } ;
struct spi_controller {struct dma_chan* dma_tx; struct dma_chan* dma_rx; } ;
struct dma_chan {TYPE_3__* device; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;struct spi_controller* callback_param; int callback; } ;
struct at91_usart_spi {int dummy; } ;
typedef int dma_cookie_t ;
struct TYPE_6__ {int (* device_issue_pending ) (struct dma_chan*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct spi_controller*) ;
 int FUNC_1 (struct at91_usart_spi*,int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (struct dma_chan*,int ,int ,int ,int) ;
 struct at91_usart_spi* FUNC_4 (struct spi_controller*) ;
 int FUNC_5 (struct dma_async_tx_descriptor*) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;
 int FUNC_7 (struct dma_chan*) ;
 int FUNC_8 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_9(struct spi_controller *VAR_9,
           struct spi_transfer *VAR_10)
{
 struct at91_usart_spi *VAR_11 = FUNC_4(VAR_9);
 struct dma_chan *VAR_12 = VAR_9->dma_rx;
 struct dma_chan *VAR_13 = VAR_9->dma_tx;
 struct dma_async_tx_descriptor *VAR_14;
 struct dma_async_tx_descriptor *VAR_15;
 dma_cookie_t VAR_16;


 FUNC_1(VAR_11, VAR_5, VAR_7);

 VAR_14 = FUNC_3(VAR_12,
      VAR_10->rx_sg.sgl,
      VAR_10->rx_sg.nents,
      VAR_1,
      VAR_3 |
      VAR_0);
 if (!VAR_14)
  goto at91_usart_spi_err_dma;

 VAR_15 = FUNC_3(VAR_13,
      VAR_10->tx_sg.sgl,
      VAR_10->tx_sg.nents,
      VAR_2,
      VAR_3 |
      VAR_0);
 if (!VAR_15)
  goto at91_usart_spi_err_dma;

 VAR_14->callback = VAR_8;
 VAR_14->callback_param = VAR_9;

 VAR_16 = VAR_14->tx_submit(VAR_14);
 if (FUNC_2(VAR_16))
  goto at91_usart_spi_err_dma;

 VAR_16 = VAR_15->tx_submit(VAR_15);
 if (FUNC_2(VAR_16))
  goto at91_usart_spi_err_dma;

 VAR_12->device->device_issue_pending(VAR_12);
 VAR_13->device->device_issue_pending(VAR_13);

 return 0;

at91_usart_spi_err_dma:

 FUNC_1(VAR_11, VAR_6, VAR_7);
 FUNC_0(VAR_9);

 return -VAR_4;
}
