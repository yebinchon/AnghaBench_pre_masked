
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int dummy; } ;
struct mmc_host {struct cqhci_host* cqe_private; } ;
struct cqhci_slot {int flags; struct mmc_request* mrq; } ;
struct cqhci_host {int recovery_halt; int lock; struct cqhci_slot* slot; } ;


 int VAR_0 ;
 int FUNC_0 (struct cqhci_host*) ;
 int FUNC_1 (struct mmc_host*,struct mmc_request*,int) ;
 int FUNC_2 (struct mmc_request*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_7(struct mmc_host *VAR_1, struct mmc_request *VAR_2,
     bool *VAR_3)
{
 struct cqhci_host *VAR_4 = VAR_1->cqe_private;
 int VAR_5 = FUNC_2(VAR_2);
 struct cqhci_slot *VAR_6 = &VAR_4->slot[VAR_5];
 unsigned long VAR_7;
 bool VAR_8;

 FUNC_5(&VAR_4->lock, VAR_7);
 VAR_8 = VAR_6->mrq == VAR_2;
 if (VAR_8) {
  VAR_6->flags |= VAR_0;
  FUNC_1(VAR_1, VAR_2, 0);
  *VAR_3 = VAR_4->recovery_halt;
 }
 FUNC_6(&VAR_4->lock, VAR_7);

 if (VAR_8) {
  FUNC_4("%s: cqhci: timeout for tag %d\n",
         FUNC_3(VAR_1), VAR_5);
  FUNC_0(VAR_4);
 }

 return VAR_8;
}
