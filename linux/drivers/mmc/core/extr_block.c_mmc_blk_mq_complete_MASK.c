
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {TYPE_1__* q; } ;
struct mmc_queue {scalar_t__ use_cqe; } ;
struct TYPE_2__ {struct mmc_queue* queuedata; } ;


 int FUNC_0 (struct mmc_queue*,struct request*) ;
 int FUNC_1 (struct mmc_queue*,struct request*) ;

void FUNC_2(struct request *VAR_0)
{
 struct mmc_queue *VAR_1 = VAR_0->q->queuedata;

 if (VAR_1->use_cqe)
  FUNC_0(VAR_1, VAR_0);
 else
  FUNC_1(VAR_1, VAR_0);
}
