
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct msrl_action {long err; struct isst_if_mbox_cmd* mbox_cmd; } ;
struct isst_if_mbox_cmd {int req_data; int parameter; int logical_cpu; int sub_command; int command; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct isst_if_mbox_cmd*) ;
 scalar_t__ FUNC_2 (struct isst_if_mbox_cmd*) ;
 long FUNC_3 (int ,int ,int ,int,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,struct msrl_action*,int) ;

__attribute__((used)) static long FUNC_5(u8 *VAR_4, int *VAR_5, int VAR_6)
{
 struct msrl_action VAR_7;
 int VAR_8;

 VAR_7.mbox_cmd = (struct isst_if_mbox_cmd *)VAR_4;

 if (FUNC_1(VAR_7.mbox_cmd))
  return -VAR_1;

 if (FUNC_2(VAR_7.mbox_cmd) &&
     !FUNC_0(VAR_0))
  return -VAR_2;
 VAR_8 = FUNC_4(VAR_7.mbox_cmd->logical_cpu,
           VAR_3, &VAR_7, 1);
 if (VAR_8)
  return VAR_8;

 if (!VAR_7.err && !VAR_6 && FUNC_2(VAR_7.mbox_cmd))
  VAR_7.err = FUNC_3(VAR_7.mbox_cmd->command,
         VAR_7.mbox_cmd->sub_command,
         VAR_7.mbox_cmd->logical_cpu, 1,
         VAR_7.mbox_cmd->parameter,
         VAR_7.mbox_cmd->req_data);
 *VAR_5 = 0;

 return VAR_7.err;
}
