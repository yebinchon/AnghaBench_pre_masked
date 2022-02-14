
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mmc_ctx {struct task_struct* task; } ;
struct mmc_host {struct mmc_ctx* claimer; struct mmc_ctx default_ctx; } ;



__attribute__((used)) static inline void FUNC_0(struct mmc_host *VAR_0,
           struct mmc_ctx *VAR_1,
           struct task_struct *VAR_2)
{
 if (!VAR_0->claimer) {
  if (VAR_1)
   VAR_0->claimer = VAR_1;
  else
   VAR_0->claimer = &VAR_0->default_ctx;
 }
 if (VAR_2)
  VAR_0->claimer->task = VAR_2;
}
