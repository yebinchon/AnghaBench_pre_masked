
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {TYPE_1__* cmd; } ;
struct mmc_host {int dummy; } ;
struct alcor_sdmmc_host {int cmd_mutex; struct mmc_request* mrq; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct alcor_sdmmc_host*,int) ;
 int FUNC_2 (struct alcor_sdmmc_host*,TYPE_1__*,int) ;
 struct alcor_sdmmc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_1, struct mmc_request *VAR_2)
{
 struct alcor_sdmmc_host *VAR_3 = FUNC_3(VAR_1);

 FUNC_4(&VAR_3->cmd_mutex);

 VAR_3->mrq = VAR_2;


 if (FUNC_0(VAR_1))
  FUNC_2(VAR_3, VAR_2->cmd, 1);
 else {
  VAR_2->cmd->error = -VAR_0;
  FUNC_1(VAR_3, 1);
 }

 FUNC_5(&VAR_3->cmd_mutex);
}
