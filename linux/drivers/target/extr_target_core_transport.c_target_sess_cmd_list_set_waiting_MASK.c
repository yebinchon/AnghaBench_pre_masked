
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int sess_tearing_down; int cmd_count; int sess_cmd_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct se_session *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->sess_cmd_lock, VAR_1);
 VAR_0->sess_tearing_down = 1;
 FUNC_2(&VAR_0->sess_cmd_lock, VAR_1);

 FUNC_0(&VAR_0->cmd_count);
}
