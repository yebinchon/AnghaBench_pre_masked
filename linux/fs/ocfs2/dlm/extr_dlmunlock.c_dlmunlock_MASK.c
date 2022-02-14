
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_lockstatus {struct dlm_lock* lockid; } ;
struct dlm_lock_resource {scalar_t__ owner; int spinlock; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct dlm_lock {TYPE_1__ ml; struct dlm_lock_resource* lockres; } ;
struct dlm_ctxt {scalar_t__ node_num; int ast_wq; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;
typedef int (* dlm_astunlockfunc_t ) (void*,int) ;


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
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_lock*) ;
 int FUNC_4 (struct dlm_lock*) ;
 int FUNC_5 (struct dlm_lock*) ;
 int FUNC_6 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_7 (struct dlm_lock_resource*) ;
 int FUNC_8 (struct dlm_lock_resource*) ;
 int FUNC_9 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,struct dlm_lockstatus*,int,int*) ;
 int FUNC_10 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,struct dlm_lockstatus*,int,int*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (void*,int) ;
 int FUNC_16 (int ,int ) ;

enum dlm_status FUNC_17(struct dlm_ctxt *VAR_12, struct dlm_lockstatus *VAR_13,
     int VAR_14, dlm_astunlockfunc_t *VAR_15, void *VAR_16)
{
 enum dlm_status VAR_17;
 struct dlm_lock_resource *VAR_18;
 struct dlm_lock *VAR_19 = ((void*)0);
 int VAR_20, VAR_21;

 if (!VAR_13) {
  FUNC_1(VAR_0);
  return VAR_0;
 }

 if (VAR_14 & ~(VAR_8 | VAR_11 | VAR_10)) {
  FUNC_1(VAR_1);
  return VAR_1;
 }

 if ((VAR_14 & (VAR_11 | VAR_8)) == (VAR_11 | VAR_8)) {
  FUNC_11(0, "VALBLK given with CANCEL: ignoring VALBLK\n");
  VAR_14 &= ~VAR_11;
 }

 if (!VAR_13->lockid || !VAR_13->lockid->lockres) {
  FUNC_1(VAR_1);
  return VAR_1;
 }

 VAR_19 = VAR_13->lockid;
 FUNC_0(!VAR_19);
 FUNC_4(VAR_19);

 VAR_18 = VAR_19->lockres;
 FUNC_0(!VAR_18);
 FUNC_7(VAR_18);
retry:
 VAR_20 = 0;

 FUNC_11(0, "lock=%p res=%p\n", VAR_19, VAR_18);

 FUNC_13(&VAR_18->spinlock);
 VAR_21 = (VAR_18->owner == VAR_12->node_num);
 if (VAR_14 & VAR_11 && VAR_19->ml.type != VAR_9)
  VAR_14 &= ~VAR_11;
 FUNC_14(&VAR_18->spinlock);

 if (VAR_21) {
  VAR_17 = FUNC_9(VAR_12, VAR_18, VAR_19, VAR_13, VAR_14,
       &VAR_20);
  FUNC_11(0, "done calling dlmunlock_master: returned %d, "
       "call_ast is %d\n", VAR_17, VAR_20);
 } else {
  VAR_17 = FUNC_10(VAR_12, VAR_18, VAR_19, VAR_13, VAR_14,
       &VAR_20);
  FUNC_11(0, "done calling dlmunlock_remote: returned %d, "
       "call_ast is %d\n", VAR_17, VAR_20);
 }

 if (VAR_17 == VAR_7 ||
     VAR_17 == VAR_4 ||
     VAR_17 == VAR_3 ||
     VAR_17 == VAR_5) {
  FUNC_12(50);

  FUNC_11(0, "retrying unlock due to pending recovery/"
       "migration/in-progress/reconnect\n");
  goto retry;
 }

 if (VAR_20) {
  FUNC_11(0, "calling unlockast(%p, %d)\n", VAR_16, VAR_17);
  if (VAR_21) {






   FUNC_2(VAR_12, ((void*)0));
   FUNC_16(VAR_12->ast_wq,
       FUNC_3(VAR_12, VAR_19));
  }
  (*VAR_15)(VAR_16, VAR_17);
 }

 if (VAR_17 == VAR_2)
  VAR_17 = VAR_6;

 if (VAR_17 == VAR_6) {
  FUNC_11(0, "kicking the thread\n");
  FUNC_2(VAR_12, VAR_18);
 } else
  FUNC_1(VAR_17);

 FUNC_6(VAR_12, VAR_18);
 FUNC_8(VAR_18);
 FUNC_5(VAR_19);

 FUNC_11(0, "returning status=%d!\n", VAR_17);
 return VAR_17;
}
