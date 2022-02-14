
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int recovery_event; int recovery_lock; int * recovery_thread_task; int uuid_str; scalar_t__ disable_recovery; int node_num; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int ,struct ocfs2_super*,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ocfs2_super*,int) ;
 int FUNC_7 (int,int ,scalar_t__,int *,int) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct ocfs2_super *VAR_1, int VAR_2)
{
 FUNC_4(&VAR_1->recovery_lock);

 FUNC_7(VAR_2, VAR_1->node_num,
  VAR_1->disable_recovery, VAR_1->recovery_thread_task,
  VAR_1->disable_recovery ?
  -1 : FUNC_6(VAR_1, VAR_2));

 if (VAR_1->disable_recovery)
  goto out;

 if (VAR_1->recovery_thread_task)
  goto out;

 VAR_1->recovery_thread_task = FUNC_2(VAR_0, VAR_1,
   "ocfs2rec-%s", VAR_1->uuid_str);
 if (FUNC_0(VAR_1->recovery_thread_task)) {
  FUNC_3((int)FUNC_1(VAR_1->recovery_thread_task));
  VAR_1->recovery_thread_task = ((void*)0);
 }

out:
 FUNC_5(&VAR_1->recovery_lock);
 FUNC_8(&VAR_1->recovery_event);
}
