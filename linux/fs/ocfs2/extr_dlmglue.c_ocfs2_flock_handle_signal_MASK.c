
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_mask_waiter {int dummy; } ;
struct ocfs2_lock_res {int l_flags; int l_level; int l_lock; int l_action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocfs2_lock_res*,struct ocfs2_mask_waiter*,int,int ) ;
 int FUNC_1 (int ,char*,int,int,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_super*,struct ocfs2_lock_res*) ;
 struct ocfs2_super* FUNC_4 (struct ocfs2_lock_res*) ;
 int FUNC_5 (struct ocfs2_mask_waiter*) ;
 int FUNC_6 (struct ocfs2_super*,struct ocfs2_lock_res*) ;
 int FUNC_7 (struct ocfs2_mask_waiter*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct ocfs2_lock_res *VAR_2,
         int VAR_3)
{
 int VAR_4;
 struct ocfs2_super *VAR_5 = FUNC_4(VAR_2);
 unsigned long VAR_6;
 struct ocfs2_mask_waiter VAR_7;

 FUNC_5(&VAR_7);

retry_cancel:
 FUNC_8(&VAR_2->l_lock, VAR_6);
 if (VAR_2->l_flags & VAR_1) {
  VAR_4 = FUNC_6(VAR_5, VAR_2);
  if (VAR_4) {
   FUNC_9(&VAR_2->l_lock, VAR_6);
   VAR_4 = FUNC_3(VAR_5, VAR_2);
   if (VAR_4 < 0) {
    FUNC_2(VAR_4);
    goto out;
   }
   goto retry_cancel;
  }
  FUNC_0(VAR_2, &VAR_7, VAR_1, 0);
  FUNC_9(&VAR_2->l_lock, VAR_6);

  FUNC_7(&VAR_7);
  goto retry_cancel;
 }

 VAR_4 = -VAR_0;




 if (VAR_2->l_level == VAR_3)
  VAR_4 = 0;

 FUNC_1(0, "Cancel returning %d. flags: 0x%lx, level: %d, act: %d\n", VAR_4,
      VAR_2->l_flags, VAR_2->l_level, VAR_2->l_action);

 FUNC_9(&VAR_2->l_lock, VAR_6);

out:
 return VAR_4;
}
