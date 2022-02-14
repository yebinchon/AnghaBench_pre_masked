
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct iscsi_conn_recovery {int cmd_count; } ;
struct iscsi_cmd {int i_conn_node; struct iscsi_conn_recovery* cr; int init_task_tag; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(
 struct iscsi_cmd *VAR_0,
 struct iscsi_session *VAR_1)
{
 struct iscsi_conn_recovery *VAR_2;

 if (!VAR_0->cr) {
  FUNC_2("struct iscsi_conn_recovery pointer for ITT: 0x%08x"
   " is NULL!\n", VAR_0->init_task_tag);
  FUNC_0();
 }
 VAR_2 = VAR_0->cr;

 FUNC_1(&VAR_0->i_conn_node);
 return --VAR_2->cmd_count;
}
