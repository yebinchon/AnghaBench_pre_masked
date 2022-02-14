
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_mask_waiter {int dummy; } ;
struct ocfs2_lock_res {int l_flags; scalar_t__ l_level; int l_lock; int l_blocking; int l_action; int l_name; } ;
struct ocfs2_file_private {struct ocfs2_lock_res fp_flock; } ;
struct file {TYPE_2__* f_mapping; struct ocfs2_file_private* private_data; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int i_sb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_lock_res*,struct ocfs2_mask_waiter*,int ,int ) ;
 int FUNC_2 (struct ocfs2_lock_res*,int ) ;
 int FUNC_3 (int ,char*,int ,int,scalar_t__,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ocfs2_super*,struct ocfs2_lock_res*,scalar_t__,int ,unsigned int) ;
 int FUNC_6 (struct ocfs2_mask_waiter*) ;
 unsigned int FUNC_7 (struct ocfs2_lock_res*,scalar_t__) ;
 int FUNC_8 (struct ocfs2_mask_waiter*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

void FUNC_11(struct file *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 unsigned long VAR_8;
 struct ocfs2_file_private *VAR_9 = VAR_5->private_data;
 struct ocfs2_lock_res *VAR_10 = &VAR_9->fp_flock;
 struct ocfs2_super *VAR_11 = FUNC_0(VAR_5->f_mapping->host->i_sb);
 struct ocfs2_mask_waiter VAR_12;

 FUNC_6(&VAR_12);

 if (!(VAR_10->l_flags & VAR_2))
  return;

 if (VAR_10->l_level == VAR_1)
  return;

 FUNC_3(0, "Unlock: \"%s\" flags: 0x%lx, level: %d, act: %d\n",
      VAR_10->l_name, VAR_10->l_flags, VAR_10->l_level,
      VAR_10->l_action);

 FUNC_9(&VAR_10->l_lock, VAR_8);



 FUNC_2(VAR_10, VAR_3);
 VAR_10->l_blocking = VAR_0;

 VAR_7 = FUNC_7(VAR_10, VAR_1);
 FUNC_1(VAR_10, &VAR_12, VAR_4, 0);
 FUNC_10(&VAR_10->l_lock, VAR_8);

 VAR_6 = FUNC_5(VAR_11, VAR_10, VAR_1, 0, VAR_7);
 if (VAR_6) {
  FUNC_4(VAR_6);
  return;
 }

 VAR_6 = FUNC_8(&VAR_12);
 if (VAR_6)
  FUNC_4(VAR_6);
}
