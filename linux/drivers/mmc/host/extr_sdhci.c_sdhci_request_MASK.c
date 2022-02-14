
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sdhci_host {int flags; int lock; } ;
struct mmc_request {TYPE_3__* cmd; TYPE_3__* sbc; int * stop; TYPE_2__* data; } ;
struct mmc_host {TYPE_1__* ops; } ;
struct TYPE_6__ {int error; } ;
struct TYPE_5__ {int * stop; } ;
struct TYPE_4__ {int (* get_cd ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 scalar_t__ FUNC_1 (struct sdhci_host*,struct mmc_request*) ;
 int FUNC_2 (struct sdhci_host*,struct mmc_request*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*,TYPE_3__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct mmc_host*) ;

void FUNC_8(struct mmc_host *VAR_3, struct mmc_request *VAR_4)
{
 struct sdhci_host *VAR_5;
 int VAR_6;
 unsigned long VAR_7;

 VAR_5 = FUNC_0(VAR_3);


 VAR_6 = VAR_3->ops->get_cd(VAR_3);

 FUNC_5(&VAR_5->lock, VAR_7);

 FUNC_3(VAR_5);





 if (FUNC_1(VAR_5, VAR_4)) {
  if (VAR_4->stop) {
   VAR_4->data->stop = ((void*)0);
   VAR_4->stop = ((void*)0);
  }
 }

 if (!VAR_6 || VAR_5->flags & VAR_2) {
  VAR_4->cmd->error = -VAR_0;
  FUNC_2(VAR_5, VAR_4);
 } else {
  if (VAR_4->sbc && !(VAR_5->flags & VAR_1))
   FUNC_4(VAR_5, VAR_4->sbc);
  else
   FUNC_4(VAR_5, VAR_4->cmd);
 }

 FUNC_6(&VAR_5->lock, VAR_7);
}
