
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_holders; int l_mask_waiters; int l_blocked_list; int l_event; int l_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ocfs2_lock_res*,int ,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ocfs2_lock_res *VAR_0)
{

 FUNC_2(VAR_0, 0, sizeof(struct ocfs2_lock_res));
 FUNC_3(&VAR_0->l_lock);
 FUNC_1(&VAR_0->l_event);
 FUNC_0(&VAR_0->l_blocked_list);
 FUNC_0(&VAR_0->l_mask_waiters);
 FUNC_0(&VAR_0->l_holders);
}
