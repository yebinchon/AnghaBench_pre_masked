
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct mmc_request {int (* done ) (struct mmc_request*) ;TYPE_2__* cmd; struct mmc_data* data; TYPE_1__* stop; } ;
struct mmc_host {TYPE_3__* card; } ;
struct mmc_data {int blocks; int blksz; scalar_t__ timeout_ns; int sg_len; int sg; } ;
struct cvm_mmc_slot {struct cvm_mmc_host* host; } ;
struct cvm_mmc_host {int dma_active; int (* release_bus ) (struct cvm_mmc_host*) ;scalar_t__ base; int (* dmar_fixup ) (struct cvm_mmc_host*,TYPE_2__*,struct mmc_data*,int) ;int (* int_enable ) (struct cvm_mmc_host*,int) ;int * dev; struct mmc_request* current_req; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int error; } ;
struct TYPE_4__ {scalar_t__ opcode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cvm_mmc_host*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct cvm_mmc_host*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct mmc_request*) ;
 int FUNC_3 (struct cvm_mmc_slot*) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 struct cvm_mmc_slot* FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (char*,int,int,int) ;
 int FUNC_8 (struct cvm_mmc_host*,struct mmc_data*) ;
 int FUNC_9 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_10 (struct cvm_mmc_slot*,scalar_t__) ;
 int FUNC_11 (struct cvm_mmc_host*,int) ;
 int FUNC_12 (struct cvm_mmc_host*,TYPE_2__*,struct mmc_data*,int) ;
 int FUNC_13 (struct mmc_request*) ;
 int FUNC_14 (struct cvm_mmc_host*) ;
 int FUNC_15 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_16(struct mmc_host *VAR_5,
    struct mmc_request *VAR_6)
{
 struct cvm_mmc_slot *VAR_7 = FUNC_6(VAR_5);
 struct cvm_mmc_host *VAR_8 = VAR_7->host;
 struct mmc_data *VAR_9;
 u64 VAR_10, VAR_11;

 if (!VAR_6->data || !VAR_6->data->sg || !VAR_6->data->sg_len ||
     !VAR_6->stop || VAR_6->stop->opcode != VAR_4) {
  FUNC_4(&VAR_5->card->dev,
   "Error: cmv_mmc_dma_request no data\n");
  goto error;
 }

 FUNC_3(VAR_7);

 VAR_9 = VAR_6->data;
 FUNC_7("DMA request  blocks: %d  block_size: %d  total_size: %d\n",
   VAR_9->blocks, VAR_9->blksz, VAR_9->blocks * VAR_9->blksz);
 if (VAR_9->timeout_ns)
  FUNC_10(VAR_7, VAR_9->timeout_ns);

 FUNC_2(VAR_8->current_req);
 VAR_8->current_req = VAR_6;

 VAR_10 = FUNC_9(VAR_5, VAR_6);
 VAR_11 = FUNC_8(VAR_8, VAR_9);
 if (!VAR_11) {
  FUNC_4(VAR_8->dev, "prepare_dma failed\n");
  goto error;
 }

 VAR_8->dma_active = 1;
 VAR_8->int_enable(VAR_8, VAR_1 | VAR_2 |
    VAR_3);

 if (VAR_8->dmar_fixup)
  VAR_8->dmar_fixup(VAR_8, VAR_6->cmd, VAR_9, VAR_11);






 if (FUNC_5(VAR_5->card))
  FUNC_15(0x00b00000ull, VAR_8->base + FUNC_1(VAR_8));
 else
  FUNC_15(0xe4390080ull, VAR_8->base + FUNC_1(VAR_8));
 FUNC_15(VAR_10, VAR_8->base + FUNC_0(VAR_8));
 return;

error:
 VAR_6->cmd->error = -VAR_0;
 if (VAR_6->done)
  VAR_6->done(VAR_6);
 VAR_8->release_bus(VAR_8);
}
