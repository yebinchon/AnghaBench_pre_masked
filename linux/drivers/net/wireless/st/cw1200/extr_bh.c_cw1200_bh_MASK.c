
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ input_buffers; } ;
struct cw1200_common {scalar_t__ hw_bufs_used; int device_can_sleep; int hw_type; int bh_error; int hwbus_priv; TYPE_2__* hwbus_ops; TYPE_1__ wsm_caps; int bh_rx; int bh_evt_wq; int bh_suspend; TYPE_3__* hw; int bh_wq; scalar_t__ powersave_enabled; int recent_scan; int pending_frame_id; int * tx_queue; int bh_term; int bh_tx; } ;
typedef int dummy ;
struct TYPE_6__ {int wiphy; } ;
struct TYPE_5__ {int (* unlock ) (int ) ;int (* lock ) (int ) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_1 (struct cw1200_common*,int) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (struct cw1200_common*,int*) ;
 int FUNC_7 (struct cw1200_common*,int*,int*) ;
 int FUNC_8 (struct cw1200_common*,int*,int*) ;
 scalar_t__ FUNC_9 (int *,unsigned long*,int ) ;
 int FUNC_10 (struct cw1200_common*,int ,int *,int) ;
 int FUNC_11 (struct cw1200_common*,int ,int ) ;
 unsigned long VAR_10 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 long FUNC_18 (int ,int) ;
 long FUNC_19 (int ,int ,long) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,char*,long) ;
 int FUNC_22 (int ,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_23(void *VAR_11)
{
 struct cw1200_common *VAR_12 = VAR_11;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 u16 VAR_17 = 0;
 int VAR_18;
 int VAR_19 = 0;
 int VAR_20;
 long VAR_21;
 u32 VAR_22;
 int VAR_23;

 for (;;) {
  if (!VAR_12->hw_bufs_used &&
      VAR_12->powersave_enabled &&
      !VAR_12->device_can_sleep &&
      !FUNC_3(&VAR_12->recent_scan)) {
   VAR_21 = 1 * VAR_4;
   FUNC_12("[BH] Device wakedown. No data.\n");
   FUNC_11(VAR_12, VAR_7, 0);
   VAR_12->device_can_sleep = 1;
  } else if (VAR_12->hw_bufs_used) {

   VAR_21 = 1 * VAR_4;
  } else {
   VAR_21 = VAR_5;
  }


  if ((VAR_12->hw_type != -1) &&
      (FUNC_3(&VAR_12->bh_rx) == 0) &&
      (FUNC_3(&VAR_12->bh_tx) == 0))
   FUNC_10(VAR_12, VAR_6,
     &VAR_22, sizeof(VAR_22));

  FUNC_12("[BH] waiting ...\n");
  VAR_21 = FUNC_19(VAR_12->bh_wq, ({
    VAR_13 = FUNC_5(&VAR_12->bh_rx, 0);
    VAR_14 = FUNC_5(&VAR_12->bh_tx, 0);
    VAR_15 = FUNC_5(&VAR_12->bh_term, 0);
    VAR_16 = VAR_19 ?
     0 : FUNC_3(&VAR_12->bh_suspend);
    (VAR_13 || VAR_14 || VAR_15 || VAR_16 || VAR_12->bh_error);
   }), VAR_21);

  FUNC_12("[BH] - rx: %d, tx: %d, term: %d, bh_err: %d, suspend: %d, status: %ld\n",
    VAR_13, VAR_14, VAR_15, VAR_16, VAR_12->bh_error, VAR_21);


  if ((VAR_21 < 0 && VAR_21 != -VAR_3) ||
      VAR_15 || VAR_12->bh_error) {
   break;
  }
  if (!VAR_21) {
   unsigned long VAR_24 = VAR_10;
   long VAR_25;
   int VAR_26 = 0;
   int VAR_27;


   if (VAR_12->hw_bufs_used && (!VAR_13 || !VAR_14)) {
    FUNC_22(VAR_12->hw->wiphy,
        "Missed interrupt? (%d frames outstanding)\n",
        VAR_12->hw_bufs_used);
    VAR_13 = 1;


    for (VAR_27 = 0; VAR_27 < 4; ++VAR_27)
     VAR_26 += FUNC_9(
      &VAR_12->tx_queue[VAR_27],
      &VAR_24,
      VAR_12->pending_frame_id);





    VAR_25 = VAR_24 +
     VAR_9 +
     1 * VAR_4 -
     VAR_10;


    if (VAR_26 && VAR_25 < 0) {
     FUNC_22(VAR_12->hw->wiphy,
         "Timeout waiting for TX confirm (%d/%d pending, %ld vs %lu).\n",
         VAR_12->hw_bufs_used, VAR_26,
         VAR_24, VAR_10);
     break;
    }
   } else if (!VAR_12->device_can_sleep &&
       !FUNC_3(&VAR_12->recent_scan)) {
    FUNC_12("[BH] Device wakedown. Timeout.\n");
    FUNC_11(VAR_12,
          VAR_7, 0);
    VAR_12->device_can_sleep = 1;
   }
   goto done;
  } else if (VAR_16) {
   FUNC_12("[BH] Device suspend.\n");
   if (VAR_12->powersave_enabled) {
    FUNC_12("[BH] Device wakedown. Suspend.\n");
    FUNC_11(VAR_12,
          VAR_7, 0);
    VAR_12->device_can_sleep = 1;
   }

   FUNC_4(&VAR_12->bh_suspend, VAR_2);
   FUNC_20(&VAR_12->bh_evt_wq);
   VAR_21 = FUNC_18(VAR_12->bh_wq,
         VAR_0 == FUNC_3(&VAR_12->bh_suspend));
   if (VAR_21 < 0) {
    FUNC_21(VAR_12->hw->wiphy,
       "Failed to wait for resume: %ld.\n",
       VAR_21);
    break;
   }
   FUNC_12("[BH] Device resume.\n");
   FUNC_4(&VAR_12->bh_suspend, VAR_1);
   FUNC_20(&VAR_12->bh_evt_wq);
   FUNC_2(1, &VAR_12->bh_rx);
   goto done;
  }

 rx:
  VAR_14 += VAR_19;
  VAR_19 = 0;

  if (FUNC_6(VAR_12, &VAR_17))
   break;


  if (VAR_17 & VAR_8) {
   VAR_23 = FUNC_7(VAR_12, &VAR_17, &VAR_14);
   if (VAR_23 < 0)
    break;

   if (VAR_17 & VAR_8) {
    VAR_23 = FUNC_7(VAR_12, &VAR_17, &VAR_14);
    if (VAR_23 < 0)
     break;
   }
  }

 tx:
  if (VAR_14) {
   VAR_14 = 0;

   FUNC_0(VAR_12->hw_bufs_used > VAR_12->wsm_caps.input_buffers);
   VAR_20 = VAR_12->wsm_caps.input_buffers - VAR_12->hw_bufs_used;
   VAR_18 = VAR_20 > 0;

   if (!VAR_18) {



    VAR_19 = VAR_14;
    goto done_rx;
   }
   VAR_23 = FUNC_8(VAR_12, &VAR_19, &VAR_20);
   if (VAR_23 < 0)
    break;
   if (VAR_23 > 0)
    VAR_14 = VAR_23;


   if (FUNC_6(VAR_12, &VAR_17))
    break;
  }

 done_rx:
  if (VAR_12->bh_error)
   break;
  if (VAR_17 & VAR_8)
   goto rx;
  if (VAR_14)
   goto tx;

 done:

  VAR_12->hwbus_ops->lock(VAR_12->hwbus_priv);
  FUNC_1(VAR_12, 1);
  VAR_12->hwbus_ops->unlock(VAR_12->hwbus_priv);
 }


 VAR_12->hwbus_ops->lock(VAR_12->hwbus_priv);
 FUNC_1(VAR_12, 0);
 VAR_12->hwbus_ops->unlock(VAR_12->hwbus_priv);

 if (!VAR_15) {
  FUNC_13("[BH] Fatal error, exiting.\n");
  VAR_12->bh_error = 1;

 }
 return 0;
}
