
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdc_host {int dummy; } ;
struct mmc_request {int cmd; struct mmc_command* sbc; } ;
struct mmc_command {scalar_t__ opcode; int data; scalar_t__ error; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct msdc_host*,struct mmc_request*) ;
 int FUNC_1 (struct msdc_host*,struct mmc_request*,int ) ;
 int FUNC_2 (struct msdc_host*,struct mmc_request*,struct mmc_command*,int ) ;

__attribute__((used)) static void FUNC_3(struct msdc_host *VAR_3,
  struct mmc_request *VAR_4, struct mmc_command *VAR_5)
{
 if ((VAR_5->error &&
     !(VAR_5->error == -VAR_0 &&
       (VAR_5->opcode == VAR_1 ||
        VAR_5->opcode == VAR_2))) ||
     (VAR_4->sbc && VAR_4->sbc->error))
  FUNC_0(VAR_3, VAR_4);
 else if (VAR_5 == VAR_4->sbc)
  FUNC_1(VAR_3, VAR_4, VAR_4->cmd);
 else if (!VAR_5->data)
  FUNC_0(VAR_3, VAR_4);
 else
  FUNC_2(VAR_3, VAR_4, VAR_5, VAR_5->data);
}
