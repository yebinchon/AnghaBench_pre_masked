
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int cmd_completion; scalar_t__ cap_cmd_during_tfr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct mmc_request *VAR_0)
{
 if (VAR_0->cap_cmd_during_tfr && !FUNC_1(&VAR_0->cmd_completion))
  FUNC_0(&VAR_0->cmd_completion);
}
