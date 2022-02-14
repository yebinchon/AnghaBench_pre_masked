
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int (* recovery_notifier ) (struct mmc_request*) ;} ;
struct mmc_host {struct cqhci_host* cqe_private; } ;
struct cqhci_host {int recovery_halt; int wait_queue; } ;


 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct mmc_request*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_0, struct mmc_request *VAR_1,
      bool VAR_2)
{
 struct cqhci_host *VAR_3 = VAR_0->cqe_private;

 if (!VAR_3->recovery_halt) {
  VAR_3->recovery_halt = 1;
  FUNC_1("%s: cqhci: recovery needed\n", FUNC_0(VAR_0));
  FUNC_3(&VAR_3->wait_queue);
  if (VAR_2 && VAR_1->recovery_notifier)
   VAR_1->recovery_notifier(VAR_1);
 }
}
