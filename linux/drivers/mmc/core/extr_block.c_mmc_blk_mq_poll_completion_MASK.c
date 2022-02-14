
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct mmc_queue_req {int brq; } ;
struct mmc_queue {TYPE_1__* card; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {struct mmc_host* host; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,struct request*) ;
 int FUNC_1 (struct mmc_queue*,struct request*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct mmc_queue*,struct request*) ;
 int FUNC_4 (struct mmc_queue*,struct mmc_queue_req*) ;
 int FUNC_5 (struct mmc_host*) ;
 struct mmc_queue_req* FUNC_6 (struct request*) ;

__attribute__((used)) static void FUNC_7(struct mmc_queue *VAR_0,
           struct request *VAR_1)
{
 struct mmc_queue_req *VAR_2 = FUNC_6(VAR_1);
 struct mmc_host *VAR_3 = VAR_0->card->host;

 if (FUNC_2(&VAR_2->brq) ||
     FUNC_0(VAR_0->card, VAR_1)) {
  FUNC_1(VAR_0, VAR_1);
 } else {
  FUNC_3(VAR_0, VAR_1);
  FUNC_5(VAR_3);
 }

 FUNC_4(VAR_0, VAR_2);
}
