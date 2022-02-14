
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_nfc {int dev; scalar_t__ regs; TYPE_1__* caps; int dmac; } ;
struct scatterlist {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_cookie_t ;
struct TYPE_2__ {scalar_t__ extra_mbus_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,struct scatterlist*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scatterlist*,int,int) ;
 struct dma_async_tx_descriptor* FUNC_3 (int ,struct scatterlist*,int,int,int ) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct scatterlist*,void const*,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct sunxi_nfc *VAR_11, const void *VAR_12,
        int VAR_13, int VAR_14,
        enum dma_data_direction VAR_15,
        struct scatterlist *VAR_16)
{
 struct dma_async_tx_descriptor *VAR_17;
 enum dma_transfer_direction VAR_18;
 dma_cookie_t VAR_19;
 int VAR_20;

 if (VAR_15 == VAR_2)
  VAR_18 = VAR_1;
 else
  VAR_18 = VAR_3;

 FUNC_6(VAR_16, VAR_12, VAR_14 * VAR_13);
 VAR_20 = FUNC_0(VAR_11->dev, VAR_16, 1, VAR_15);
 if (!VAR_20)
  return -VAR_5;

 VAR_17 = FUNC_3(VAR_11->dmac, VAR_16, 1, VAR_18, VAR_0);
 if (!VAR_17) {
  VAR_20 = -VAR_4;
  goto err_unmap_buf;
 }

 FUNC_7(FUNC_5(VAR_11->regs + VAR_8) | VAR_6,
        VAR_11->regs + VAR_8);
 FUNC_7(VAR_14, VAR_11->regs + VAR_10);
 FUNC_7(VAR_13, VAR_11->regs + VAR_7);
 if (VAR_11->caps->extra_mbus_conf)
  FUNC_7(VAR_13 * VAR_14, VAR_11->regs + VAR_9);

 VAR_19 = FUNC_4(VAR_17);

 VAR_20 = FUNC_1(VAR_19);
 if (VAR_20)
  goto err_clr_dma_flag;

 return 0;

err_clr_dma_flag:
 FUNC_7(FUNC_5(VAR_11->regs + VAR_8) & ~VAR_6,
        VAR_11->regs + VAR_8);

err_unmap_buf:
 FUNC_2(VAR_11->dev, VAR_16, 1, VAR_15);
 return VAR_20;
}
