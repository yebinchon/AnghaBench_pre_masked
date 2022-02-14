
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_unblock_ctl {scalar_t__ unblock_action; scalar_t__ requeue; int member_1; int member_0; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int l_flags; TYPE_1__* l_ops; int l_lock; int l_name; } ;
struct TYPE_2__ {int (* post_unlock ) (struct ocfs2_super*,struct ocfs2_lock_res*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ocfs2_lock_res*,int ) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_super*,struct ocfs2_lock_res*) ;
 int FUNC_5 (struct ocfs2_super*,struct ocfs2_lock_res*,struct ocfs2_unblock_ctl*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct ocfs2_super*,struct ocfs2_lock_res*) ;

__attribute__((used)) static void FUNC_9(struct ocfs2_super *VAR_4,
           struct ocfs2_lock_res *VAR_5)
{
 int VAR_6;
 struct ocfs2_unblock_ctl VAR_7 = {0, 0,};
 unsigned long VAR_8;





 FUNC_0(!VAR_5);
 FUNC_0(!VAR_5->l_ops);

 FUNC_2(VAR_0, "lockres %s blocked\n", VAR_5->l_name);






 FUNC_6(&VAR_5->l_lock, VAR_8);
 if (VAR_5->l_flags & VAR_1)
  goto unqueue;
 FUNC_7(&VAR_5->l_lock, VAR_8);

 VAR_6 = FUNC_5(VAR_4, VAR_5, &VAR_7);
 if (VAR_6 < 0)
  FUNC_3(VAR_6);

 FUNC_6(&VAR_5->l_lock, VAR_8);
unqueue:
 if (VAR_5->l_flags & VAR_1 || !VAR_7.requeue) {
  FUNC_1(VAR_5, VAR_2);
 } else
  FUNC_4(VAR_4, VAR_5);

 FUNC_2(VAR_0, "lockres %s, requeue = %s.\n", VAR_5->l_name,
      VAR_7.requeue ? "yes" : "no");
 FUNC_7(&VAR_5->l_lock, VAR_8);

 if (VAR_7.unblock_action != VAR_3
     && VAR_5->l_ops->post_unlock)
  VAR_5->l_ops->post_unlock(VAR_4, VAR_5);
}
