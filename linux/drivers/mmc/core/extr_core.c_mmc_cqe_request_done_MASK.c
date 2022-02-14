
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_request {int (* done ) (struct mmc_request*) ;TYPE_2__* data; int tag; TYPE_1__* cmd; } ;
struct mmc_host {int dummy; } ;
struct TYPE_4__ {int error; int bytes_xfered; } ;
struct TYPE_3__ {int error; int opcode; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_3 (char*,int ,int ,...) ;
 int FUNC_4 (struct mmc_request*) ;
 int FUNC_5 (struct mmc_host*,struct mmc_request*) ;

void FUNC_6(struct mmc_host *VAR_1, struct mmc_request *VAR_2)
{
 FUNC_2(VAR_1, VAR_2);


 if ((VAR_2->cmd && VAR_2->cmd->error == -VAR_0) ||
     (VAR_2->data && VAR_2->data->error == -VAR_0))
  FUNC_1(VAR_1);

 FUNC_5(VAR_1, VAR_2);

 if (VAR_2->cmd) {
  FUNC_3("%s: CQE req done (direct CMD%u): %d\n",
    FUNC_0(VAR_1), VAR_2->cmd->opcode, VAR_2->cmd->error);
 } else {
  FUNC_3("%s: CQE transfer done tag %d\n",
    FUNC_0(VAR_1), VAR_2->tag);
 }

 if (VAR_2->data) {
  FUNC_3("%s:     %d bytes transferred: %d\n",
    FUNC_0(VAR_1),
    VAR_2->data->bytes_xfered, VAR_2->data->error);
 }

 VAR_2->done(VAR_2);
}
