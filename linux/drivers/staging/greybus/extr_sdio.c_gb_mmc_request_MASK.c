
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {struct mmc_command* cmd; } ;
struct mmc_host {int dummy; } ;
struct mmc_command {scalar_t__ opcode; int error; } ;
struct gb_sdio_host {int xfer_stop; int lock; struct mmc_request* mrq; int mrqwork; int mrq_workqueue; int card_present; scalar_t__ removed; int xfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mmc_request*) ;
 struct gb_sdio_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct mmc_host *VAR_3, struct mmc_request *VAR_4)
{
 struct gb_sdio_host *VAR_5 = FUNC_1(VAR_3);
 struct mmc_command *VAR_6 = VAR_4->cmd;


 if (VAR_6->opcode == VAR_2) {
  FUNC_6(&VAR_5->xfer);
  VAR_5->xfer_stop = 1;
  FUNC_7(&VAR_5->xfer);
 }

 FUNC_3(&VAR_5->lock);

 FUNC_0(VAR_5->mrq);
 VAR_5->mrq = VAR_4;

 if (VAR_5->removed) {
  VAR_4->cmd->error = -VAR_1;
  goto out;
 }
 if (!VAR_5->card_present) {
  VAR_4->cmd->error = -VAR_0;
  goto out;
 }

 FUNC_5(VAR_5->mrq_workqueue, &VAR_5->mrqwork);

 FUNC_4(&VAR_5->lock);
 return;

out:
 VAR_5->mrq = ((void*)0);
 FUNC_4(&VAR_5->lock);
 FUNC_2(VAR_3, VAR_4);
}
