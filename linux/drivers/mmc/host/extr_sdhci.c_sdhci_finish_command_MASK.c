
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_host {int quirks; scalar_t__ data_early; scalar_t__ data; struct mmc_command* data_cmd; int mmc; struct mmc_command* cmd; } ;
struct mmc_command {int flags; TYPE_1__* mrq; scalar_t__ data; int * resp; } ;
struct TYPE_3__ {struct mmc_command* cmd; struct mmc_command* sbc; scalar_t__ cap_cmd_during_tfr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sdhci_host*,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*,struct mmc_command*) ;
 int FUNC_5 (struct sdhci_host*,int ) ;
 int FUNC_6 (struct sdhci_host*,struct mmc_command*) ;

__attribute__((used)) static void FUNC_7(struct sdhci_host *VAR_5)
{
 struct mmc_command *VAR_6 = VAR_5->cmd;

 VAR_5->cmd = ((void*)0);

 if (VAR_6->flags & VAR_2) {
  if (VAR_6->flags & VAR_0) {
   FUNC_4(VAR_5, VAR_6);
  } else {
   VAR_6->resp[0] = FUNC_5(VAR_5, VAR_4);
  }
 }

 if (VAR_6->mrq->cap_cmd_during_tfr && VAR_6 == VAR_6->mrq->cmd)
  FUNC_2(VAR_5->mmc, VAR_6->mrq);
 if (VAR_6->flags & VAR_1) {
  if (VAR_6->data) {
   FUNC_0("Cannot wait for busy signal when also doing a data transfer");
  } else if (!(VAR_5->quirks & VAR_3) &&
      VAR_6 == VAR_5->data_cmd) {

   return;
  }
 }


 if (VAR_6 == VAR_6->mrq->sbc) {
  FUNC_6(VAR_5, VAR_6->mrq->cmd);
 } else {


  if (VAR_5->data && VAR_5->data_early)
   FUNC_3(VAR_5);

  if (!VAR_6->data)
   FUNC_1(VAR_5, VAR_6->mrq);
 }
}
