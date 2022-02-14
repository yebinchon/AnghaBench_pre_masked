
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msrl_action {TYPE_1__* mbox_cmd; int err; } ;
struct TYPE_2__ {int resp_data; int req_data; int parameter; int sub_command; int command; } ;


 int FUNC_0 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct msrl_action *VAR_1 = VAR_0;

 VAR_1->err = FUNC_0(VAR_1->mbox_cmd->command,
      VAR_1->mbox_cmd->sub_command,
      VAR_1->mbox_cmd->parameter,
      VAR_1->mbox_cmd->req_data,
      &VAR_1->mbox_cmd->resp_data);
}
