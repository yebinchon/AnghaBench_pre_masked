
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_qup {int dummy; } ;
struct spi_master {struct dma_chan* dma_rx; struct dma_chan* dma_tx; } ;
struct scatterlist {int dummy; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {struct spi_qup* callback_param; int callback; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef int dma_cookie_t ;
typedef int dma_async_tx_callback ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 int FUNC_2 (int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (struct dma_chan*,struct scatterlist*,unsigned int,int,unsigned long) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 struct spi_qup* FUNC_5 (struct spi_master*) ;

__attribute__((used)) static int FUNC_6(struct spi_master *VAR_4, struct scatterlist *VAR_5,
      unsigned int VAR_6, enum dma_transfer_direction VAR_7,
      dma_async_tx_callback VAR_8)
{
 struct spi_qup *VAR_9 = FUNC_5(VAR_4);
 unsigned long VAR_10 = VAR_2 | VAR_1;
 struct dma_async_tx_descriptor *VAR_11;
 struct dma_chan *VAR_12;
 dma_cookie_t VAR_13;

 if (VAR_7 == VAR_0)
  VAR_12 = VAR_4->dma_tx;
 else
  VAR_12 = VAR_4->dma_rx;

 VAR_11 = FUNC_3(VAR_12, VAR_5, VAR_6, VAR_7, VAR_10);
 if (FUNC_0(VAR_11))
  return VAR_11 ? FUNC_1(VAR_11) : -VAR_3;

 VAR_11->callback = VAR_8;
 VAR_11->callback_param = VAR_9;

 VAR_13 = FUNC_4(VAR_11);

 return FUNC_2(VAR_13);
}
