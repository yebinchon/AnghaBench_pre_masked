
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {TYPE_1__* cmd; } ;
struct mmc_host {int dummy; } ;
struct goldfish_mmc_host {struct mmc_request* mrq; } ;
struct TYPE_2__ {scalar_t__ opcode; int flags; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct goldfish_mmc_host*,struct mmc_request*) ;
 int FUNC_2 (struct goldfish_mmc_host*,TYPE_1__*) ;
 struct goldfish_mmc_host* FUNC_3 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_5, struct mmc_request *VAR_6)
{
 struct goldfish_mmc_host *VAR_7 = FUNC_3(VAR_5);

 FUNC_0(VAR_7->mrq != ((void*)0));

 VAR_7->mrq = VAR_6;
 FUNC_1(VAR_7, VAR_6);
 FUNC_2(VAR_7, VAR_6->cmd);





 if (VAR_6->cmd->opcode == VAR_4 &&
     VAR_6->cmd->flags == (VAR_3 | VAR_2 | VAR_1))
  VAR_6->cmd->error = -VAR_0;
}
