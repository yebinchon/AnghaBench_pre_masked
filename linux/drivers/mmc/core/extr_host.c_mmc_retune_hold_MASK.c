
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int retune_now; scalar_t__ hold_retune; } ;



void FUNC_0(struct mmc_host *VAR_0)
{
 if (!VAR_0->hold_retune)
  VAR_0->retune_now = 1;
 VAR_0->hold_retune += 1;
}
