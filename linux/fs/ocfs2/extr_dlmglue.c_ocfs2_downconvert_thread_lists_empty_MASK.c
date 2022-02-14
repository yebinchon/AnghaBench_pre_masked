
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dc_task_lock; int blocked_lock_list; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_super *VAR_0)
{
 int VAR_1 = 0;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->dc_task_lock, VAR_2);
 if (FUNC_0(&VAR_0->blocked_lock_list))
  VAR_1 = 1;

 FUNC_2(&VAR_0->dc_task_lock, VAR_2);
 return VAR_1;
}
