
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcs_cmd {int dummy; } ;
struct TYPE_2__ {int state; int num_cmds; int cmds; } ;
struct rpmh_request {TYPE_1__ msg; int cmd; } ;
typedef enum rpmh_state { ____Placeholder_rpmh_state } rpmh_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct tcs_cmd const*,int) ;

__attribute__((used)) static int FUNC_1(struct rpmh_request *VAR_2, enum rpmh_state VAR_3,
  const struct tcs_cmd *VAR_4, u32 VAR_5)
{
 if (!VAR_4 || !VAR_5 || VAR_5 > VAR_1)
  return -VAR_0;

 FUNC_0(VAR_2->cmd, VAR_4, VAR_5 * sizeof(*VAR_4));

 VAR_2->msg.state = VAR_3;
 VAR_2->msg.cmds = VAR_2->cmd;
 VAR_2->msg.num_cmds = VAR_5;

 return 0;
}
