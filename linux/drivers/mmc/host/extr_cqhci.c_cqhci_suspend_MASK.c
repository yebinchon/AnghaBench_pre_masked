
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {struct cqhci_host* cqe_private; } ;
struct cqhci_host {scalar_t__ enabled; } ;


 int FUNC_0 (struct cqhci_host*) ;

int FUNC_1(struct mmc_host *VAR_0)
{
 struct cqhci_host *VAR_1 = VAR_0->cqe_private;

 if (VAR_1->enabled)
  FUNC_0(VAR_1);

 return 0;
}
