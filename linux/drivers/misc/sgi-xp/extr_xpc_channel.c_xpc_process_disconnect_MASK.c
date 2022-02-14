
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int* flags; } ;
struct xpc_partition {scalar_t__ act_state; int chctl_lock; TYPE_1__ chctl; int nchannels_active; } ;
struct xpc_channel {size_t partid; int flags; size_t number; int delayed_chctl_flags; int wdisconnect_wait; int reason; scalar_t__ kthreads_idle_limit; scalar_t__ kthreads_assigned_limit; scalar_t__ remote_nentries; scalar_t__ local_nentries; scalar_t__ entry_size; int * key; int * func; int n_to_notify; int lock; int references; int kthreads_assigned; } ;
struct TYPE_4__ {int (* teardown_msg_structures ) (struct xpc_channel*) ;int (* notify_senders_of_disconnect ) (struct xpc_channel*) ;int (* send_chctl_closereply ) (struct xpc_channel*,unsigned long*) ;scalar_t__ (* partition_engaged ) (size_t) ;} ;


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
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,size_t,size_t,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (size_t) ;
 int FUNC_11 (struct xpc_channel*,unsigned long*) ;
 int FUNC_12 (struct xpc_channel*) ;
 int FUNC_13 (struct xpc_channel*) ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (struct xpc_channel*,int ) ;
 struct xpc_partition* VAR_14 ;

__attribute__((used)) static void
FUNC_15(struct xpc_channel *VAR_15, unsigned long *VAR_16)
{
 struct xpc_partition *VAR_17 = &VAR_14[VAR_15->partid];
 u32 VAR_18 = (VAR_15->flags & VAR_8);

 FUNC_5(&VAR_15->lock);

 if (!(VAR_15->flags & VAR_4))
  return;

 FUNC_0(!(VAR_15->flags & VAR_1));



 if (FUNC_2(&VAR_15->kthreads_assigned) > 0 ||
     FUNC_2(&VAR_15->references) > 0) {
  return;
 }
 FUNC_0((VAR_15->flags & VAR_2) &&
  !(VAR_15->flags & VAR_5));

 if (VAR_17->act_state == VAR_10) {

  if (VAR_12.partition_engaged(VAR_15->partid))
   return;

 } else {



  if (!(VAR_15->flags & VAR_7))
   return;

  if (!(VAR_15->flags & VAR_0)) {
   VAR_15->flags |= VAR_0;
   VAR_12.send_chctl_closereply(VAR_15, VAR_16);
  }

  if (!(VAR_15->flags & VAR_6))
   return;
 }


 if (FUNC_2(&VAR_15->n_to_notify) > 0) {

  VAR_12.notify_senders_of_disconnect(VAR_15);
 }



 if (VAR_15->flags & VAR_5) {
  FUNC_9(&VAR_15->lock, *VAR_16);
  FUNC_14(VAR_15, VAR_11);
  FUNC_7(&VAR_15->lock, *VAR_16);
 }

 FUNC_0(FUNC_2(&VAR_15->n_to_notify) != 0);


 VAR_12.teardown_msg_structures(VAR_15);

 VAR_15->func = ((void*)0);
 VAR_15->key = ((void*)0);
 VAR_15->entry_size = 0;
 VAR_15->local_nentries = 0;
 VAR_15->remote_nentries = 0;
 VAR_15->kthreads_assigned_limit = 0;
 VAR_15->kthreads_idle_limit = 0;







 VAR_15->flags = (VAR_3 | (VAR_15->flags & VAR_9));

 FUNC_1(&VAR_17->nchannels_active);

 if (VAR_18) {
  FUNC_4(VAR_13, "channel %d to partition %d disconnected, "
    "reason=%d\n", VAR_15->number, VAR_15->partid, VAR_15->reason);
 }

 if (VAR_15->flags & VAR_9) {

  FUNC_3(&VAR_15->wdisconnect_wait);
 } else if (VAR_15->delayed_chctl_flags) {
  if (VAR_17->act_state != VAR_10) {

   FUNC_6(&VAR_17->chctl_lock);
   VAR_17->chctl.flags[VAR_15->number] |=
       VAR_15->delayed_chctl_flags;
   FUNC_8(&VAR_17->chctl_lock);
  }
  VAR_15->delayed_chctl_flags = 0;
 }
}
