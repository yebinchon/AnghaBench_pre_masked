
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int cmd_count; int cmd_list_wq; int sess_cmd_lock; int sess_cmd_list; int sess_acl_list; int sess_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

int FUNC_4(struct se_session *VAR_2)
{
 FUNC_0(&VAR_2->sess_list);
 FUNC_0(&VAR_2->sess_acl_list);
 FUNC_0(&VAR_2->sess_cmd_list);
 FUNC_3(&VAR_2->sess_cmd_lock);
 FUNC_1(&VAR_2->cmd_list_wq);
 return FUNC_2(&VAR_2->cmd_count,
          VAR_1, 0, VAR_0);
}
