
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_request {int cmd_completion; scalar_t__ cap_cmd_during_tfr; TYPE_1__* cmd; } ;
struct mmc_host {TYPE_3__* ops; TYPE_2__* cqe_ops; scalar_t__ cqe_on; struct mmc_request* ongoing_mrq; } ;
struct TYPE_6__ {int (* request ) (struct mmc_host*,struct mmc_request*) ;scalar_t__ (* card_busy ) (struct mmc_host*) ;} ;
struct TYPE_5__ {int (* cqe_off ) (struct mmc_host*) ;} ;
struct TYPE_4__ {int error; int arg; int opcode; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_8 (struct mmc_host*,struct mmc_request*) ;

__attribute__((used)) static void FUNC_9(struct mmc_host *VAR_1, struct mmc_request *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3) {
  VAR_2->cmd->error = VAR_3;
  FUNC_1(VAR_1, VAR_2);
  return;
 }






 if (FUNC_4(VAR_2->cmd->opcode, VAR_2->cmd->arg) &&
     VAR_1->ops->card_busy) {
  int VAR_4 = 500;

  while (VAR_1->ops->card_busy(VAR_1) && --VAR_4)
   FUNC_0(1);

  if (VAR_4 == 0) {
   VAR_2->cmd->error = -VAR_0;
   FUNC_1(VAR_1, VAR_2);
   return;
  }
 }

 if (VAR_2->cap_cmd_during_tfr) {
  VAR_1->ongoing_mrq = VAR_2;




  FUNC_3(&VAR_2->cmd_completion);
 }

 FUNC_8(VAR_1, VAR_2);

 if (VAR_1->cqe_on)
  VAR_1->cqe_ops->cqe_off(VAR_1);

 VAR_1->ops->request(VAR_1, VAR_2);
}
