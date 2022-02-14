
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usdhi6_host {int * sg; struct mmc_request* mrq; int timeout_work; } ;
struct mmc_request {TYPE_1__* cmd; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int error; } ;


 int FUNC_0 (int *) ;
 struct usdhi6_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct usdhi6_host*) ;
 int FUNC_3 (struct usdhi6_host*) ;
 int FUNC_4 (struct usdhi6_host*) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_0, struct mmc_request *VAR_1)
{
 struct usdhi6_host *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 FUNC_0(&VAR_2->timeout_work);

 VAR_2->mrq = VAR_1;
 VAR_2->sg = ((void*)0);

 FUNC_4(VAR_2);
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 < 0) {
  VAR_1->cmd->error = VAR_3;
  FUNC_2(VAR_2);
 }
}
