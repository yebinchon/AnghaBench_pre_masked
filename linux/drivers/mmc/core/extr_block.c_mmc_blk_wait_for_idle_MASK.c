
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_queue {scalar_t__ use_cqe; } ;
struct mmc_host {TYPE_1__* cqe_ops; } ;
struct TYPE_2__ {int (* cqe_wait_for_idle ) (struct mmc_host*) ;} ;


 int FUNC_0 (struct mmc_queue*,int *) ;
 int FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_queue *VAR_0, struct mmc_host *VAR_1)
{
 if (VAR_0->use_cqe)
  return VAR_1->cqe_ops->cqe_wait_for_idle(VAR_1);

 return FUNC_0(VAR_0, ((void*)0));
}
