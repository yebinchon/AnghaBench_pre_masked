
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usdhi6_host {int wait; scalar_t__ dma_active; scalar_t__ io_error; struct mmc_request* mrq; } ;
struct mmc_request {TYPE_1__* data; int stop; struct mmc_command* cmd; } ;
struct mmc_command {scalar_t__ opcode; int error; } ;
struct TYPE_2__ {int flags; int blocks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct usdhi6_host*) ;
 int FUNC_1 (struct usdhi6_host*) ;
 int FUNC_2 (struct usdhi6_host*) ;
 scalar_t__ FUNC_3 (struct usdhi6_host*) ;

__attribute__((used)) static bool FUNC_4(struct usdhi6_host *VAR_9)
{
 struct mmc_request *VAR_10 = VAR_9->mrq;
 struct mmc_command *VAR_11 = VAR_10->cmd;

 if (VAR_9->io_error) {
  VAR_11->error = FUNC_1(VAR_9);
  return 0;
 }

 FUNC_2(VAR_9);

 if (!VAR_10->data)
  return 0;

 if (VAR_9->dma_active) {
  FUNC_0(VAR_9);
  if (!VAR_10->stop)
   VAR_9->wait = VAR_4;
  else if (FUNC_3(VAR_9) < 0)
   return 0;
 } else if (VAR_10->data->flags & VAR_0) {
  if (VAR_11->opcode == VAR_1 ||
      (VAR_11->opcode == VAR_3 &&
       VAR_10->data->blocks > 1))
   VAR_9->wait = VAR_5;
  else
   VAR_9->wait = VAR_7;
 } else {
  if (VAR_11->opcode == VAR_2 ||
      (VAR_11->opcode == VAR_3 &&
       VAR_10->data->blocks > 1))
   VAR_9->wait = VAR_6;
  else
   VAR_9->wait = VAR_8;
 }

 return 1;
}
