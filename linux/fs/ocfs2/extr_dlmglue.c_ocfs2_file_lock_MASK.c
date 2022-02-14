
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {int cconn; } ;
struct ocfs2_mask_waiter {int dummy; } ;
struct ocfs2_lock_res {int l_flags; int l_level; int l_requested; int l_name; int l_lksb; int l_lock; int l_action; } ;
struct ocfs2_file_private {struct ocfs2_lock_res fp_flock; } ;
struct file {TYPE_2__* f_mapping; struct ocfs2_file_private* private_data; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int i_sb; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (struct ocfs2_lock_res*,struct ocfs2_mask_waiter*,int,int ) ;
 int FUNC_3 (struct ocfs2_lock_res*,int) ;
 int FUNC_4 (struct ocfs2_lock_res*,struct ocfs2_mask_waiter*) ;
 int FUNC_5 (int ,char*,int ,int,int,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int,int *,unsigned int,int ,scalar_t__) ;
 int FUNC_8 (struct ocfs2_lock_res*,int) ;
 int FUNC_9 (struct ocfs2_mask_waiter*) ;
 int FUNC_10 (struct ocfs2_super*,struct ocfs2_lock_res*,int,int ) ;
 int FUNC_11 (char*,int,struct ocfs2_lock_res*) ;
 int FUNC_12 (struct ocfs2_lock_res*,int) ;
 int FUNC_13 (struct ocfs2_mask_waiter*) ;
 int FUNC_14 (struct ocfs2_mask_waiter*,struct ocfs2_lock_res*) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;

int FUNC_17(struct file *VAR_13, int VAR_14, int VAR_15)
{
 int VAR_16, VAR_17 = VAR_14 ? VAR_2 : VAR_4;
 unsigned int VAR_18 = VAR_15 ? VAR_1 : 0;
 unsigned long VAR_19;
 struct ocfs2_file_private *VAR_20 = VAR_13->private_data;
 struct ocfs2_lock_res *VAR_21 = &VAR_20->fp_flock;
 struct ocfs2_super *VAR_22 = FUNC_1(VAR_13->f_mapping->host->i_sb);
 struct ocfs2_mask_waiter VAR_23;

 FUNC_9(&VAR_23);

 if ((VAR_21->l_flags & VAR_11) ||
     (VAR_21->l_level > VAR_3)) {
  FUNC_5(VAR_8,
       "File lock \"%s\" has busy or locked state: flags: 0x%lx, "
       "level: %u\n", VAR_21->l_name, VAR_21->l_flags,
       VAR_21->l_level);
  return -VAR_6;
 }

 FUNC_15(&VAR_21->l_lock, VAR_19);
 if (!(VAR_21->l_flags & VAR_10)) {
  FUNC_2(VAR_21, &VAR_23, VAR_11, 0);
  FUNC_16(&VAR_21->l_lock, VAR_19);





  VAR_16 = FUNC_10(VAR_22, VAR_21, VAR_3, 0);
  if (VAR_16 < 0) {
   FUNC_6(VAR_16);
   goto out;
  }

  VAR_16 = FUNC_13(&VAR_23);
  if (VAR_16) {
   FUNC_6(VAR_16);
   goto out;
  }
  FUNC_15(&VAR_21->l_lock, VAR_19);
 }

 VAR_21->l_action = VAR_9;
 VAR_18 |= VAR_0;
 VAR_21->l_requested = VAR_17;
 FUNC_3(VAR_21, VAR_11);

 FUNC_2(VAR_21, &VAR_23, VAR_11, 0);
 FUNC_16(&VAR_21->l_lock, VAR_19);

 VAR_16 = FUNC_7(VAR_22->cconn, VAR_17, &VAR_21->l_lksb, VAR_18,
        VAR_21->l_name, VAR_12 - 1);
 if (VAR_16) {
  if (!VAR_15 || (VAR_16 != -VAR_5)) {
   FUNC_11("ocfs2_dlm_lock", VAR_16, VAR_21);
   VAR_16 = -VAR_6;
  }

  FUNC_12(VAR_21, 1);
  FUNC_4(VAR_21, &VAR_23);
  goto out;
 }

 VAR_16 = FUNC_14(&VAR_23, VAR_21);
 if (VAR_16 == -VAR_7) {
  VAR_16 = FUNC_8(VAR_21, VAR_17);
 } else if (!VAR_16 && (VAR_17 > VAR_21->l_level)) {

  FUNC_0(!VAR_15);
  VAR_16 = -VAR_5;
 }

out:

 FUNC_5(0, "Lock: \"%s\" ex: %d, trylock: %d, returns: %d\n",
      VAR_21->l_name, VAR_14, VAR_15, VAR_16);
 return VAR_16;
}
