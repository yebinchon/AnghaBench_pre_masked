
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pxamci_host {unsigned long long clkrate; unsigned int clkrt; int dma_cookie; int mmc; int dma_len; int dma_dir; struct dma_chan* dma_chan_tx; struct dma_chan* dma_chan_rx; TYPE_1__* res; scalar_t__ base; struct mmc_data* data; } ;
struct mmc_data {unsigned int blocks; unsigned int blksz; unsigned int timeout_clks; int flags; int sg; int sg_len; scalar_t__ timeout_ns; } ;
struct dma_slave_config {int src_maxburst; int dst_maxburst; int direction; scalar_t__ dst_addr; scalar_t__ src_addr; void* dst_addr_width; void* src_addr_width; } ;
struct dma_chan {TYPE_2__* device; } ;
struct dma_async_tx_descriptor {struct pxamci_host* callback_param; int callback; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef int config ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct dma_async_tx_descriptor* FUNC_4 (struct dma_chan*,int ,int ,int,int ) ;
 int FUNC_5 (struct dma_chan*,struct dma_slave_config*) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;
 int FUNC_7 (unsigned long long,unsigned long) ;
 int FUNC_8 (struct dma_slave_config*,int ,int) ;
 int FUNC_9 (int ) ;
 int VAR_12 ;
 int FUNC_10 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct pxamci_host *VAR_13, struct mmc_data *VAR_14)
{
 struct dma_async_tx_descriptor *VAR_15;
 enum dma_transfer_direction VAR_16;
 struct dma_slave_config VAR_17;
 struct dma_chan *VAR_18;
 unsigned int VAR_19 = VAR_14->blocks;
 unsigned long long VAR_20;
 unsigned int VAR_21;
 int VAR_22;

 VAR_13->data = VAR_14;

 FUNC_10(VAR_19, VAR_13->base + VAR_8);
 FUNC_10(VAR_14->blksz, VAR_13->base + VAR_6);

 VAR_20 = (unsigned long long)VAR_14->timeout_ns * VAR_13->clkrate;
 FUNC_7(VAR_20, 1000000000UL);
 VAR_21 = (unsigned int)VAR_20 + (VAR_14->timeout_clks << VAR_13->clkrt);
 FUNC_10((VAR_21 + 255) / 256, VAR_13->base + VAR_9);

 FUNC_8(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.src_addr_width = VAR_4;
 VAR_17.dst_addr_width = VAR_4;
 VAR_17.src_addr = VAR_13->res->start + VAR_10;
 VAR_17.dst_addr = VAR_13->res->start + VAR_11;
 VAR_17.src_maxburst = 32;
 VAR_17.dst_maxburst = 32;

 if (VAR_14->flags & VAR_7) {
  VAR_13->dma_dir = VAR_1;
  VAR_16 = VAR_0;
  VAR_18 = VAR_13->dma_chan_rx;
 } else {
  VAR_13->dma_dir = VAR_5;
  VAR_16 = VAR_2;
  VAR_18 = VAR_13->dma_chan_tx;
 }

 VAR_17.direction = VAR_16;

 VAR_22 = FUNC_5(VAR_18, &VAR_17);
 if (VAR_22 < 0) {
  FUNC_1(FUNC_9(VAR_13->mmc), "dma slave config failed\n");
  return;
 }

 VAR_13->dma_len = FUNC_3(VAR_18->device->dev, VAR_14->sg, VAR_14->sg_len,
       VAR_13->dma_dir);

 VAR_15 = FUNC_4(VAR_18, VAR_14->sg, VAR_13->dma_len, VAR_16,
         VAR_3);
 if (!VAR_15) {
  FUNC_1(FUNC_9(VAR_13->mmc), "prep_slave_sg() failed\n");
  return;
 }

 if (!(VAR_14->flags & VAR_7)) {
  VAR_15->callback = VAR_12;
  VAR_15->callback_param = VAR_13;
 }

 VAR_13->dma_cookie = FUNC_6(VAR_15);







 if (!FUNC_0() || VAR_14->flags & VAR_7)
  FUNC_2(VAR_18);
}
