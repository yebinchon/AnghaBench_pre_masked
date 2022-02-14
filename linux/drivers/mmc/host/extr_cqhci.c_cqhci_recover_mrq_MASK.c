
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {TYPE_1__* cmd; struct mmc_data* data; } ;
struct mmc_data {void* error; scalar_t__ bytes_xfered; } ;
struct cqhci_slot {int flags; struct mmc_request* mrq; } ;
struct cqhci_host {int qcnt; int mmc; struct cqhci_slot* slot; } ;
struct TYPE_2__ {void* error; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct mmc_request*) ;

__attribute__((used)) static void FUNC_2(struct cqhci_host *VAR_0, unsigned int VAR_1)
{
 struct cqhci_slot *VAR_2 = &VAR_0->slot[VAR_1];
 struct mmc_request *VAR_3 = VAR_2->mrq;
 struct mmc_data *VAR_4;

 if (!VAR_3)
  return;

 VAR_2->mrq = ((void*)0);

 VAR_0->qcnt -= 1;

 VAR_4 = VAR_3->data;
 if (VAR_4) {
  VAR_4->bytes_xfered = 0;
  VAR_4->error = FUNC_0(VAR_2->flags);
 } else {
  VAR_3->cmd->error = FUNC_0(VAR_2->flags);
 }

 FUNC_1(VAR_0->mmc, VAR_3);
}
