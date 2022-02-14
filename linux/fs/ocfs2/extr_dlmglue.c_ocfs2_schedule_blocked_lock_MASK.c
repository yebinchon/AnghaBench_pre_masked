
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dc_task_lock; int blocked_lock_count; int blocked_lock_list; } ;
struct ocfs2_lock_res {int l_flags; int l_blocked_list; int l_name; int l_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ocfs2_lock_res*,int ) ;
 int FUNC_4 (int ,char*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct ocfs2_super *VAR_3,
     struct ocfs2_lock_res *VAR_4)
{
 unsigned long VAR_5;

 FUNC_0(&VAR_4->l_lock);

 if (VAR_4->l_flags & VAR_1) {



  FUNC_4(VAR_0, "lockres %s won't be scheduled: flags 0x%lx\n",
       VAR_4->l_name, VAR_4->l_flags);
  return;
 }

 FUNC_3(VAR_4, VAR_2);

 FUNC_5(&VAR_3->dc_task_lock, VAR_5);
 if (FUNC_2(&VAR_4->l_blocked_list)) {
  FUNC_1(&VAR_4->l_blocked_list,
         &VAR_3->blocked_lock_list);
  VAR_3->blocked_lock_count++;
 }
 FUNC_6(&VAR_3->dc_task_lock, VAR_5);
}
