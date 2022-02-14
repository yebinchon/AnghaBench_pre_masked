
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mxcmci_host {scalar_t__ dma_dir; int lock; scalar_t__ use_sdio; TYPE_1__* desc; int mmc; struct mmc_command* cmd; int default_irq_mask; } ;
struct mmc_command {int error; unsigned int opcode; int arg; } ;
struct TYPE_2__ {struct mxcmci_host* callback_param; int callback; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmc_command*) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (struct mxcmci_host*) ;
 int FUNC_5 (struct mxcmci_host*,int ,int ) ;
 int FUNC_6 (struct mxcmci_host*,unsigned int,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct mxcmci_host *VAR_13, struct mmc_command *VAR_14,
  unsigned int VAR_15)
{
 u32 VAR_16 = VAR_13->default_irq_mask;
 unsigned long VAR_17;

 FUNC_0(VAR_13->cmd != ((void*)0));
 VAR_13->cmd = VAR_14;

 switch (FUNC_3(VAR_14)) {
 case 131:
 case 130:
  VAR_15 |= VAR_2;
  break;
 case 129:
  VAR_15 |= VAR_0;
  break;
 case 128:
  VAR_15 |= VAR_1;
  break;
 case 132:
  break;
 default:
  FUNC_1(FUNC_2(VAR_13->mmc), "unhandled response type 0x%x\n",
    FUNC_3(VAR_14));
  VAR_14->error = -VAR_4;
  return -VAR_4;
 }

 VAR_16 = VAR_5;

 if (FUNC_4(VAR_13)) {
  if (VAR_13->dma_dir == VAR_3) {
   VAR_13->desc->callback = VAR_12;
   VAR_13->desc->callback_param = VAR_13;
  } else {
   VAR_16 |= VAR_7;
  }
 }

 FUNC_7(&VAR_13->lock, VAR_17);
 if (VAR_13->use_sdio)
  VAR_16 |= VAR_6;
 FUNC_5(VAR_13, VAR_16, VAR_11);
 FUNC_8(&VAR_13->lock, VAR_17);

 FUNC_6(VAR_13, VAR_14->opcode, VAR_9);
 FUNC_5(VAR_13, VAR_14->arg, VAR_8);
 FUNC_6(VAR_13, VAR_15, VAR_10);

 return 0;
}
