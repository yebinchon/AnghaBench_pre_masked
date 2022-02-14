
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct o2net_msg {scalar_t__ buf; } ;
struct dlm_master_list_entry {scalar_t__ type; int new_master; int master; scalar_t__ inuse; int mle_refs; int spinlock; int wq; int woken; int response_map; int maybe_map; } ;
struct TYPE_2__ {int name; int len; } ;
struct dlm_lock_resource {int state; int owner; int spinlock; int wq; TYPE_1__ lockname; } ;
struct dlm_ctxt {int node_num; int spinlock; int master_lock; int name; } ;
struct dlm_assert_master {char* name; unsigned int namelen; int node_idx; int flags; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct dlm_lock_resource* FUNC_2 (struct dlm_ctxt*,char*,unsigned int,unsigned int) ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_4 (struct dlm_lock_resource*) ;
 int FUNC_5 (struct dlm_master_list_entry*) ;
 int FUNC_6 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct dlm_ctxt*,struct dlm_lock_resource*,int) ;
 int FUNC_10 (struct dlm_ctxt*,struct dlm_master_list_entry**,char*,unsigned int) ;
 int FUNC_11 (struct dlm_ctxt*) ;
 unsigned int FUNC_12 (char*,unsigned int) ;
 int FUNC_13 (struct dlm_master_list_entry*) ;
 int FUNC_14 (struct dlm_ctxt*) ;
 int FUNC_15 (int ,int,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

int FUNC_21(struct o2net_msg *VAR_16, u32 VAR_17, void *VAR_18,
         void **VAR_19)
{
 struct dlm_ctxt *VAR_20 = VAR_18;
 struct dlm_master_list_entry *VAR_21 = ((void*)0);
 struct dlm_assert_master *VAR_22 = (struct dlm_assert_master *)VAR_16->buf;
 struct dlm_lock_resource *VAR_23 = ((void*)0);
 char *VAR_24;
 unsigned int VAR_25, VAR_26;
 u32 VAR_27;
 int VAR_28 = 0, VAR_29 = 0;
 int VAR_30 = 0;

 if (!FUNC_11(VAR_20))
  return 0;

 VAR_24 = VAR_22->name;
 VAR_25 = VAR_22->namelen;
 VAR_26 = FUNC_12(VAR_24, VAR_25);
 VAR_27 = FUNC_8(VAR_22->flags);

 if (VAR_25 > VAR_4) {
  FUNC_17(VAR_14, "Invalid name length!");
  goto done;
 }

 FUNC_18(&VAR_20->spinlock);

 if (VAR_27)
  FUNC_17(0, "assert_master with flags: %u\n", VAR_27);


 FUNC_18(&VAR_20->master_lock);
 if (!FUNC_10(VAR_20, &VAR_21, VAR_24, VAR_25)) {

  FUNC_17(0, "just got an assert_master from %u, but no "
       "MLE for it! (%.*s)\n", VAR_22->node_idx,
       VAR_25, VAR_24);
 } else {
  int VAR_31 = FUNC_15 (VAR_21->maybe_map, VAR_15, 0);
  if (VAR_31 >= VAR_15) {


   FUNC_17(0, "no bits set in the maybe_map, but %u "
        "is asserting! (%.*s)\n", VAR_22->node_idx,
        VAR_25, VAR_24);
  } else if (VAR_31 != VAR_22->node_idx) {
   if (VAR_27 & VAR_1) {
    FUNC_17(0, "master %u was found, %u should "
         "back off\n", VAR_22->node_idx, VAR_31);
   } else {




    FUNC_17(0, "%u is the lowest node, "
         "%u is asserting. (%.*s)  %u must "
         "have begun after %u won.\n", VAR_31,
         VAR_22->node_idx, VAR_25, VAR_24, VAR_31,
         VAR_22->node_idx);
   }
  }
  if (VAR_21->type == VAR_12) {
   if (VAR_27 & VAR_1) {
    FUNC_17(0, "%s:%.*s: got cleanup assert"
         " from %u for migration\n",
         VAR_20->name, VAR_25, VAR_24,
         VAR_22->node_idx);
   } else if (!(VAR_27 & VAR_0)) {
    FUNC_17(0, "%s:%.*s: got unrelated assert"
         " from %u for migration, ignoring\n",
         VAR_20->name, VAR_25, VAR_24,
         VAR_22->node_idx);
    FUNC_5(VAR_21);
    FUNC_19(&VAR_20->master_lock);
    FUNC_19(&VAR_20->spinlock);
    goto done;
   }
  }
 }
 FUNC_19(&VAR_20->master_lock);



 VAR_23 = FUNC_2(VAR_20, VAR_24, VAR_25, VAR_26);
 if (VAR_23) {
  FUNC_18(&VAR_23->spinlock);
  if (VAR_23->state & VAR_9) {
   FUNC_17(VAR_14, "%u asserting but %.*s is "
        "RECOVERING!\n", VAR_22->node_idx, VAR_25, VAR_24);
   goto kill;
  }
  if (!VAR_21) {
   if (VAR_23->owner != VAR_8 &&
       VAR_23->owner != VAR_22->node_idx) {
    FUNC_17(VAR_14, "DIE! Mastery assert from %u, "
         "but current owner is %u! (%.*s)\n",
         VAR_22->node_idx, VAR_23->owner, VAR_25,
         VAR_24);
    FUNC_4(VAR_23);
    FUNC_0();
   }
  } else if (VAR_21->type != VAR_12) {
   if (VAR_23->owner != VAR_8) {

    if (VAR_23->owner == VAR_22->node_idx) {
     FUNC_17(0, "owner %u re-asserting on "
          "lock %.*s\n", VAR_22->node_idx,
          VAR_25, VAR_24);
     goto ok;
    }
    FUNC_17(VAR_14, "got assert_master from "
         "node %u, but %u is the owner! "
         "(%.*s)\n", VAR_22->node_idx,
         VAR_23->owner, VAR_25, VAR_24);
    goto kill;
   }
   if (!(VAR_23->state & VAR_6)) {
    FUNC_17(VAR_14, "got assert from %u, but lock "
         "with no owner should be "
         "in-progress! (%.*s)\n",
         VAR_22->node_idx,
         VAR_25, VAR_24);
    goto kill;
   }
  } else {

   if (VAR_22->node_idx != VAR_21->new_master) {
    FUNC_17(VAR_14, "got assert from %u, but "
         "new master is %u, and old master "
         "was %u (%.*s)\n",
         VAR_22->node_idx, VAR_21->new_master,
         VAR_21->master, VAR_25, VAR_24);
    goto kill;
   }

  }
ok:
  FUNC_19(&VAR_23->spinlock);
 }



 if (VAR_21) {
  int VAR_32 = 0;
  int VAR_33 = -1;
  int VAR_34, VAR_35 = 0;

  FUNC_18(&VAR_21->spinlock);
  if (VAR_21->type == VAR_11 || VAR_21->type == VAR_12)
   VAR_32 = 1;
  else {



   while ((VAR_33 = FUNC_15 (VAR_21->response_map, VAR_15,
          VAR_33+1)) < VAR_15) {
    if (VAR_33 != VAR_20->node_num && VAR_33 != VAR_22->node_idx) {
     VAR_28 = 1;
     break;
    }
   }
  }
  VAR_21->master = VAR_22->node_idx;
  FUNC_7(&VAR_21->woken, 1);
  FUNC_20(&VAR_21->wq);
  FUNC_19(&VAR_21->spinlock);

  if (VAR_23) {
   int VAR_36 = 0;
   FUNC_18(&VAR_23->spinlock);
   if (VAR_21->type == VAR_12) {
    FUNC_17(0, "finishing off migration of lockres %.*s, "
          "from %u to %u\n",
            VAR_23->lockname.len, VAR_23->lockname.name,
            VAR_20->node_num, VAR_21->new_master);
    VAR_23->state &= ~VAR_7;
    VAR_36 = 1;
    FUNC_9(VAR_20, VAR_23, VAR_21->new_master);
    FUNC_1(VAR_23->state & VAR_5);
   } else {
    FUNC_9(VAR_20, VAR_23, VAR_21->master);
   }
   FUNC_19(&VAR_23->spinlock);
   VAR_29 = 1;
   if (VAR_36)
    FUNC_20(&VAR_23->wq);
  }




  FUNC_18(&VAR_20->master_lock);

  VAR_34 = FUNC_16(&VAR_21->mle_refs);
  if (VAR_21->inuse > 0) {
   if (VAR_32 && VAR_34 < 3)
    VAR_35 = 1;
   else if (!VAR_32 && VAR_34 < 2)
    VAR_35 = 1;
  } else {
   if (VAR_32 && VAR_34 < 2)
    VAR_35 = 1;
   else if (!VAR_32 && VAR_34 < 1)
    VAR_35 = 1;
  }
  if (VAR_35) {
   FUNC_17(VAR_14, "%s:%.*s: got assert master from %u "
        "that will mess up this node, refs=%d, extra=%d, "
        "inuse=%d\n", VAR_20->name, VAR_25, VAR_24,
        VAR_22->node_idx, VAR_34, VAR_32, VAR_21->inuse);
   FUNC_13(VAR_21);
  }
  FUNC_6(VAR_20, VAR_21);
  FUNC_3(VAR_20, VAR_21);
  FUNC_5(VAR_21);
  if (VAR_32) {




   FUNC_5(VAR_21);
  }
  FUNC_19(&VAR_20->master_lock);
 } else if (VAR_23) {
  if (VAR_23->owner != VAR_22->node_idx) {
   FUNC_17(0, "assert_master from %u, but current "
        "owner is %u (%.*s), no mle\n", VAR_22->node_idx,
        VAR_23->owner, VAR_25, VAR_24);
  }
 }
 FUNC_19(&VAR_20->spinlock);

done:
 VAR_30 = 0;
 if (VAR_23) {
  FUNC_18(&VAR_23->spinlock);
  VAR_23->state |= VAR_10;
  FUNC_19(&VAR_23->spinlock);
  *VAR_19 = (void *)VAR_23;
 }
 FUNC_14(VAR_20);
 if (VAR_28) {
  FUNC_17(0, "need to tell master to reassert\n");

  VAR_30 |= VAR_3;
  if (!VAR_29) {
   FUNC_17(VAR_14, "strange, got assert from %u, MASTER "
        "mle present here for %s:%.*s, but no lockres!\n",
        VAR_22->node_idx, VAR_20->name, VAR_25, VAR_24);
  }
 }
 if (VAR_29) {

  VAR_30 |= VAR_2;
  FUNC_17(0, "%s:%.*s: got assert from %u, need a ref\n",
       VAR_20->name, VAR_25, VAR_24, VAR_22->node_idx);
 }
 return VAR_30;

kill:

 FUNC_17(VAR_14, "Bad message received from another node.  Dumping state "
      "and killing the other node now!  This node is OK and can continue.\n");
 FUNC_4(VAR_23);
 FUNC_19(&VAR_23->spinlock);
 FUNC_18(&VAR_20->master_lock);
 if (VAR_21)
  FUNC_5(VAR_21);
 FUNC_19(&VAR_20->master_lock);
 FUNC_19(&VAR_20->spinlock);
 *VAR_19 = (void *)VAR_23;
 FUNC_14(VAR_20);
 return -VAR_13;
}
