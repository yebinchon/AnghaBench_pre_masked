
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_command {scalar_t__ opcode; TYPE_1__* mrq; TYPE_2__* data; scalar_t__ error; } ;
struct TYPE_4__ {scalar_t__ error; } ;
struct TYPE_3__ {struct mmc_command* stop; int sbc; struct mmc_command* cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static struct mmc_command *FUNC_1(struct mmc_command *VAR_1)
{
 if (VAR_1->opcode == VAR_0 && !VAR_1->error)
  return VAR_1->mrq->cmd;
 else if (FUNC_0(VAR_1->opcode) &&
   (!VAR_1->mrq->sbc || VAR_1->error || VAR_1->data->error))
  return VAR_1->mrq->stop;
 else
  return ((void*)0);
}
