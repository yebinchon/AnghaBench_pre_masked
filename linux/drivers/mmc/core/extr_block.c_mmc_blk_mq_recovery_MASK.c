
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct mmc_queue_req {int brq; } ;
struct mmc_queue {int rw_wait; struct request* recovery_req; TYPE_1__* card; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {struct mmc_host* host; } ;


 int FUNC_0 (struct mmc_queue*,struct request*) ;
 int FUNC_1 (struct mmc_queue*,struct request*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct mmc_queue*,struct mmc_queue_req*) ;
 int FUNC_4 (struct mmc_host*) ;
 struct mmc_queue_req* FUNC_5 (struct request*) ;

void FUNC_6(struct mmc_queue *VAR_0)
{
 struct request *VAR_1 = VAR_0->recovery_req;
 struct mmc_host *VAR_2 = VAR_0->card->host;
 struct mmc_queue_req *VAR_3 = FUNC_5(VAR_1);

 VAR_0->recovery_req = ((void*)0);
 VAR_0->rw_wait = 0;

 if (FUNC_2(&VAR_3->brq)) {
  FUNC_4(VAR_2);
  FUNC_1(VAR_0, VAR_1);
 }

 FUNC_3(VAR_0, VAR_3);

 FUNC_0(VAR_0, VAR_1);
}
