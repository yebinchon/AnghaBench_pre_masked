
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_super {int s_mount_opt; int cconn; } ;
struct ocfs2_mask_waiter {int mw_mask; } ;
struct TYPE_5__ {int * key; } ;
struct ocfs2_lock_res {int l_flags; int l_level; scalar_t__ l_action; int l_requested; TYPE_2__ l_lockdep_map; int l_lock; int l_name; int l_lksb; TYPE_1__* l_ops; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_1 (struct ocfs2_lock_res*,struct ocfs2_mask_waiter*) ;
 int VAR_26 ;
 int FUNC_2 (struct ocfs2_lock_res*,struct ocfs2_mask_waiter*,int,int ) ;
 int FUNC_3 (struct ocfs2_lock_res*,int) ;
 int FUNC_4 (struct ocfs2_lock_res*,unsigned int,struct ocfs2_super*) ;
 int FUNC_5 (struct ocfs2_lock_res*,int) ;
 unsigned int FUNC_6 (struct ocfs2_lock_res*) ;
 int FUNC_7 (int ,char*,int ,...) ;
 int FUNC_8 (int,char*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int,int *,int,int ,scalar_t__) ;
 int FUNC_11 (struct ocfs2_lock_res*,int) ;
 int FUNC_12 (struct ocfs2_mask_waiter*) ;
 int FUNC_13 (char*,int,struct ocfs2_lock_res*) ;
 int FUNC_14 (struct ocfs2_lock_res*,int) ;
 int FUNC_15 (struct ocfs2_lock_res*,int) ;
 int FUNC_16 (struct ocfs2_lock_res*,int,struct ocfs2_mask_waiter*,int) ;
 int FUNC_17 (struct ocfs2_mask_waiter*) ;
 int FUNC_18 (struct ocfs2_super*) ;
 int FUNC_19 (TYPE_2__*,int,int,unsigned long) ;
 int FUNC_20 (TYPE_2__*,int,int,unsigned long) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_24(struct ocfs2_super *VAR_27,
    struct ocfs2_lock_res *VAR_28,
    int VAR_29,
    u32 VAR_30,
    int VAR_31,
    int VAR_32,
    unsigned long VAR_33)
{
 struct ocfs2_mask_waiter VAR_34;
 int VAR_35, VAR_36 = !(VAR_27->s_mount_opt & VAR_25);
 int VAR_37 = 0;
 unsigned long VAR_38;
 unsigned int VAR_39;
 int VAR_40 = 0;
 int VAR_41 = 0;
 int VAR_42 = 0;

 if (!(VAR_28->l_flags & VAR_20)) {
  FUNC_9(-VAR_7);
  return -VAR_7;
 }

 FUNC_12(&VAR_34);

 if (VAR_28->l_ops->flags & VAR_9)
  VAR_30 |= VAR_2;

again:
 VAR_35 = 0;

 FUNC_22(&VAR_28->l_lock, VAR_38);

 if (VAR_36 && FUNC_21(VAR_26)) {
  VAR_37 = -VAR_8;
  goto unlock;
 }

 FUNC_8(VAR_28->l_flags & VAR_18,
   "Cluster lock called on freeing lockres %s! flags "
   "0x%lx\n", VAR_28->l_name, VAR_28->l_flags);




 if (VAR_28->l_flags & VAR_17 &&
     VAR_29 > VAR_28->l_level) {


  FUNC_2(VAR_28, &VAR_34, VAR_17, 0);
  VAR_35 = 1;
  goto unlock;
 }

 if (VAR_28->l_flags & VAR_23) {
  if (VAR_29 <= VAR_28->l_level)
   goto update_holders;
 }

 if (VAR_28->l_flags & VAR_16 &&
     !FUNC_14(VAR_28, VAR_29)) {


  FUNC_2(VAR_28, &VAR_34, VAR_16, 0);
  VAR_35 = 1;
  goto unlock;
 }

 if (VAR_29 > VAR_28->l_level) {
  if (VAR_40 > 0) {
   VAR_37 = -VAR_6;
   goto unlock;
  }
  if (VAR_30 & VAR_1)
   VAR_40 = 1;

  if (VAR_28->l_action != VAR_14)
   FUNC_7(VAR_11, "lockres %s has action %u pending\n",
        VAR_28->l_name, VAR_28->l_action);

  if (!(VAR_28->l_flags & VAR_15)) {
   VAR_28->l_action = VAR_12;
   VAR_30 &= ~VAR_0;
  } else {
   VAR_28->l_action = VAR_13;
   VAR_30 |= VAR_0;
  }

  VAR_28->l_requested = VAR_29;
  FUNC_5(VAR_28, VAR_17);
  VAR_39 = FUNC_6(VAR_28);
  FUNC_23(&VAR_28->l_lock, VAR_38);

  FUNC_0(VAR_29 == VAR_3);
  FUNC_0(VAR_29 == VAR_4);

  FUNC_7(VAR_10, "lockres %s, convert from %d to %d\n",
       VAR_28->l_name, VAR_28->l_level, VAR_29);


  VAR_37 = FUNC_10(VAR_27->cconn,
         VAR_29,
         &VAR_28->l_lksb,
         VAR_30,
         VAR_28->l_name,
         VAR_19 - 1);
  FUNC_4(VAR_28, VAR_39, VAR_27);
  if (VAR_37) {
   if (!(VAR_30 & VAR_1) ||
       (VAR_37 != -VAR_6)) {
    FUNC_13("ocfs2_dlm_lock",
          VAR_37, VAR_28);
   }
   FUNC_15(VAR_28, 1);
   goto out;
  }
  VAR_41 = 1;

  FUNC_7(0, "lock %s, successful return from ocfs2_dlm_lock\n",
       VAR_28->l_name);



  VAR_36 = 0;


  goto again;
 }

update_holders:

 FUNC_11(VAR_28, VAR_29);

 VAR_37 = 0;
unlock:
 FUNC_3(VAR_28, VAR_23);


 VAR_42 = (VAR_28->l_flags & VAR_16);

 FUNC_23(&VAR_28->l_lock, VAR_38);
 if (VAR_42)
  FUNC_18(VAR_27);
out:
 if (VAR_35 && VAR_31 & VAR_21 &&
     VAR_34.mw_mask & (VAR_17|VAR_16)) {
  VAR_35 = 0;
  FUNC_22(&VAR_28->l_lock, VAR_38);
  if (FUNC_1(VAR_28, &VAR_34)) {
   if (VAR_41)
    FUNC_5(VAR_28,
     VAR_22);
   FUNC_23(&VAR_28->l_lock, VAR_38);
   VAR_37 = -VAR_6;
  } else {
   FUNC_23(&VAR_28->l_lock, VAR_38);
   goto again;
  }
 }
 if (VAR_35) {
  VAR_37 = FUNC_17(&VAR_34);
  if (VAR_37 == 0)
   goto again;
  FUNC_9(VAR_37);
 }
 FUNC_16(VAR_28, VAR_29, &VAR_34, VAR_37);
 return VAR_37;
}
