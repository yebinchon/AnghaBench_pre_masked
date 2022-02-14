
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3cmci_host {int mmc; int dma; scalar_t__ base; int prescaler; scalar_t__ sdidata; TYPE_1__* mem; } ;
struct mmc_data {int flags; int sg_len; int sg; } ;
struct dma_slave_config {int direction; int dst_addr_width; int src_addr_width; scalar_t__ dst_addr; scalar_t__ src_addr; } ;
struct dma_async_tx_descriptor {struct s3cmci_host* callback_param; int callback; } ;
struct TYPE_2__ {scalar_t__ start; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct dma_async_tx_descriptor* FUNC_4 (int ,int ,int ,int ,int) ;
 int FUNC_5 (int ,struct dma_slave_config*) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mmc_data*) ;
 int VAR_9 ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct s3cmci_host *VAR_10, struct mmc_data *VAR_11)
{
 int VAR_12 = VAR_11->flags & VAR_7;
 struct dma_async_tx_descriptor *VAR_13;
 struct dma_slave_config VAR_14 = {
  .src_addr = VAR_10->mem->start + VAR_10->sdidata,
  .dst_addr = VAR_10->mem->start + VAR_10->sdidata,
  .src_addr_width = VAR_5,
  .dst_addr_width = VAR_5,
 };

 FUNC_0((VAR_11->flags & VAR_0) == VAR_0);


 FUNC_9(VAR_10->prescaler, VAR_10->base + VAR_8);

 if (!VAR_12)
  VAR_14.direction = VAR_2;
 else
  VAR_14.direction = VAR_3;

 FUNC_2(FUNC_7(VAR_10->mmc), VAR_11->sg, VAR_11->sg_len,
     FUNC_8(VAR_11));

 FUNC_5(VAR_10->dma, &VAR_14);
 VAR_13 = FUNC_4(VAR_10->dma, VAR_11->sg, VAR_11->sg_len,
  VAR_14.direction,
  VAR_1 | VAR_4);
 if (!VAR_13)
  goto unmap_exit;
 VAR_13->callback = VAR_9;
 VAR_13->callback_param = VAR_10;
 FUNC_6(VAR_13);
 FUNC_1(VAR_10->dma);

 return 0;

unmap_exit:
 FUNC_3(FUNC_7(VAR_10->mmc), VAR_11->sg, VAR_11->sg_len,
       FUNC_8(VAR_11));
 return -VAR_6;
}
