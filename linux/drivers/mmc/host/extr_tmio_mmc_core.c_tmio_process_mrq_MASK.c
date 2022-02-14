
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int mmc; int * mrq; int delayed_reset_work; struct mmc_command* cmd; } ;
struct mmc_request {struct mmc_command* cmd; scalar_t__ data; struct mmc_command* sbc; } ;
struct mmc_command {int error; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mmc_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct tmio_mmc_host*,struct mmc_command*) ;
 int FUNC_4 (struct tmio_mmc_host*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tmio_mmc_host *VAR_1,
        struct mmc_request *VAR_2)
{
 struct mmc_command *VAR_3;
 int VAR_4;

 if (VAR_2->sbc && VAR_1->cmd != VAR_2->sbc) {
  VAR_3 = VAR_2->sbc;
 } else {
  VAR_3 = VAR_2->cmd;
  if (VAR_2->data) {
   VAR_4 = FUNC_4(VAR_1, VAR_2->data);
   if (VAR_4)
    goto fail;
  }
 }

 VAR_4 = FUNC_3(VAR_1, VAR_3);
 if (VAR_4)
  goto fail;

 FUNC_2(&VAR_1->delayed_reset_work,
         FUNC_1(VAR_0));
 return;

fail:
 VAR_1->mrq = ((void*)0);
 VAR_2->cmd->error = VAR_4;
 FUNC_0(VAR_1->mmc, VAR_2);
}
