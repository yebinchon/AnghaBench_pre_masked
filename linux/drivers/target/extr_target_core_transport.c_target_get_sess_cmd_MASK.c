
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int sess_cmd_lock; int cmd_count; int sess_cmd_list; scalar_t__ sess_tearing_down; } ;
struct se_cmd {int se_cmd_list; int se_cmd_flags; int cmd_kref; struct se_session* se_sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct se_cmd*) ;

int FUNC_6(struct se_cmd *VAR_3, bool VAR_4)
{
 struct se_session *VAR_5 = VAR_3->se_sess;
 unsigned long VAR_6;
 int VAR_7 = 0;






 if (VAR_4) {
  if (!FUNC_0(&VAR_3->cmd_kref))
   return -VAR_0;

  VAR_3->se_cmd_flags |= VAR_2;
 }

 FUNC_3(&VAR_5->sess_cmd_lock, VAR_6);
 if (VAR_5->sess_tearing_down) {
  VAR_7 = -VAR_1;
  goto out;
 }
 FUNC_1(&VAR_3->se_cmd_list, &VAR_5->sess_cmd_list);
 FUNC_2(&VAR_5->cmd_count);
out:
 FUNC_4(&VAR_5->sess_cmd_lock, VAR_6);

 if (VAR_7 && VAR_4)
  FUNC_5(VAR_3);

 return VAR_7;
}
