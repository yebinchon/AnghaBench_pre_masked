
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {scalar_t__ need_retune; scalar_t__ retune_now; int retune_timer; scalar_t__ can_retune; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mmc_host*) ;

void FUNC_2(struct mmc_host *VAR_0)
{
 FUNC_1(VAR_0);
 VAR_0->can_retune = 0;
 FUNC_0(&VAR_0->retune_timer);
 VAR_0->retune_now = 0;
 VAR_0->need_retune = 0;
}
