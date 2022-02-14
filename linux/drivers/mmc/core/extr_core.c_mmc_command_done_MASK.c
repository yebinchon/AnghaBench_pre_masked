
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {TYPE_1__* cmd; int cap_cmd_during_tfr; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int opcode; } ;


 int FUNC_0 (struct mmc_request*) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (char*,int ,int ) ;

void FUNC_3(struct mmc_host *VAR_0, struct mmc_request *VAR_1)
{
 if (!VAR_1->cap_cmd_during_tfr)
  return;

 FUNC_0(VAR_1);

 FUNC_2("%s: cmd done, tfr ongoing (CMD%u)\n",
   FUNC_1(VAR_0), VAR_1->cmd->opcode);
}
