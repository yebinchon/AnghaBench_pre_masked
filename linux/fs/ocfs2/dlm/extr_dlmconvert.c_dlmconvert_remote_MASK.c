
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int len; int name; } ;
struct dlm_lock_resource {int state; int wq; int spinlock; TYPE_3__ lockname; int converting; } ;
struct TYPE_4__ {int type; int convert_type; int cookie; } ;
struct dlm_lock {int convert_pending; TYPE_2__* lksb; TYPE_1__ ml; int list; } ;
struct dlm_ctxt {int name; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;
struct TYPE_5__ {int flags; } ;


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
 int FUNC_0 (struct dlm_lock_resource*) ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dlm_lock_resource*,struct dlm_lock*) ;
 int FUNC_7 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,int,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

enum dlm_status FUNC_13(struct dlm_ctxt *VAR_15,
      struct dlm_lock_resource *VAR_16,
      struct dlm_lock *VAR_17, int VAR_18, int VAR_19)
{
 enum dlm_status VAR_20;

 FUNC_9(0, "type=%d, convert_type=%d, busy=%d\n", VAR_17->ml.type,
      VAR_17->ml.convert_type, VAR_16->state & VAR_3);

 FUNC_10(&VAR_16->spinlock);
 if (VAR_16->state & VAR_4) {
  FUNC_9(0, "bailing out early since res is RECOVERING "
       "on secondary queue\n");

  VAR_20 = VAR_7;
  goto bail;
 }

 FUNC_1(VAR_16);

 if (VAR_17->ml.convert_type != VAR_10) {
  FUNC_0(VAR_16);
  FUNC_9(VAR_14, "converting a remote lock that is already "
       "converting! (cookie=%u:%llu, conv=%d)\n",
       FUNC_4(FUNC_2(VAR_17->ml.cookie)),
       FUNC_5(FUNC_2(VAR_17->ml.cookie)),
       VAR_17->ml.convert_type);
  VAR_20 = VAR_0;
  goto bail;
 }

 if (VAR_17->ml.type == VAR_19 && VAR_17->ml.convert_type == VAR_10) {
  FUNC_9(0, "last convert request returned DLM_RECOVERING, but "
       "owner has already queued and sent ast to me. res %.*s, "
       "(cookie=%u:%llu, type=%d, conv=%d)\n",
       VAR_16->lockname.len, VAR_16->lockname.name,
       FUNC_4(FUNC_2(VAR_17->ml.cookie)),
       FUNC_5(FUNC_2(VAR_17->ml.cookie)),
       VAR_17->ml.type, VAR_17->ml.convert_type);
  VAR_20 = VAR_5;
  goto bail;
 }

 VAR_16->state |= VAR_3;


 FUNC_8(&VAR_17->list, &VAR_16->converting);
 VAR_17->convert_pending = 1;
 VAR_17->ml.convert_type = VAR_19;

 if (VAR_18 & VAR_13) {
  if (VAR_17->ml.type == VAR_8) {
   VAR_18 |= VAR_12;
   VAR_17->lksb->flags |= VAR_2;
  } else {
   if (VAR_17->ml.convert_type == VAR_11)
    VAR_18 &= ~VAR_13;
   else {
    VAR_18 |= VAR_9;
    VAR_17->lksb->flags |= VAR_1;
   }
  }
 }
 FUNC_11(&VAR_16->spinlock);



 VAR_20 = FUNC_7(VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);

 FUNC_10(&VAR_16->spinlock);
 VAR_16->state &= ~VAR_3;




 if (VAR_20 != VAR_5) {
  if (VAR_20 != VAR_6)
   FUNC_3(VAR_20);
  FUNC_6(VAR_16, VAR_17);
 } else if (!VAR_17->convert_pending) {
  FUNC_9(0, "%s: res %.*s, owner died and lock has been moved back "
    "to granted list, retry convert.\n",
    VAR_15->name, VAR_16->lockname.len, VAR_16->lockname.name);
  VAR_20 = VAR_7;
 }

 VAR_17->convert_pending = 0;
bail:
 FUNC_11(&VAR_16->spinlock);



 FUNC_12(&VAR_16->wq);

 return VAR_20;
}
