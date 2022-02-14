
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tcp_task {int r2tpool; int r2tqueue; } ;
struct iscsi_task {struct iscsi_tcp_task* dd_data; } ;
struct iscsi_session {int cmds_max; struct iscsi_task** cmds; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct iscsi_session *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->cmds_max; VAR_1++) {
  struct iscsi_task *VAR_2 = VAR_0->cmds[VAR_1];
  struct iscsi_tcp_task *VAR_3 = VAR_2->dd_data;

  FUNC_1(&VAR_3->r2tqueue);
  FUNC_0(&VAR_3->r2tpool);
 }
}
