
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_test_card {TYPE_1__* card; } ;
struct mmc_request {TYPE_2__* cmd; int * stop; TYPE_3__* data; } ;
struct TYPE_6__ {int blocks; } ;
struct TYPE_5__ {int arg; int opcode; } ;
struct TYPE_4__ {int rca; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mmc_test_card *VAR_3,
 struct mmc_request *VAR_4, int VAR_5)
{
 if (FUNC_0(!VAR_4 || !VAR_4->cmd || !VAR_4->data))
  return;

 if (VAR_4->data->blocks > 1) {
  VAR_4->cmd->opcode = VAR_5 ?
   VAR_2 : VAR_0;
  VAR_4->stop = ((void*)0);
 } else {
  VAR_4->cmd->opcode = VAR_1;
  VAR_4->cmd->arg = VAR_3->card->rca << 16;
 }
}
