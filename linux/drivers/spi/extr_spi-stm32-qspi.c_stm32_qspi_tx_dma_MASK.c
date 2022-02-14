
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_qspi {int ctrl; scalar_t__ io_base; int dma_completion; struct dma_chan* dma_chtx; struct dma_chan* dma_chrx; } ;
struct TYPE_2__ {scalar_t__ dir; } ;
struct spi_mem_op {TYPE_1__ data; } ;
struct sg_table {int nents; int sgl; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int * callback_param; int callback; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ) ;
 struct dma_async_tx_descriptor* FUNC_2 (struct dma_chan*,int ,int,int,int ) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct spi_mem_op const*,struct sg_table*) ;
 int FUNC_9 (int ,struct spi_mem_op const*,struct sg_table*) ;
 int VAR_9 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct stm32_qspi *VAR_10,
        const struct spi_mem_op *VAR_11)
{
 struct dma_async_tx_descriptor *VAR_12;
 enum dma_transfer_direction VAR_13;
 struct dma_chan *VAR_14;
 struct sg_table VAR_15;
 dma_cookie_t VAR_16;
 u32 VAR_17, VAR_18;
 int VAR_19;

 if (VAR_11->data.dir == VAR_7) {
  VAR_13 = VAR_1;
  VAR_14 = VAR_10->dma_chrx;
 } else {
  VAR_13 = VAR_2;
  VAR_14 = VAR_10->dma_chtx;
 }





 VAR_19 = FUNC_8(VAR_10->ctrl, VAR_11, &VAR_15);
 if (VAR_19)
  return VAR_19;

 VAR_12 = FUNC_2(VAR_14, VAR_15.sgl, VAR_15.nents,
           VAR_13, VAR_3);
 if (!VAR_12) {
  VAR_19 = -VAR_4;
  goto out_unmap;
 }

 VAR_17 = FUNC_6(VAR_10->io_base + VAR_6);

 FUNC_7(&VAR_10->dma_completion);
 VAR_12->callback = VAR_9;
 VAR_12->callback_param = &VAR_10->dma_completion;
 VAR_16 = FUNC_3(VAR_12);
 VAR_19 = FUNC_1(VAR_16);
 if (VAR_19)
  goto out;

 FUNC_0(VAR_14);

 FUNC_11(VAR_17 | VAR_0, VAR_10->io_base + VAR_6);

 VAR_18 = VAR_15.nents * VAR_8;
 if (!FUNC_10(&VAR_10->dma_completion,
      FUNC_5(VAR_18)))
  VAR_19 = -VAR_5;

 if (VAR_19)
  FUNC_4(VAR_14);

out:
 FUNC_11(VAR_17 & ~VAR_0, VAR_10->io_base + VAR_6);
out_unmap:
 FUNC_9(VAR_10->ctrl, VAR_11, &VAR_15);

 return VAR_19;
}
