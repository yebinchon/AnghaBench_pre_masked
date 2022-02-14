
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {struct mmc_request* mrq; int * data; scalar_t__ response_busy; TYPE_1__* cmd; } ;
struct mmc_request {int sbc; } ;
struct mmc_data {int blocks; int blksz; struct mmc_request* mrq; scalar_t__ stop; scalar_t__ error; scalar_t__ bytes_xfered; } ;
struct TYPE_2__ {int opcode; } ;


 int FUNC_0 (struct omap_hsmmc_host*,struct mmc_request*) ;
 int FUNC_1 (struct omap_hsmmc_host*,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_2(struct omap_hsmmc_host *VAR_0, struct mmc_data *VAR_1)
{
 if (!VAR_1) {
  struct mmc_request *VAR_2 = VAR_0->mrq;


  if (VAR_0->cmd && VAR_0->cmd->opcode == 6 &&
      VAR_0->response_busy) {
   VAR_0->response_busy = 0;
   return;
  }

  FUNC_0(VAR_0, VAR_2);
  return;
 }

 VAR_0->data = ((void*)0);

 if (!VAR_1->error)
  VAR_1->bytes_xfered += VAR_1->blocks * (VAR_1->blksz);
 else
  VAR_1->bytes_xfered = 0;

 if (VAR_1->stop && (VAR_1->error || !VAR_0->mrq->sbc))
  FUNC_1(VAR_0, VAR_1->stop, ((void*)0));
 else
  FUNC_0(VAR_0, VAR_1->mrq);
}
