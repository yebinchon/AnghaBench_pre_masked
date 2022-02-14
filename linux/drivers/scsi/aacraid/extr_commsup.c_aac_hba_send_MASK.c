
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct fib {int flags; int done; int event_lock; int event_wait; void* callback_data; scalar_t__ callback; scalar_t__ hw_fib_va; struct aac_dev* dev; } ;
struct aac_hba_cmd_req {int request_id; scalar_t__ iu_type; } ;
struct aac_dev {scalar_t__ management_fib_count; int manage_lock; struct fib* fibs; } ;
typedef scalar_t__ fib_callback ;
struct TYPE_2__ {int NativeSent; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct fib*) ;
 TYPE_1__ VAR_14 ;
 int FUNC_3 (struct aac_dev*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int *) ;

int FUNC_9(u8 VAR_15, struct fib *VAR_16, fib_callback VAR_17,
  void *VAR_18)
{
 struct aac_dev *VAR_19 = VAR_16->dev;
 int VAR_20;
 unsigned long VAR_21 = 0;
 unsigned long VAR_22 = 0;
 struct aac_hba_cmd_req *VAR_23 = (struct aac_hba_cmd_req *)
   VAR_16->hw_fib_va;

 VAR_16->flags = (VAR_7 | VAR_8);
 if (VAR_17) {
  VAR_20 = 0;
  VAR_16->callback = VAR_17;
  VAR_16->callback_data = VAR_18;
 } else
  VAR_20 = 1;


 VAR_23->iu_type = VAR_15;

 if (VAR_15 == VAR_12) {

  VAR_23->request_id =
   FUNC_4((((u32)(VAR_16 - VAR_19->fibs)) << 2) + 1);
  VAR_16->flags |= VAR_9;
 } else if (VAR_15 != VAR_13)
  return -VAR_4;


 if (VAR_20) {
  FUNC_5(&VAR_19->manage_lock, VAR_22);
  if (VAR_19->management_fib_count >= VAR_0) {
   FUNC_6(&VAR_19->manage_lock, VAR_22);
   return -VAR_1;
  }
  VAR_19->management_fib_count++;
  FUNC_6(&VAR_19->manage_lock, VAR_22);
  FUNC_5(&VAR_16->event_lock, VAR_21);
 }

 if (FUNC_2(VAR_16) != 0) {
  if (VAR_20) {
   FUNC_6(&VAR_16->event_lock, VAR_21);
   FUNC_5(&VAR_19->manage_lock, VAR_22);
   VAR_19->management_fib_count--;
   FUNC_6(&VAR_19->manage_lock, VAR_22);
  }
  return -VAR_1;
 }
 FUNC_0(VAR_14.NativeSent);

 if (VAR_20) {

  FUNC_6(&VAR_16->event_lock, VAR_21);

  if (FUNC_7(FUNC_3(VAR_19)))
   return -VAR_2;

  VAR_16->flags |= VAR_11;
  if (FUNC_8(&VAR_16->event_wait))
   VAR_16->done = 2;
  VAR_16->flags &= ~(VAR_11);

  FUNC_5(&VAR_16->event_lock, VAR_21);
  if ((VAR_16->done == 0) || (VAR_16->done == 2)) {
   VAR_16->done = 2;
   FUNC_6(&VAR_16->event_lock, VAR_21);
   return -VAR_5;
  }
  FUNC_6(&VAR_16->event_lock, VAR_21);
  FUNC_1(VAR_16->done == 0);

  if (FUNC_7(VAR_16->flags & VAR_10))
   return -VAR_6;

  return 0;
 }

 return -VAR_3;
}
