
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tmio_mmc_host {scalar_t__ cmd; int mmc; struct mmc_request* mrq; scalar_t__ (* check_scc_error ) (struct tmio_mmc_host*) ;int lock; int delayed_reset_work; int * data; } ;
struct mmc_request {scalar_t__ sbc; TYPE_2__* cmd; TYPE_1__* data; } ;
struct TYPE_4__ {scalar_t__ error; } ;
struct TYPE_3__ {scalar_t__ error; } ;


 scalar_t__ FUNC_0 (struct mmc_request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct mmc_request*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (struct tmio_mmc_host*) ;
 int FUNC_7 (struct tmio_mmc_host*) ;
 int FUNC_8 (struct tmio_mmc_host*,struct mmc_request*) ;

__attribute__((used)) static void FUNC_9(struct tmio_mmc_host *VAR_0)
{
 struct mmc_request *VAR_1;
 unsigned long VAR_2;

 FUNC_4(&VAR_0->lock, VAR_2);

 VAR_1 = VAR_0->mrq;
 if (FUNC_0(VAR_1)) {
  FUNC_5(&VAR_0->lock, VAR_2);
  return;
 }


 if (VAR_0->cmd != VAR_1->sbc) {
  VAR_0->cmd = ((void*)0);
  VAR_0->data = ((void*)0);
  VAR_0->mrq = ((void*)0);
 }

 FUNC_1(&VAR_0->delayed_reset_work);

 FUNC_5(&VAR_0->lock, VAR_2);

 if (VAR_1->cmd->error || (VAR_1->data && VAR_1->data->error))
  FUNC_7(VAR_0);


 if (VAR_0->check_scc_error && VAR_0->check_scc_error(VAR_0))
  FUNC_3(VAR_0->mmc);


 if (VAR_0->mrq && !VAR_1->cmd->error) {
  FUNC_8(VAR_0, VAR_1);
  return;
 }

 FUNC_2(VAR_0->mmc, VAR_1);
}
