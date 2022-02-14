
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int hold_retune; scalar_t__ retune_now; } ;



__attribute__((used)) static inline void FUNC_0(struct mmc_host *VAR_0)
{
 VAR_0->retune_now = 0;
 VAR_0->hold_retune += 1;
}
