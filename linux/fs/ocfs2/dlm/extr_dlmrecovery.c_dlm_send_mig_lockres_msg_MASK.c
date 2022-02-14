
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct dlm_migratable_lockres {int flags; int master; scalar_t__ num_locks; int lockname; int lockname_len; int total_locks; int mig_cookie; } ;
struct TYPE_2__ {int len; int name; } ;
struct dlm_lock_resource {TYPE_1__ lockname; } ;
struct dlm_ctxt {int name; int key; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dlm_migratable_lockres*,int ,int ,int,int ,int,int) ;
 int VAR_6 ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,struct dlm_migratable_lockres*,int ,int,int*) ;
 int FUNC_8 (struct dlm_migratable_lockres*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct dlm_ctxt *VAR_7,
          struct dlm_migratable_lockres *VAR_8,
          u8 VAR_9,
          struct dlm_lock_resource *VAR_10,
          int VAR_11)
{
 u64 VAR_12 = FUNC_3(VAR_8->mig_cookie);
 int VAR_13 = FUNC_2(VAR_8->total_locks);
 int VAR_14 = 0, VAR_15 = 0;
 u8 VAR_16 = VAR_8->flags,
    VAR_17 = VAR_8->master;

 FUNC_1(VAR_8->num_locks > VAR_0);
 if (!VAR_8->num_locks)
  return 0;


 VAR_16 = VAR_8->flags;
 FUNC_1(VAR_11 > VAR_13);
 if (VAR_11 == VAR_13)
  VAR_8->flags |= VAR_2;

 FUNC_5(0, "%s:%.*s: sending mig lockres (%s) to %u\n",
      VAR_7->name, VAR_10->lockname.len, VAR_10->lockname.name,
      VAR_16 & VAR_3 ? "migration" : "recovery",
      VAR_9);


 VAR_14 = FUNC_7(VAR_1, VAR_7->key, VAR_8,
     FUNC_8(VAR_8, VAR_6, VAR_8->num_locks),
     VAR_9, &VAR_15);
 if (VAR_14 < 0) {


  FUNC_5(VAR_5, "%s: res %.*s, Error %d send MIG_LOCKRES to "
       "node %u (%s)\n", VAR_7->name, VAR_8->lockname_len,
       VAR_8->lockname, VAR_14, VAR_9,
       (VAR_16 & VAR_3 ?
        "migration" : "recovery"));
 } else {

  VAR_14 = VAR_15;
  if (VAR_14 < 0) {
   FUNC_6(VAR_14);

   if (VAR_14 == -VAR_4) {
    FUNC_5(VAR_5, "node %u told me to kill "
         "myself!\n", VAR_9);
    FUNC_0();
   }
  }
 }


 FUNC_4(VAR_8, VAR_10->lockname.name,
        VAR_10->lockname.len, VAR_13,
        VAR_12, VAR_16, VAR_17);
 return VAR_14;
}
