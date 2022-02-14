
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_request {int dummy; } ;
struct mmc_data {int blksz; int blocks; } ;
struct mmc_command {scalar_t__ opcode; struct mmc_data* data; } ;
struct dw_mci_slot {int flags; int mmc; struct mmc_request* mrq; } ;
struct dw_mci {int stop_cmdr; int irq_lock; int cmd11_timer; scalar_t__ pending_events; scalar_t__ dir_status; scalar_t__ data_status; scalar_t__ cmd_status; scalar_t__ completed_events; struct mmc_request* mrq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dw_mci*,struct mmc_command*) ;
 int FUNC_1 (int ,struct mmc_command*) ;
 int FUNC_2 (struct dw_mci*,struct mmc_command*,int ) ;
 int FUNC_3 (struct dw_mci*,struct mmc_data*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct dw_mci*,int ,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,scalar_t__*) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct dw_mci *VAR_8,
       struct dw_mci_slot *VAR_9,
       struct mmc_command *VAR_10)
{
 struct mmc_request *VAR_11;
 struct mmc_data *VAR_12;
 u32 VAR_13;

 VAR_11 = VAR_9->mrq;

 VAR_8->mrq = VAR_11;

 VAR_8->pending_events = 0;
 VAR_8->completed_events = 0;
 VAR_8->cmd_status = 0;
 VAR_8->data_status = 0;
 VAR_8->dir_status = 0;

 VAR_12 = VAR_10->data;
 if (VAR_12) {
  FUNC_4(VAR_8, VAR_6, 0xFFFFFFFF);
  FUNC_4(VAR_8, VAR_1, VAR_12->blksz*VAR_12->blocks);
  FUNC_4(VAR_8, VAR_0, VAR_12->blksz);
 }

 VAR_13 = FUNC_1(VAR_9->mmc, VAR_10);


 if (FUNC_9(VAR_2, &VAR_9->flags))
  VAR_13 |= VAR_4;

 if (VAR_12) {
  FUNC_3(VAR_8, VAR_12);
  FUNC_11();
 }

 FUNC_2(VAR_8, VAR_10, VAR_13);

 if (VAR_10->opcode == VAR_5) {
  unsigned long VAR_14;
  FUNC_7(&VAR_8->irq_lock, VAR_14);
  if (!FUNC_10(VAR_3, &VAR_8->pending_events))
   FUNC_5(&VAR_8->cmd11_timer,
    VAR_7 + FUNC_6(500) + 1);
  FUNC_8(&VAR_8->irq_lock, VAR_14);
 }

 VAR_8->stop_cmdr = FUNC_0(VAR_8, VAR_10);
}
