
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mmc_request {int (* done ) (struct mmc_request*) ;scalar_t__ data; TYPE_1__* cmd; } ;
struct cvm_mmc_host {int irq_handler_lock; scalar_t__ need_irq_handler_lock; int (* release_bus ) (struct cvm_mmc_host*) ;int (* dmar_fixup_done ) (struct cvm_mmc_host*) ;struct mmc_request* current_req; scalar_t__ dma_active; scalar_t__ base; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int error; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cvm_mmc_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct cvm_mmc_host*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct cvm_mmc_host*) ;
 int FUNC_7 (struct cvm_mmc_host*,int) ;
 int FUNC_8 (struct cvm_mmc_host*,struct mmc_request*,int) ;
 int FUNC_9 (struct mmc_request*) ;
 int FUNC_10 (struct cvm_mmc_host*,scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct cvm_mmc_host*,struct mmc_request*,int) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (struct mmc_request*) ;
 int FUNC_16 (struct cvm_mmc_host*) ;
 int FUNC_17 (struct cvm_mmc_host*) ;
 int FUNC_18 (int,scalar_t__) ;

irqreturn_t FUNC_19(int VAR_9, void *VAR_10)
{
 struct cvm_mmc_host *VAR_11 = VAR_10;
 struct mmc_request *VAR_12;
 unsigned long VAR_13 = 0;
 u64 VAR_14, VAR_15;
 bool VAR_16;

 if (VAR_11->need_irq_handler_lock)
  FUNC_13(&VAR_11->irq_handler_lock, VAR_13);
 else
  FUNC_3(&VAR_11->irq_handler_lock);


 VAR_14 = FUNC_11(VAR_11->base + FUNC_1(VAR_11));
 FUNC_18(VAR_14, VAR_11->base + FUNC_1(VAR_11));

 if (VAR_14 & VAR_5)
  FUNC_6(VAR_11);

 VAR_12 = VAR_11->current_req;
 if (!VAR_12)
  goto out;

 VAR_15 = FUNC_11(VAR_11->base + FUNC_2(VAR_11));





 if ((VAR_15 & VAR_8) && VAR_11->dma_active)
  goto out;

 if (!VAR_11->dma_active && VAR_12->data &&
     (VAR_14 & VAR_0)) {
  unsigned int VAR_17 = (VAR_15 >> 7) & 3;

  if (VAR_17 == 1)
   FUNC_8(VAR_11, VAR_12, VAR_15 & VAR_6);
  else if (VAR_17 == 2)
   FUNC_9(VAR_12);
 }

 VAR_16 = VAR_14 & VAR_1 ||
      VAR_14 & VAR_3 ||
      VAR_14 & VAR_2 ||
      VAR_14 & VAR_4;

 if (!(VAR_16 && VAR_12->done))
  goto no_req_done;

 VAR_12->cmd->error = FUNC_5(VAR_15);

 if (VAR_11->dma_active && VAR_12->data)
  if (!FUNC_10(VAR_11, VAR_12->data))
   goto no_req_done;

 FUNC_12(VAR_11, VAR_12, VAR_15);
 if ((VAR_14 & VAR_4) &&
     (VAR_15 & VAR_7))
  FUNC_7(VAR_11, VAR_15);

 VAR_11->current_req = ((void*)0);
 VAR_12->done(VAR_12);

no_req_done:
 if (VAR_11->dmar_fixup_done)
  VAR_11->dmar_fixup_done(VAR_11);
 if (VAR_16)
  VAR_11->release_bus(VAR_11);
out:
 if (VAR_11->need_irq_handler_lock)
  FUNC_14(&VAR_11->irq_handler_lock, VAR_13);
 else
  FUNC_4(&VAR_11->irq_handler_lock);
 return FUNC_0(VAR_14 != 0);
}
