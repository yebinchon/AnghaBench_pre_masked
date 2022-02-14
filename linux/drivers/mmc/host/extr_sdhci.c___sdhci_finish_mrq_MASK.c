
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sdhci_host {int pending_reset; struct mmc_request** mrqs_done; TYPE_3__* data; TYPE_2__* data_cmd; TYPE_1__* cmd; } ;
struct mmc_request {int dummy; } ;
struct TYPE_6__ {struct mmc_request* mrq; } ;
struct TYPE_5__ {struct mmc_request* mrq; } ;
struct TYPE_4__ {struct mmc_request* mrq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sdhci_host*,struct mmc_request*) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 scalar_t__ FUNC_4 (struct sdhci_host*,struct mmc_request*) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_1, struct mmc_request *VAR_2)
{
 int VAR_3;

 if (VAR_1->cmd && VAR_1->cmd->mrq == VAR_2)
  VAR_1->cmd = ((void*)0);

 if (VAR_1->data_cmd && VAR_1->data_cmd->mrq == VAR_2)
  VAR_1->data_cmd = ((void*)0);

 if (VAR_1->data && VAR_1->data->mrq == VAR_2)
  VAR_1->data = ((void*)0);

 if (FUNC_4(VAR_1, VAR_2))
  VAR_1->pending_reset = 1;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->mrqs_done[VAR_3] == VAR_2) {
   FUNC_0(1);
   return;
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!VAR_1->mrqs_done[VAR_3]) {
   VAR_1->mrqs_done[VAR_3] = VAR_2;
   break;
  }
 }

 FUNC_0(VAR_3 >= VAR_0);

 FUNC_1(VAR_1, VAR_2);

 if (!FUNC_2(VAR_1))
  FUNC_3(VAR_1);
}
