
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct mmc_request {int dummy; } ;
struct TYPE_3__ {struct mmc_request mrq; } ;
struct mmc_queue_req {TYPE_1__ brq; } ;
struct mmc_queue {scalar_t__ in_recovery; TYPE_2__* card; } ;
struct mmc_host {int dummy; } ;
struct TYPE_4__ {struct mmc_host* host; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct mmc_queue*,struct request*) ;
 int FUNC_2 (struct mmc_queue*,struct request*) ;
 int FUNC_3 (struct mmc_host*,struct mmc_request*,int ) ;
 struct mmc_queue_req* FUNC_4 (struct request*) ;

__attribute__((used)) static void FUNC_5(struct mmc_queue *VAR_0, struct request *VAR_1)
{
 struct mmc_queue_req *VAR_2 = FUNC_4(VAR_1);
 struct mmc_request *VAR_3 = &VAR_2->brq.mrq;
 struct mmc_host *VAR_4 = VAR_0->card->host;

 FUNC_3(VAR_4, VAR_3, 0);





 if (VAR_0->in_recovery)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_1);

 FUNC_2(VAR_0, VAR_1);
}
