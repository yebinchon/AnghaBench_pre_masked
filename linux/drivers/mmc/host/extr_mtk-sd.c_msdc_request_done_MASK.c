
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdc_host {int mmc; scalar_t__ error; int lock; int * mrq; int req_timeout; } ;
struct mmc_request {scalar_t__ data; int cmd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct mmc_request*) ;
 int FUNC_2 (struct msdc_host*) ;
 int FUNC_3 (struct msdc_host*,int ,scalar_t__) ;
 int FUNC_4 (struct msdc_host*,struct mmc_request*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct msdc_host *VAR_0, struct mmc_request *VAR_1)
{
 unsigned long VAR_2;
 bool VAR_3;

 VAR_3 = FUNC_0(&VAR_0->req_timeout);
 if (!VAR_3) {

  return;
 }
 FUNC_5(&VAR_0->lock, VAR_2);
 VAR_0->mrq = ((void*)0);
 FUNC_6(&VAR_0->lock, VAR_2);

 FUNC_3(VAR_0, VAR_1->cmd, VAR_1->data);
 if (VAR_1->data)
  FUNC_4(VAR_0, VAR_1);
 if (VAR_0->error)
  FUNC_2(VAR_0);
 FUNC_1(VAR_0->mmc, VAR_1);
}
