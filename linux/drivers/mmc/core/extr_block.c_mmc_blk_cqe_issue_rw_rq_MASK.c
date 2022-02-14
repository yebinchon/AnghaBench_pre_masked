
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_4__ {int mrq; } ;
struct mmc_queue_req {TYPE_2__ brq; } ;
struct mmc_queue {TYPE_1__* card; } ;
struct TYPE_3__ {int host; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mmc_queue*,struct mmc_queue_req*,int ,int *,int *) ;
 struct mmc_queue_req* FUNC_2 (struct request*) ;

__attribute__((used)) static int FUNC_3(struct mmc_queue *VAR_0, struct request *VAR_1)
{
 struct mmc_queue_req *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_0, VAR_2, 0, ((void*)0), ((void*)0));

 return FUNC_0(VAR_0->card->host, &VAR_2->brq.mrq);
}
