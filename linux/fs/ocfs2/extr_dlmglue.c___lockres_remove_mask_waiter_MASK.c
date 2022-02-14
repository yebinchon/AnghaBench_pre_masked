
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_mask_waiter {int mw_mask; int mw_goal; int mw_complete; int mw_item; } ;
struct ocfs2_lock_res {int l_flags; int l_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ocfs2_lock_res*) ;

__attribute__((used)) static int FUNC_5(struct ocfs2_lock_res *VAR_1,
          struct ocfs2_mask_waiter *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(&VAR_1->l_lock);
 if (!FUNC_3(&VAR_2->mw_item)) {
  if ((VAR_1->l_flags & VAR_2->mw_mask) != VAR_2->mw_goal)
   VAR_3 = -VAR_0;

  FUNC_2(&VAR_2->mw_item);
  FUNC_1(&VAR_2->mw_complete);
  FUNC_4(VAR_1);
 }

 return VAR_3;
}
