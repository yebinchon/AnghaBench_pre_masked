
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mmci_host {int lock; TYPE_1__* variant; struct mmc_request* mrq; } ;
struct mmc_request {TYPE_4__* cmd; TYPE_4__* sbc; TYPE_2__* data; } ;
struct mmc_host {int dummy; } ;
struct TYPE_8__ {int error; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {scalar_t__ datactrl_first; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct mmci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_3 (struct mmci_host*,TYPE_2__*) ;
 int FUNC_4 (struct mmci_host*,TYPE_4__*,int ) ;
 int FUNC_5 (struct mmci_host*,TYPE_2__*) ;
 int FUNC_6 (struct mmci_host*,TYPE_2__*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct mmc_host *VAR_1, struct mmc_request *VAR_2)
{
 struct mmci_host *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4;

 FUNC_0(VAR_3->mrq != ((void*)0));

 VAR_2->cmd->error = FUNC_6(VAR_3, VAR_2->data);
 if (VAR_2->cmd->error) {
  FUNC_2(VAR_1, VAR_2);
  return;
 }

 FUNC_7(&VAR_3->lock, VAR_4);

 VAR_3->mrq = VAR_2;

 if (VAR_2->data)
  FUNC_3(VAR_3, VAR_2->data);

 if (VAR_2->data &&
     (VAR_3->variant->datactrl_first || VAR_2->data->flags & VAR_0))
  FUNC_5(VAR_3, VAR_2->data);

 if (VAR_2->sbc)
  FUNC_4(VAR_3, VAR_2->sbc, 0);
 else
  FUNC_4(VAR_3, VAR_2->cmd, 0);

 FUNC_8(&VAR_3->lock, VAR_4);
}
