
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_unblock_ctl {int requeue; int unblock_action; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int l_flags; int l_blocking; int l_level; int l_lock; TYPE_1__* l_ops; int l_name; scalar_t__ l_ex_holders; scalar_t__ l_ro_holders; } ;
struct TYPE_2__ {int flags; int (* set_lvb ) (struct ocfs2_lock_res*) ;int (* downconvert_worker ) (struct ocfs2_lock_res*,int) ;int (* check_downconvert ) (struct ocfs2_lock_res*,int) ;} ;


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
 int VAR_12 ;
 int FUNC_1 (struct ocfs2_lock_res*,int) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_super*,struct ocfs2_lock_res*) ;
 int FUNC_5 (struct ocfs2_super*,struct ocfs2_lock_res*,int,int,unsigned int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ocfs2_super*,struct ocfs2_lock_res*) ;
 unsigned int FUNC_8 (struct ocfs2_lock_res*,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct ocfs2_lock_res*,int) ;
 int FUNC_12 (struct ocfs2_lock_res*,int) ;
 int FUNC_13 (struct ocfs2_lock_res*) ;

__attribute__((used)) static int FUNC_14(struct ocfs2_super *VAR_13,
         struct ocfs2_lock_res *VAR_14,
         struct ocfs2_unblock_ctl *VAR_15)
{
 unsigned long VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20 = 0;
 int VAR_21 = 0;
 unsigned int VAR_22;

 FUNC_9(&VAR_14->l_lock, VAR_16);

recheck:



 if (!(VAR_14->l_flags & VAR_6)) {
  FUNC_0(VAR_14->l_blocking != VAR_1);
  FUNC_10(&VAR_14->l_lock, VAR_16);
  VAR_20 = 0;
  goto leave;
 }

 if (VAR_14->l_flags & VAR_7) {
  if (VAR_14->l_flags & VAR_9) {
   FUNC_2(VAR_5, "lockres %s, ReQ: Pending\n",
        VAR_14->l_name);
   goto leave_requeue;
  }

  VAR_15->requeue = 1;
  VAR_20 = FUNC_7(VAR_13, VAR_14);
  FUNC_10(&VAR_14->l_lock, VAR_16);
  if (VAR_20) {
   VAR_20 = FUNC_4(VAR_13, VAR_14);
   if (VAR_20 < 0)
    FUNC_3(VAR_20);
  }
  goto leave;
 }
 if (VAR_14->l_flags & VAR_11)
  goto leave_requeue;






 if (VAR_14->l_level == VAR_1) {
  FUNC_0(VAR_14->l_ex_holders || VAR_14->l_ro_holders);
  FUNC_2(VAR_5, "lockres %s, Aborting dc\n", VAR_14->l_name);
  VAR_14->l_blocking = VAR_1;
  FUNC_1(VAR_14, VAR_6);
  FUNC_10(&VAR_14->l_lock, VAR_16);
  goto leave;
 }



 if ((VAR_14->l_blocking == VAR_0)
     && (VAR_14->l_ex_holders || VAR_14->l_ro_holders)) {
  FUNC_2(VAR_5, "lockres %s, ReQ: EX/PR Holders %u,%u\n",
       VAR_14->l_name, VAR_14->l_ex_holders,
       VAR_14->l_ro_holders);
  goto leave_requeue;
 }



 if (VAR_14->l_blocking == VAR_2 &&
     VAR_14->l_ex_holders) {
  FUNC_2(VAR_5, "lockres %s, ReQ: EX Holders %u\n",
       VAR_14->l_name, VAR_14->l_ex_holders);
  goto leave_requeue;
 }





 if ((VAR_14->l_ops->flags & VAR_3)
     && (VAR_14->l_flags & VAR_10)) {
  FUNC_2(VAR_5, "lockres %s, ReQ: Lock Refreshing\n",
       VAR_14->l_name);
  goto leave_requeue;
 }

 VAR_18 = FUNC_6(VAR_14->l_blocking);

 if (VAR_14->l_ops->check_downconvert
     && !VAR_14->l_ops->check_downconvert(VAR_14, VAR_18)) {
  FUNC_2(VAR_5, "lockres %s, ReQ: Checkpointing\n",
       VAR_14->l_name);
  goto leave_requeue;
 }




 if (!VAR_14->l_ops->downconvert_worker)
  goto downconvert;





 VAR_17 = VAR_14->l_blocking;
 VAR_19 = VAR_14->l_level;
 FUNC_10(&VAR_14->l_lock, VAR_16);

 VAR_15->unblock_action = VAR_14->l_ops->downconvert_worker(VAR_14, VAR_17);

 if (VAR_15->unblock_action == VAR_12) {
  FUNC_2(VAR_5, "lockres %s, UNBLOCK_STOP_POST\n",
       VAR_14->l_name);
  goto leave;
 }

 FUNC_9(&VAR_14->l_lock, VAR_16);
 if ((VAR_17 != VAR_14->l_blocking) || (VAR_19 != VAR_14->l_level)) {


  FUNC_2(VAR_5, "lockres %s, block=%d:%d, level=%d:%d, "
       "Recheck\n", VAR_14->l_name, VAR_17,
       VAR_14->l_blocking, VAR_19, VAR_14->l_level);
  goto recheck;
 }

downconvert:
 VAR_15->requeue = 0;

 if (VAR_14->l_ops->flags & VAR_4) {
  if (VAR_14->l_level == VAR_0)
   VAR_21 = 1;







  if (VAR_21 && !(VAR_14->l_flags & VAR_8))
   VAR_14->l_ops->set_lvb(VAR_14);
 }

 VAR_22 = FUNC_8(VAR_14, VAR_18);
 FUNC_10(&VAR_14->l_lock, VAR_16);
 VAR_20 = FUNC_5(VAR_13, VAR_14, VAR_18, VAR_21,
         VAR_22);

leave:
 if (VAR_20)
  FUNC_3(VAR_20);
 return VAR_20;

leave_requeue:
 FUNC_10(&VAR_14->l_lock, VAR_16);
 VAR_15->requeue = 1;

 return 0;
}
