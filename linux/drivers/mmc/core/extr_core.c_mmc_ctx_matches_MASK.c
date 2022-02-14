
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mmc_host {struct mmc_ctx* claimer; } ;
struct mmc_ctx {struct task_struct* task; } ;



__attribute__((used)) static inline bool FUNC_0(struct mmc_host *VAR_0, struct mmc_ctx *VAR_1,
       struct task_struct *VAR_2)
{
 return VAR_0->claimer == VAR_1 ||
        (!VAR_1 && VAR_2 && VAR_0->claimer->task == VAR_2);
}
