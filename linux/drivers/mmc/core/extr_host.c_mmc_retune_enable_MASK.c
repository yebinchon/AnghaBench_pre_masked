
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int can_retune; int retune_period; int retune_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

void FUNC_1(struct mmc_host *VAR_2)
{
 VAR_2->can_retune = 1;
 if (VAR_2->retune_period)
  FUNC_0(&VAR_2->retune_timer,
     VAR_1 + VAR_2->retune_period * VAR_0);
}
