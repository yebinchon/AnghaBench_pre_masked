
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_tmr_req {scalar_t__ response; } ;
struct iscsi_tmr_req {scalar_t__ task_reassign; } ;
struct iscsi_conn {int dummy; } ;
struct TYPE_2__ {struct se_tmr_req* se_tmr_req; } ;
struct iscsi_cmd {TYPE_1__ se_cmd; struct iscsi_tmr_req* tmr_req; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iscsi_tmr_req*,struct iscsi_conn*) ;

int FUNC_1(struct iscsi_cmd *VAR_1, struct iscsi_conn *VAR_2)
{
 struct iscsi_tmr_req *VAR_3 = VAR_1->tmr_req;
 struct se_tmr_req *VAR_4 = VAR_1->se_cmd.se_tmr_req;

 if (VAR_3->task_reassign &&
    (VAR_4->response == VAR_0))
  return FUNC_0(VAR_3, VAR_2);

 return 0;
}
