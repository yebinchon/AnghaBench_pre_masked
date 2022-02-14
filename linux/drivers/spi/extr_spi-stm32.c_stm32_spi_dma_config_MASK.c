
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct stm32_spi {int cur_bpw; int cur_fthlv; int dev; TYPE_4__* cfg; scalar_t__ phys_addr; } ;
struct dma_slave_config {int direction; int src_addr_width; int dst_addr_width; void* dst_maxburst; scalar_t__ dst_addr; void* src_maxburst; scalar_t__ src_addr; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
struct TYPE_8__ {TYPE_3__* regs; scalar_t__ has_fifo; } ;
struct TYPE_6__ {scalar_t__ reg; } ;
struct TYPE_5__ {scalar_t__ reg; } ;
struct TYPE_7__ {TYPE_2__ tx; TYPE_1__ rx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,void*) ;
 int FUNC_1 (struct dma_slave_config*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct stm32_spi *VAR_5,
     struct dma_slave_config *VAR_6,
     enum dma_transfer_direction VAR_7)
{
 enum dma_slave_buswidth VAR_8;
 u32 VAR_9;

 if (VAR_5->cur_bpw <= 8)
  VAR_8 = VAR_2;
 else if (VAR_5->cur_bpw <= 16)
  VAR_8 = VAR_3;
 else
  VAR_8 = VAR_4;

 if (VAR_5->cfg->has_fifo) {

  if (VAR_5->cur_fthlv == 2)
   VAR_9 = 1;
  else
   VAR_9 = VAR_5->cur_fthlv;
 } else {
  VAR_9 = 1;
 }

 FUNC_1(VAR_6, 0, sizeof(struct dma_slave_config));
 VAR_6->direction = VAR_7;
 if (VAR_6->direction == VAR_0) {
  VAR_6->src_addr = VAR_5->phys_addr + VAR_5->cfg->regs->rx.reg;
  VAR_6->src_addr_width = VAR_8;
  VAR_6->src_maxburst = VAR_9;

  FUNC_0(VAR_5->dev, "Rx DMA config buswidth=%d, maxburst=%d\n",
   VAR_8, VAR_9);
 } else if (VAR_6->direction == VAR_1) {
  VAR_6->dst_addr = VAR_5->phys_addr + VAR_5->cfg->regs->tx.reg;
  VAR_6->dst_addr_width = VAR_8;
  VAR_6->dst_maxburst = VAR_9;

  FUNC_0(VAR_5->dev, "Tx DMA config buswidth=%d, maxburst=%d\n",
   VAR_8, VAR_9);
 }
}
