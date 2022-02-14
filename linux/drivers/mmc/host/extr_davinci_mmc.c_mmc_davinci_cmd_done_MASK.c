
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_davinci_host {int active_request; scalar_t__ base; int mmc; int * data; int * cmd; } ;
struct mmc_command {int flags; TYPE_2__* mrq; int error; void** resp; } ;
struct TYPE_4__ {TYPE_1__* cmd; } ;
struct TYPE_3__ {scalar_t__ retries; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mmc_davinci_host *VAR_8,
     struct mmc_command *VAR_9)
{
 VAR_8->cmd = ((void*)0);

 if (VAR_9->flags & VAR_7) {
  if (VAR_9->flags & VAR_6) {

   VAR_9->resp[3] = FUNC_1(VAR_8->base + VAR_1);
   VAR_9->resp[2] = FUNC_1(VAR_8->base + VAR_2);
   VAR_9->resp[1] = FUNC_1(VAR_8->base + VAR_3);
   VAR_9->resp[0] = FUNC_1(VAR_8->base + VAR_4);
  } else {

   VAR_9->resp[0] = FUNC_1(VAR_8->base + VAR_4);
  }
 }

 if (VAR_8->data == ((void*)0) || VAR_9->error) {
  if (VAR_9->error == -VAR_5)
   VAR_9->mrq->cmd->retries = 0;
  FUNC_0(VAR_8->mmc, VAR_9->mrq);
  FUNC_2(0, VAR_8->base + VAR_0);
  VAR_8->active_request = 0;
 }
}
