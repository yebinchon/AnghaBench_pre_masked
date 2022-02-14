
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {struct mmc_data* data; } ;
struct mmc_host {struct cqhci_host* cqe_private; } ;
struct mmc_data {int bytes_xfered; int blksz; int blocks; scalar_t__ error; } ;
struct cqhci_slot {struct mmc_request* mrq; int flags; } ;
struct cqhci_host {int qcnt; scalar_t__ recovery_halt; struct cqhci_slot* slot; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,unsigned int) ;
 int FUNC_1 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_2 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_1, unsigned int VAR_2)
{
 struct cqhci_host *VAR_3 = VAR_1->cqe_private;
 struct cqhci_slot *VAR_4 = &VAR_3->slot[VAR_2];
 struct mmc_request *VAR_5 = VAR_4->mrq;
 struct mmc_data *VAR_6;

 if (!VAR_5) {
  FUNC_0(1, "%s: cqhci: spurious TCN for tag %d\n",
     FUNC_2(VAR_1), VAR_2);
  return;
 }


 if (VAR_3->recovery_halt) {
  VAR_4->flags |= VAR_0;
  return;
 }

 VAR_4->mrq = ((void*)0);

 VAR_3->qcnt -= 1;

 VAR_6 = VAR_5->data;
 if (VAR_6) {
  if (VAR_6->error)
   VAR_6->bytes_xfered = 0;
  else
   VAR_6->bytes_xfered = VAR_6->blksz * VAR_6->blocks;
 }

 FUNC_1(VAR_1, VAR_5);
}
