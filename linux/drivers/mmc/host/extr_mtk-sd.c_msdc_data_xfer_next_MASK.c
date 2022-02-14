
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msdc_host {int dummy; } ;
struct mmc_request {TYPE_2__* stop; int sbc; TYPE_1__* cmd; } ;
struct mmc_data {int dummy; } ;
struct TYPE_4__ {int error; } ;
struct TYPE_3__ {int opcode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct msdc_host*,struct mmc_request*) ;
 int FUNC_2 (struct msdc_host*,struct mmc_request*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct msdc_host *VAR_0,
    struct mmc_request *VAR_1, struct mmc_data *VAR_2)
{
 if (FUNC_0(VAR_1->cmd->opcode) && VAR_1->stop && !VAR_1->stop->error &&
     !VAR_1->sbc)
  FUNC_2(VAR_0, VAR_1, VAR_1->stop);
 else
  FUNC_1(VAR_0, VAR_1);
}
