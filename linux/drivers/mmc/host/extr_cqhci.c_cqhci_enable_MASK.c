
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {struct cqhci_host* cqe_private; } ;
struct mmc_card {int rca; } ;
struct cqhci_host {int enabled; int rca; } ;


 int FUNC_0 (struct cqhci_host*) ;
 int FUNC_1 (struct cqhci_host*) ;
 int FUNC_2 (struct cqhci_host*) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_0, struct mmc_card *VAR_1)
{
 struct cqhci_host *VAR_2 = VAR_0->cqe_private;
 int VAR_3;

 if (VAR_2->enabled)
  return 0;

 VAR_2->rca = VAR_1->rca;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_2);

 VAR_2->enabled = 1;




 return 0;
}
