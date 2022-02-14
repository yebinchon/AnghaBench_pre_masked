
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {int completion; TYPE_1__* cmd; int done; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int error; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mmc_request*) ;
 int FUNC_3 (struct mmc_host*,struct mmc_request*) ;
 int VAR_0 ;
 int FUNC_4 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_5(struct mmc_host *VAR_1, struct mmc_request *VAR_2)
{
 int VAR_3;

 FUNC_4(VAR_1);

 FUNC_1(&VAR_2->completion);
 VAR_2->done = VAR_0;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3) {
  VAR_2->cmd->error = VAR_3;
  FUNC_2(VAR_2);
  FUNC_0(&VAR_2->completion);
 }

 return VAR_3;
}
