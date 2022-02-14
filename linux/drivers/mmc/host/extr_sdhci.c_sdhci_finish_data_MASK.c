
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {int flags; struct mmc_command* cmd; struct mmc_command* data_cmd; struct mmc_data* data; } ;
struct mmc_data {int bytes_xfered; int blksz; int blocks; TYPE_1__* mrq; scalar_t__ stop; scalar_t__ error; } ;
struct mmc_command {int dummy; } ;
struct TYPE_2__ {scalar_t__ cap_cmd_during_tfr; int sbc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sdhci_host*,TYPE_1__*) ;
 int FUNC_1 (struct sdhci_host*,struct mmc_data*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_4)
{
 struct mmc_command *VAR_5 = VAR_4->data_cmd;
 struct mmc_data *VAR_6 = VAR_4->data;

 VAR_4->data = ((void*)0);
 VAR_4->data_cmd = ((void*)0);





 if (VAR_6->error) {
  if (!VAR_4->cmd || VAR_4->cmd == VAR_5)
   FUNC_2(VAR_4, VAR_1);
  FUNC_2(VAR_4, VAR_2);
 }

 if ((VAR_4->flags & (VAR_0 | VAR_3)) ==
     (VAR_0 | VAR_3))
  FUNC_1(VAR_4, VAR_6);
 if (VAR_6->error)
  VAR_6->bytes_xfered = 0;
 else
  VAR_6->bytes_xfered = VAR_6->blksz * VAR_6->blocks;






 if (VAR_6->stop &&
     (VAR_6->error ||
      !VAR_6->mrq->sbc)) {





  if (VAR_6->mrq->cap_cmd_during_tfr) {
   FUNC_0(VAR_4, VAR_6->mrq);
  } else {

   VAR_4->cmd = ((void*)0);
   FUNC_3(VAR_4, VAR_6->stop);
  }
 } else {
  FUNC_0(VAR_4, VAR_6->mrq);
 }
}
