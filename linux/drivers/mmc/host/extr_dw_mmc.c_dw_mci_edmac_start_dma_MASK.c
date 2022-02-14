
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct dw_mci {int fifo_reg; int regs; int phy_regs; TYPE_3__* dms; TYPE_2__* slot; TYPE_1__* data; int dev; } ;
struct dma_slave_config {int dst_addr; int src_addr; int dst_maxburst; int src_maxburst; int direction; void* src_addr_width; void* dst_addr_width; } ;
struct dma_async_tx_descriptor {void* callback_param; int callback; } ;
struct TYPE_6__ {int ch; } ;
struct TYPE_5__ {int mmc; } ;
struct TYPE_4__ {int sg_len; int flags; struct scatterlist* sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scatterlist*,int,int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (int ,struct scatterlist*,unsigned int,int ,int) ;
 int FUNC_4 (int ,struct dma_slave_config*) ;
 int FUNC_5 (struct dma_async_tx_descriptor*) ;
 int VAR_9 ;
 int FUNC_6 (struct dw_mci*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dw_mci *VAR_10,
         unsigned int VAR_11)
{
 struct dma_slave_config VAR_12;
 struct dma_async_tx_descriptor *VAR_13 = ((void*)0);
 struct scatterlist *VAR_14 = VAR_10->data->sg;
 static const u32 VAR_15[] = {1, 4, 8, 16, 32, 64, 128, 256};
 u32 VAR_16 = VAR_10->data->sg_len;
 u32 VAR_17;
 u32 VAR_18 = VAR_10->fifo_reg - VAR_10->regs;
 int VAR_19 = 0;


 VAR_12.dst_addr = VAR_10->phy_regs + VAR_18;
 VAR_12.src_addr = VAR_12.dst_addr;
 VAR_12.dst_addr_width = VAR_4;
 VAR_12.src_addr_width = VAR_4;


 VAR_17 = FUNC_6(VAR_10, VAR_7);
 VAR_12.dst_maxburst = VAR_15[(VAR_17 >> 28) & 0x7];
 VAR_12.src_maxburst = VAR_12.dst_maxburst;

 if (VAR_10->data->flags & VAR_8)
  VAR_12.direction = VAR_2;
 else
  VAR_12.direction = VAR_1;

 VAR_19 = FUNC_4(VAR_10->dms->ch, &VAR_12);
 if (VAR_19) {
  FUNC_0(VAR_10->dev, "Failed to config edmac.\n");
  return -VAR_6;
 }

 VAR_13 = FUNC_3(VAR_10->dms->ch, VAR_14,
           VAR_11, VAR_12.direction,
           VAR_3 | VAR_0);
 if (!VAR_13) {
  FUNC_0(VAR_10->dev, "Can't prepare slave sg.\n");
  return -VAR_6;
 }


 VAR_13->callback = VAR_9;
 VAR_13->callback_param = (void *)VAR_10;
 FUNC_5(VAR_13);


 if (VAR_10->data->flags & VAR_8)
  FUNC_2(FUNC_7(VAR_10->slot->mmc), VAR_14,
           VAR_16, VAR_5);

 FUNC_1(VAR_10->dms->ch);

 return 0;
}
