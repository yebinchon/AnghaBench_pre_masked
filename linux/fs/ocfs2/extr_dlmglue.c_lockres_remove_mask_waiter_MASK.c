
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_mask_waiter {int dummy; } ;
struct ocfs2_lock_res {int l_lock; } ;


 int FUNC_0 (struct ocfs2_lock_res*,struct ocfs2_mask_waiter*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_lock_res *VAR_0,
          struct ocfs2_mask_waiter *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = 0;

 FUNC_1(&VAR_0->l_lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->l_lock, VAR_2);

 return VAR_3;

}
