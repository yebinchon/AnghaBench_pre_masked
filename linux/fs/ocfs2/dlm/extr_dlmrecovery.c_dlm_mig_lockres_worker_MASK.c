
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ extra_ref; scalar_t__ real_master; struct dlm_lock_resource* lockres; } ;
struct TYPE_5__ {TYPE_1__ ml; } ;
struct dlm_work_item {TYPE_2__ u; struct dlm_ctxt* dlm; } ;
struct dlm_migratable_lockres {int flags; int master; } ;
struct TYPE_6__ {int name; int len; } ;
struct dlm_lock_resource {TYPE_3__ lockname; int spinlock; } ;
struct dlm_ctxt {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dlm_ctxt*,struct dlm_lock_resource*,int ) ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*,scalar_t__*) ;
 int FUNC_3 (struct dlm_lock_resource*) ;
 int FUNC_4 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_migratable_lockres*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct dlm_work_item *VAR_3, void *VAR_4)
{
 struct dlm_ctxt *VAR_5;
 struct dlm_migratable_lockres *VAR_6;
 int VAR_7 = 0;
 struct dlm_lock_resource *VAR_8;
 u8 VAR_9;
 u8 VAR_10;

 VAR_5 = VAR_3->dlm;
 VAR_6 = (struct dlm_migratable_lockres *)VAR_4;

 VAR_8 = VAR_3->u.ml.lockres;
 VAR_9 = VAR_3->u.ml.real_master;
 VAR_10 = VAR_3->u.ml.extra_ref;

 if (VAR_9 == VAR_0) {


again:
  VAR_7 = FUNC_2(VAR_5, VAR_8, &VAR_9);
  if (VAR_7 < 0) {
   FUNC_6(0, "dlm_lockres_master_requery ret=%d\n",
      VAR_7);
   goto again;
  }
  if (VAR_9 == VAR_0) {
   FUNC_6(0, "lockres %.*s not claimed.  "
       "this node will take it.\n",
       VAR_8->lockname.len, VAR_8->lockname.name);
  } else {
   FUNC_8(&VAR_8->spinlock);
   FUNC_1(VAR_5, VAR_8);
   FUNC_9(&VAR_8->spinlock);
   FUNC_6(0, "master needs to respond to sender "
      "that node %u still owns %.*s\n",
      VAR_9, VAR_8->lockname.len,
      VAR_8->lockname.name);

   goto leave;
  }
 }

 VAR_7 = FUNC_4(VAR_5, VAR_8, VAR_6);
 if (VAR_7 < 0)
  FUNC_6(0, "dlm_process_recovery_data returned  %d\n", VAR_7);
 else
  FUNC_6(0, "dlm_process_recovery_data succeeded\n");

 if ((VAR_6->flags & (VAR_2|VAR_1)) ==
                    (VAR_2|VAR_1)) {
  VAR_7 = FUNC_0(VAR_5, VAR_8, VAR_6->master);
  if (VAR_7 < 0)
   FUNC_7(VAR_7);
 }

leave:

 if (VAR_8) {
  if (VAR_10)
   FUNC_3(VAR_8);
  FUNC_3(VAR_8);
 }
 FUNC_5(VAR_4);
}
