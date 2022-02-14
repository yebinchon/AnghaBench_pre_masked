
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int XferState; scalar_t__ Command; } ;
struct hw_fib {TYPE_3__ header; scalar_t__ data; } ;
struct fib {int flags; int done; int event_lock; int event_wait; int callback_data; int (* callback ) (int ,struct fib*) ;struct hw_fib* hw_fib_va; } ;
struct aac_queue {int * lock; struct aac_dev* dev; } ;
struct aac_entry {int addr; } ;
struct aac_dev {int manage_lock; int management_fib_count; TYPE_2__* queues; struct fib* fibs; } ;
typedef int __le32 ;
struct TYPE_8__ {int peak_fibs; int zero_fibs; int NormalRecved; int AsyncRecved; int NoResponseRecved; int FibRecved; } ;
struct TYPE_6__ {TYPE_1__* queue; } ;
struct TYPE_5__ {int numpending; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;
 int FUNC_1 (struct aac_dev*,struct aac_queue*,int ) ;
 scalar_t__ FUNC_2 (struct aac_dev*,struct aac_queue*,struct aac_entry**) ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (struct fib*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,struct fib*) ;
 scalar_t__ FUNC_13 (int) ;

unsigned int FUNC_14(struct aac_queue * VAR_10)
{
 struct aac_dev * VAR_11 = VAR_10->dev;
 struct aac_entry *VAR_12;
 struct hw_fib * VAR_13;
 struct fib * VAR_14;
 int VAR_15 = 0;
 unsigned long VAR_16, VAR_17;

 FUNC_10(VAR_10->lock, VAR_16);






 while(FUNC_2(VAR_11, VAR_10, &VAR_12))
 {
  int VAR_18;
  u32 VAR_19 = FUNC_9(VAR_12->addr);
  VAR_18 = VAR_19 & 0x01;
  VAR_14 = &VAR_11->fibs[VAR_19 >> 2];
  VAR_13 = VAR_14->hw_fib_va;

  FUNC_1(VAR_11, VAR_10, VAR_5);
  FUNC_5(&VAR_11->queues->queue[VAR_0].numpending);

  if (FUNC_13(VAR_14->flags & VAR_4)) {
   FUNC_11(VAR_10->lock, VAR_16);
   FUNC_3(VAR_14);
   FUNC_4(VAR_14);
   FUNC_10(VAR_10->lock, VAR_16);
   continue;
  }
  FUNC_11(VAR_10->lock, VAR_16);

  if (VAR_18) {



   *(__le32 *)VAR_13->data = FUNC_8(VAR_8);
   VAR_13->header.XferState |= FUNC_8(VAR_1);
   VAR_14->flags |= VAR_3;
  }

  FUNC_0(VAR_9.FibRecved);

  if (VAR_13->header.Command == FUNC_7(VAR_7))
  {
   __le32 *VAR_20 = (__le32 *)VAR_13->data;
   if (*VAR_20 & FUNC_8(0xffff0000))
    *VAR_20 = FUNC_8(VAR_8);
  }
  if (VAR_13->header.XferState & FUNC_8(VAR_6 | VAR_2))
  {
          if (VAR_13->header.XferState & FUNC_8(VAR_6))
    FUNC_0(VAR_9.NoResponseRecved);
   else
    FUNC_0(VAR_9.AsyncRecved);




   VAR_14->callback(VAR_14->callback_data, VAR_14);
  } else {
   unsigned long VAR_21;
   FUNC_10(&VAR_14->event_lock, VAR_21);
   if (!VAR_14->done) {
    VAR_14->done = 1;
    FUNC_6(&VAR_14->event_wait);
   }
   FUNC_11(&VAR_14->event_lock, VAR_21);

   FUNC_10(&VAR_11->manage_lock, VAR_17);
   VAR_11->management_fib_count--;
   FUNC_11(&VAR_11->manage_lock, VAR_17);

   FUNC_0(VAR_9.NormalRecved);
   if (VAR_14->done == 2) {
    FUNC_10(&VAR_14->event_lock, VAR_21);
    VAR_14->done = 0;
    FUNC_11(&VAR_14->event_lock, VAR_21);
    FUNC_3(VAR_14);
    FUNC_4(VAR_14);
   }
  }
  VAR_15++;
  FUNC_10(VAR_10->lock, VAR_16);
 }

 if (VAR_15 > VAR_9.peak_fibs)
  VAR_9.peak_fibs = VAR_15;
 if (VAR_15 == 0)
  VAR_9.zero_fibs++;

 FUNC_11(VAR_10->lock, VAR_16);
 return 0;
}
