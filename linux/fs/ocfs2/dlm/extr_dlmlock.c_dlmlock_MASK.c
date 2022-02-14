
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dlm_lockstatus {int status; int flags; struct dlm_lock* lockid; } ;
struct dlm_lock_resource {scalar_t__ owner; int spinlock; } ;
struct dlm_lock {void* astdata; struct dlm_lockstatus* lksb; int * bast; int * ast; struct dlm_lock_resource* lockres; } ;
struct dlm_ctxt {scalar_t__ node_num; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;
typedef int dlm_bastlockfunc_t ;
typedef int dlm_astlockfunc_t ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int) ;
 struct dlm_lock_resource* FUNC_1 (struct dlm_ctxt*,char const*,int,int) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_5 (struct dlm_lock*,struct dlm_lock_resource*) ;
 int FUNC_6 (struct dlm_lock*) ;
 int FUNC_7 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_8 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_9 (struct dlm_lock_resource*) ;
 int FUNC_10 (struct dlm_lock_resource*) ;
 struct dlm_lock* FUNC_11 (int,scalar_t__,int ,struct dlm_lockstatus*) ;
 int FUNC_12 (struct dlm_ctxt*,scalar_t__,int ) ;
 int FUNC_13 (struct dlm_ctxt*) ;
 int FUNC_14 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,int,int) ;
 int FUNC_15 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,int,int) ;
 int FUNC_16 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,int) ;
 int FUNC_17 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,int) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

enum dlm_status FUNC_22(struct dlm_ctxt *VAR_22, int VAR_23,
   struct dlm_lockstatus *VAR_24, int VAR_25,
   const char *VAR_26, int VAR_27, dlm_astlockfunc_t *VAR_28,
   void *VAR_29, dlm_bastlockfunc_t *VAR_30)
{
 enum dlm_status VAR_31;
 struct dlm_lock_resource *VAR_32 = ((void*)0);
 struct dlm_lock *VAR_33 = ((void*)0);
 int VAR_34 = 0, VAR_35 = 0;




 if (!VAR_24) {
  FUNC_0(VAR_0);
  return VAR_0;
 }

 VAR_31 = VAR_1;
 if (VAR_23 != VAR_13 && VAR_23 != VAR_17 && VAR_23 != VAR_16) {
  FUNC_0(VAR_31);
  goto error;
 }

 if (VAR_25 & ~VAR_20) {
  FUNC_0(VAR_31);
  goto error;
 }

 VAR_34 = (VAR_25 & VAR_12);
 VAR_35 = (VAR_25 & VAR_18);

 if (VAR_35 &&
     (!FUNC_3(VAR_26, VAR_27) || VAR_34) ) {
  FUNC_0(VAR_31);
  goto error;
 }
 if (VAR_34 && (VAR_25 & VAR_15)) {
  FUNC_18(VAR_21, "strange LOCAL convert request!\n");
  goto error;
 }

 if (VAR_34) {



  VAR_33 = VAR_24->lockid;
  if (!VAR_33) {
   FUNC_18(VAR_21, "NULL lock pointer in convert "
        "request\n");
   goto error;
  }

  VAR_32 = VAR_33->lockres;
  if (!VAR_32) {
   FUNC_18(VAR_21, "NULL lockres pointer in convert "
        "request\n");
   goto error;
  }
  FUNC_9(VAR_32);






  if (VAR_33->lksb != VAR_24 || VAR_33->ast != VAR_28 ||
      VAR_33->bast != VAR_30 || VAR_33->astdata != VAR_29) {
   VAR_31 = VAR_0;
   FUNC_18(VAR_21, "new args:  lksb=%p, ast=%p, bast=%p, "
        "astdata=%p\n", VAR_24, VAR_28, VAR_30, VAR_29);
   FUNC_18(VAR_21, "orig args: lksb=%p, ast=%p, bast=%p, "
        "astdata=%p\n", VAR_33->lksb, VAR_33->ast,
        VAR_33->bast, VAR_33->astdata);
   goto error;
  }
retry_convert:
  FUNC_13(VAR_22);

  if (VAR_32->owner == VAR_22->node_num)
   VAR_31 = FUNC_14(VAR_22, VAR_32, VAR_33, VAR_25, VAR_23);
  else
   VAR_31 = FUNC_15(VAR_22, VAR_32, VAR_33, VAR_25, VAR_23);
  if (VAR_31 == VAR_11 || VAR_31 == VAR_7 ||
      VAR_31 == VAR_2) {




   FUNC_18(0, "retrying convert with migration/recovery/"
        "in-progress\n");
   FUNC_19(100);
   goto retry_convert;
  }
 } else {
  u64 VAR_36;


  VAR_31 = VAR_0;
  if (!VAR_26) {
   FUNC_0(VAR_31);
   goto error;
  }

  VAR_31 = VAR_3;
  if (VAR_27 > VAR_6 || VAR_27 < 1) {
   FUNC_0(VAR_31);
   goto error;
  }

  FUNC_2(VAR_22->node_num, &VAR_36);
  VAR_33 = FUNC_11(VAR_23, VAR_22->node_num, VAR_36, VAR_24);
  if (!VAR_33) {
   FUNC_0(VAR_31);
   goto error;
  }

  if (!VAR_35)
   FUNC_13(VAR_22);


  VAR_32 = FUNC_1(VAR_22, VAR_26, VAR_27, VAR_25);
  if (!VAR_32) {
   VAR_31 = VAR_4;
   FUNC_0(VAR_31);
   goto error;
  }

  FUNC_18(0, "type=%d, flags = 0x%x\n", VAR_23, VAR_25);
  FUNC_18(0, "creating lock: lock=%p res=%p\n", VAR_33, VAR_32);

  FUNC_5(VAR_33, VAR_32);
  VAR_33->ast = VAR_28;
  VAR_33->bast = VAR_30;
  VAR_33->astdata = VAR_29;

retry_lock:
  if (VAR_25 & VAR_19) {
   FUNC_18(0, "LKM_VALBLK passed by caller\n");



   if (VAR_23 < VAR_17)
    VAR_25 &= ~VAR_19;
   else {
    VAR_25 |= VAR_14;
    VAR_33->lksb->flags |= VAR_5;
   }
  }

  if (VAR_32->owner == VAR_22->node_num)
   VAR_31 = FUNC_16(VAR_22, VAR_32, VAR_33, VAR_25);
  else
   VAR_31 = FUNC_17(VAR_22, VAR_32, VAR_33, VAR_25);

  if (VAR_31 == VAR_11 || VAR_31 == VAR_7 ||
      VAR_31 == VAR_2) {
   FUNC_19(100);
   if (VAR_35) {
    if (VAR_31 != VAR_11)
     goto retry_lock;



    FUNC_12(VAR_22, VAR_32->owner,
      VAR_8);
   } else {
    FUNC_13(VAR_22);
    goto retry_lock;
   }
  }


  FUNC_20(&VAR_32->spinlock);
  FUNC_8(VAR_22, VAR_32);
  FUNC_21(&VAR_32->spinlock);

  FUNC_7(VAR_22, VAR_32);
  FUNC_4(VAR_22, VAR_32);

  if (VAR_31 != VAR_9) {
   VAR_33->lksb->flags &= ~VAR_5;
   if (VAR_31 != VAR_10)
    FUNC_0(VAR_31);
   goto error;
  }
 }

error:
 if (VAR_31 != VAR_9) {
  if (VAR_33 && !VAR_34)
   FUNC_6(VAR_33);

  VAR_24->status = VAR_31;
 }



 if (VAR_32)
  FUNC_10(VAR_32);

 return VAR_31;
}
