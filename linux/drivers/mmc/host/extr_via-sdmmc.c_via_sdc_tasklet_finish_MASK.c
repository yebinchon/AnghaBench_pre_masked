
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_crdr_mmc_host {int mmc; int lock; int * data; int * cmd; struct mmc_request* mrq; int timer; } ;
struct mmc_request {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct mmc_request*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct via_crdr_mmc_host *VAR_1;
 unsigned long VAR_2;
 struct mmc_request *VAR_3;

 VAR_1 = (struct via_crdr_mmc_host *)VAR_0;

 FUNC_2(&VAR_1->lock, VAR_2);

 FUNC_0(&VAR_1->timer);
 VAR_3 = VAR_1->mrq;
 VAR_1->mrq = ((void*)0);
 VAR_1->cmd = ((void*)0);
 VAR_1->data = ((void*)0);

 FUNC_3(&VAR_1->lock, VAR_2);

 FUNC_1(VAR_1->mmc, VAR_3);
}
