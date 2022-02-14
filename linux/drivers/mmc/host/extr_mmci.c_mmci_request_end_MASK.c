
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmci_host {int mmc; int * cmd; int * mrq; int data; scalar_t__ base; } ;
struct mmc_request {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,struct mmc_request*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct mmci_host *VAR_1, struct mmc_request *VAR_2)
{
 FUNC_2(0, VAR_1->base + VAR_0);

 FUNC_0(VAR_1->data);

 VAR_1->mrq = ((void*)0);
 VAR_1->cmd = ((void*)0);

 FUNC_1(VAR_1->mmc, VAR_2);
}
