
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usdhi6_host {int mmc; int wait; struct mmc_request* mrq; } ;
struct mmc_request {TYPE_2__* stop; TYPE_1__* cmd; } ;
struct TYPE_4__ {int error; int opcode; } ;
struct TYPE_3__ {int opcode; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct usdhi6_host *VAR_3)
{
 struct mmc_request *VAR_4 = VAR_3->mrq;

 switch (VAR_4->cmd->opcode) {
 case 129:
 case 128:
  if (VAR_4->stop->opcode == VAR_1) {
   VAR_3->wait = VAR_2;
   return 0;
  }

 default:
  FUNC_0(FUNC_1(VAR_3->mmc),
   "unsupported stop CMD%d for CMD%d\n",
   VAR_4->stop->opcode, VAR_4->cmd->opcode);
  VAR_4->stop->error = -VAR_0;
 }

 return -VAR_0;
}
