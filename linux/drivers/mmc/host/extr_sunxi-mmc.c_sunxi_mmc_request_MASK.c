
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_mmc_host {int wait_dma; int ferror; int sdio_imask; int lock; struct mmc_request* mrq; scalar_t__ manual_stop_mrq; } ;
struct mmc_request {struct mmc_command* cmd; struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int error; int blksz; int blocks; int sg_len; int sg; } ;
struct mmc_command {int opcode; int error; int flags; int arg; TYPE_1__* data; } ;
struct TYPE_2__ {int flags; scalar_t__ stop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ,char*,int,int,int,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_data*) ;
 struct sunxi_mmc_host* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_7 (struct sunxi_mmc_host*,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct sunxi_mmc_host*,struct mmc_data*) ;
 int FUNC_11 (struct sunxi_mmc_host*,struct mmc_data*) ;

__attribute__((used)) static void FUNC_12(struct mmc_host *VAR_26, struct mmc_request *VAR_27)
{
 struct sunxi_mmc_host *VAR_28 = FUNC_5(VAR_26);
 struct mmc_command *VAR_29 = VAR_27->cmd;
 struct mmc_data *VAR_30 = VAR_27->data;
 unsigned long VAR_31;
 u32 VAR_32 = VAR_18;
 u32 VAR_33 = VAR_23 | (VAR_29->opcode & 0x3f);
 bool VAR_34 = VAR_28->wait_dma;
 int VAR_35;


 if (VAR_28->ferror) {
  VAR_27->cmd->error = VAR_28->ferror;
  FUNC_6(VAR_26, VAR_27);
  return;
 }

 if (VAR_30) {
  VAR_35 = FUNC_10(VAR_28, VAR_30);
  if (VAR_35 < 0) {
   FUNC_1(FUNC_3(VAR_26), "map DMA failed\n");
   VAR_29->error = VAR_35;
   VAR_30->error = VAR_35;
   FUNC_6(VAR_26, VAR_27);
   return;
  }
 }

 if (VAR_29->opcode == VAR_4) {
  VAR_33 |= VAR_22;
  VAR_32 |= VAR_15;
 }

 if (VAR_29->flags & VAR_7) {
  VAR_33 |= VAR_20;
  if (VAR_29->flags & VAR_5)
   VAR_33 |= VAR_19;
  if (VAR_29->flags & VAR_6)
   VAR_33 |= VAR_14;

  if ((VAR_29->flags & VAR_2) == VAR_1) {
   VAR_33 |= VAR_16 | VAR_24;

   if (VAR_29->data->stop) {
    VAR_32 |= VAR_13;
    VAR_33 |= VAR_21;
   } else {
    VAR_32 |= VAR_17;
   }

   if (VAR_29->data->flags & VAR_3)
    VAR_33 |= VAR_25;
   else
    VAR_34 = 1;
  } else {
   VAR_32 |= VAR_15;
  }
 } else {
  VAR_32 |= VAR_15;
 }

 FUNC_0(FUNC_3(VAR_26), "cmd %d(%08x) arg %x ie 0x%08x len %d\n",
  VAR_33 & 0x3f, VAR_33, VAR_29->arg, VAR_32,
  VAR_27->data ? VAR_27->data->blksz * VAR_27->data->blocks : 0);

 FUNC_8(&VAR_28->lock, VAR_31);

 if (VAR_28->mrq || VAR_28->manual_stop_mrq) {
  FUNC_9(&VAR_28->lock, VAR_31);

  if (VAR_30)
   FUNC_2(FUNC_3(VAR_26), VAR_30->sg, VAR_30->sg_len,
         FUNC_4(VAR_30));

  FUNC_1(FUNC_3(VAR_26), "request already pending\n");
  VAR_27->cmd->error = -VAR_0;
  FUNC_6(VAR_26, VAR_27);
  return;
 }

 if (VAR_30) {
  FUNC_7(VAR_28, VAR_9, VAR_30->blksz);
  FUNC_7(VAR_28, VAR_8, VAR_30->blksz * VAR_30->blocks);
  FUNC_11(VAR_28, VAR_30);
 }

 VAR_28->mrq = VAR_27;
 VAR_28->wait_dma = VAR_34;
 FUNC_7(VAR_28, VAR_12, VAR_28->sdio_imask | VAR_32);
 FUNC_7(VAR_28, VAR_10, VAR_29->arg);
 FUNC_7(VAR_28, VAR_11, VAR_33);

 FUNC_9(&VAR_28->lock, VAR_31);
}
