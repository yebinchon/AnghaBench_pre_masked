
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dc_event; int dc_task_lock; int dc_wake_sequence; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ocfs2_super *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->dc_task_lock, VAR_1);


 VAR_0->dc_wake_sequence++;
 FUNC_1(&VAR_0->dc_task_lock, VAR_1);
 FUNC_2(&VAR_0->dc_event);
}
