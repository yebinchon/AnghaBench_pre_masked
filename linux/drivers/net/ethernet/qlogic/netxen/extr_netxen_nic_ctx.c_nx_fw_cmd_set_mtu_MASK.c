
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct netxen_recv_context {scalar_t__ state; int context_id; } ;
struct TYPE_2__ {int arg2; scalar_t__ arg3; int arg1; int cmd; } ;
struct netxen_cmd_args {TYPE_1__ req; } ;
struct netxen_adapter {struct netxen_recv_context recv_ctx; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct netxen_cmd_args*,int ,int) ;
 scalar_t__ FUNC_1 (struct netxen_adapter*,struct netxen_cmd_args*) ;

int
FUNC_2(struct netxen_adapter *VAR_4, int VAR_5)
{
 u32 VAR_6 = VAR_3;
 struct netxen_recv_context *VAR_7 = &VAR_4->recv_ctx;
 struct netxen_cmd_args VAR_8;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.req.cmd = VAR_1;
 VAR_8.req.arg1 = VAR_7->context_id;
 VAR_8.req.arg2 = VAR_5;
 VAR_8.req.arg3 = 0;

 if (VAR_7->state == VAR_2)
  VAR_6 = FUNC_1(VAR_4, &VAR_8);

 if (VAR_6 != VAR_3)
  return -VAR_0;

 return 0;
}
