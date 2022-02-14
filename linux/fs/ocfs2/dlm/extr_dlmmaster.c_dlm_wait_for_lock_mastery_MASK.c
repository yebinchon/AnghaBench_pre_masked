
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct dlm_master_list_entry {scalar_t__ master; scalar_t__ type; int vote_map; int woken; int wq; int spinlock; int maybe_map; int response_map; int node_map; } ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ name; } ;
struct dlm_lock_resource {scalar_t__ owner; int spinlock; TYPE_1__ lockname; } ;
struct dlm_ctxt {scalar_t__ name; int node_num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*,scalar_t__) ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_lock_resource*,int ,int ) ;
 int FUNC_4 (struct dlm_lock_resource*,struct dlm_master_list_entry*,int) ;
 int FUNC_5 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_master_list_entry*,int) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,char*,scalar_t__,...) ;
 int FUNC_9 (int) ;
 unsigned long FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_15(struct dlm_ctxt *VAR_5,
         struct dlm_lock_resource *VAR_6,
         struct dlm_master_list_entry *VAR_7,
         int *VAR_8)
{
 u8 VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;

recheck:
 VAR_10 = 0;
 VAR_14 = 0;


 FUNC_12(&VAR_6->spinlock);
 if (VAR_6->owner != VAR_0) {
  FUNC_8(0, "%s:%.*s: owner is suddenly %u\n", VAR_5->name,
       VAR_6->lockname.len, VAR_6->lockname.name, VAR_6->owner);
  FUNC_13(&VAR_6->spinlock);


  if (VAR_6->owner != VAR_5->node_num) {
   VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_6->owner);
   if (VAR_10 < 0) {

    FUNC_8(VAR_3, "link to %u went down?: %d\n", VAR_6->owner, VAR_10);
    FUNC_11(500);
    goto recheck;
   }
  }
  VAR_10 = 0;
  goto leave;
 }
 FUNC_13(&VAR_6->spinlock);

 FUNC_12(&VAR_7->spinlock);
 VAR_9 = VAR_7->master;
 VAR_12 = (FUNC_7(VAR_7->vote_map, VAR_7->node_map,
         sizeof(VAR_7->vote_map)) != 0);
 VAR_13 = (FUNC_7(VAR_7->vote_map, VAR_7->response_map,
        sizeof(VAR_7->vote_map)) == 0);


 if (VAR_12) {
  int VAR_16;
  FUNC_8(0, "%s: %.*s: node map changed, restarting\n",
       VAR_5->name, VAR_6->lockname.len, VAR_6->lockname.name);
  VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_7, *VAR_8);
  VAR_16 = (VAR_7->type == VAR_2);
  if ((*VAR_8 && !VAR_16) || (!*VAR_8 && VAR_16)) {
   FUNC_8(0, "%s:%.*s: status change: old=%d new=%d\n",
        VAR_5->name, VAR_6->lockname.len, VAR_6->lockname.name,
        *VAR_8, VAR_16);
   *VAR_8 = VAR_16;
  }
  FUNC_13(&VAR_7->spinlock);
  if (VAR_10 < 0) {
   FUNC_9(VAR_10);
   goto leave;
  }
  FUNC_8(0, "%s:%.*s: restart lock mastery succeeded, "
       "rechecking now\n", VAR_5->name, VAR_6->lockname.len,
       VAR_6->lockname.name);
  goto recheck;
 } else {
  if (!VAR_13) {
   FUNC_8(0, "map not changed and voting not done "
        "for %s:%.*s\n", VAR_5->name, VAR_6->lockname.len,
        VAR_6->lockname.name);
  }
 }

 if (VAR_9 != VAR_4) {


  VAR_15 = 0;
 } else {
  VAR_15 = 1;

  if (VAR_13 && !*VAR_8) {
   VAR_11 = FUNC_6(VAR_7->maybe_map, VAR_4, 0);
   if (VAR_5->node_num <= VAR_11) {



    VAR_7->master = VAR_5->node_num;


    VAR_14 = 1;
    VAR_15 = 0;
   }


  }
 }

 FUNC_13(&VAR_7->spinlock);


 if (VAR_15) {
  unsigned long VAR_17 = FUNC_10(VAR_1);
  FUNC_1(&VAR_7->woken, 0);
  (void)FUNC_14(VAR_7->wq,
      (FUNC_0(&VAR_7->woken) == 1),
      VAR_17);
  if (VAR_6->owner == VAR_4) {
   FUNC_8(0, "%s:%.*s: waiting again\n", VAR_5->name,
        VAR_6->lockname.len, VAR_6->lockname.name);
   goto recheck;
  }
  FUNC_8(0, "done waiting, master is %u\n", VAR_6->owner);
  VAR_10 = 0;
  goto leave;
 }

 VAR_10 = 0;
 if (VAR_14) {
  VAR_9 = VAR_5->node_num;
  FUNC_8(0, "about to master %.*s here, this=%u\n",
       VAR_6->lockname.len, VAR_6->lockname.name, VAR_9);
  VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7->vote_map, 0);
  if (VAR_10) {





   FUNC_9(VAR_10);
  }


  VAR_10 = 0;
 }


 FUNC_12(&VAR_6->spinlock);


 FUNC_2(VAR_5, VAR_6, VAR_9);
 FUNC_13(&VAR_6->spinlock);

leave:
 return VAR_10;
}
