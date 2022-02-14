
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {scalar_t__ retune_paused; } ;


 int FUNC_0 (struct mmc_host*) ;

void FUNC_1(struct mmc_host *VAR_0)
{
 if (VAR_0->retune_paused) {
  VAR_0->retune_paused = 0;
  FUNC_0(VAR_0);
 }
}
