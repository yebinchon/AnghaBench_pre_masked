
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {scalar_t__ dc_task; int dc_task_lock; int blocked_lock_count; } ;
struct ocfs2_mask_waiter {int dummy; } ;
struct ocfs2_lock_res {int l_flags; int l_lock; int l_name; TYPE_1__* l_ops; int l_blocked_list; } ;
struct TYPE_2__ {int post_unlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ocfs2_lock_res*,struct ocfs2_mask_waiter*,int,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ocfs2_mask_waiter*) ;
 int FUNC_6 (struct ocfs2_super*,struct ocfs2_lock_res*) ;
 int FUNC_7 (struct ocfs2_mask_waiter*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

void FUNC_10(struct ocfs2_super *VAR_3,
    struct ocfs2_lock_res *VAR_4)
{
 int VAR_5;
 struct ocfs2_mask_waiter VAR_6;
 unsigned long VAR_7, VAR_8;

 FUNC_5(&VAR_6);

 FUNC_8(&VAR_4->l_lock, VAR_7);
 VAR_4->l_flags |= VAR_0;
 if (VAR_4->l_flags & VAR_1 && VAR_2 == VAR_3->dc_task) {
  FUNC_9(&VAR_4->l_lock, VAR_7);
  FUNC_8(&VAR_3->dc_task_lock, VAR_8);
  FUNC_1(&VAR_4->l_blocked_list);
  VAR_3->blocked_lock_count--;
  FUNC_9(&VAR_3->dc_task_lock, VAR_8);






  FUNC_0(VAR_4->l_ops->post_unlock);

  FUNC_6(VAR_3, VAR_4);
  return;
 }
 while (VAR_4->l_flags & VAR_1) {
  FUNC_2(VAR_4, &VAR_6, VAR_1, 0);
  FUNC_9(&VAR_4->l_lock, VAR_7);

  FUNC_3(0, "Waiting on lockres %s\n", VAR_4->l_name);

  VAR_5 = FUNC_7(&VAR_6);
  if (VAR_5)
   FUNC_4(VAR_5);

  FUNC_8(&VAR_4->l_lock, VAR_7);
 }
 FUNC_9(&VAR_4->l_lock, VAR_7);
}
