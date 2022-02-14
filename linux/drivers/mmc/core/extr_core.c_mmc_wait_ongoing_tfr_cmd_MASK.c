
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int cmd_completion; } ;
struct mmc_host {int ongoing_mrq; } ;


 struct mmc_request* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct mmc_host *VAR_0)
{
 struct mmc_request *VAR_1 = FUNC_0(VAR_0->ongoing_mrq);





 if (VAR_1 && !FUNC_1(&VAR_1->cmd_completion))
  FUNC_2(&VAR_1->cmd_completion);
}
