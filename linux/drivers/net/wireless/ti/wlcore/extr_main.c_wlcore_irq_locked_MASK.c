
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wl1271 {int irq_flags; scalar_t__ state; int watchdog_recovery; int dev; int deferred_rx_queue; int deferred_tx_queue; int wl_lock; int flags; TYPE_1__* fw_status; } ;
struct TYPE_3__ {int intr; } ;


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
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct wl1271*,int) ;
 int FUNC_15 (struct wl1271*) ;
 scalar_t__ FUNC_16 (struct wl1271*) ;
 int FUNC_17 (struct wl1271*,TYPE_1__*) ;
 int FUNC_18 (struct wl1271*) ;
 int FUNC_19 (struct wl1271*) ;
 int FUNC_20 (struct wl1271*,TYPE_1__*) ;
 int FUNC_21 (struct wl1271*) ;

__attribute__((used)) static int FUNC_22(struct wl1271 *VAR_17)
{
 int VAR_18 = 0;
 u32 VAR_19;
 int VAR_20 = VAR_14;
 bool VAR_21 = 0;
 unsigned int VAR_22;
 unsigned long VAR_23;





 if (VAR_17->irq_flags & (VAR_3 | VAR_2))
  VAR_20 = 1;

 FUNC_12(VAR_0, "IRQ work");

 if (FUNC_11(VAR_17->state != VAR_16))
  goto out;

 VAR_18 = FUNC_2(VAR_17->dev);
 if (VAR_18 < 0) {
  FUNC_5(VAR_17->dev);
  goto out;
 }

 while (!VAR_21 && VAR_20--) {




  FUNC_0(VAR_13, &VAR_17->flags);
  FUNC_7();

  VAR_18 = FUNC_17(VAR_17, VAR_17->fw_status);
  if (VAR_18 < 0)
   goto out;

  FUNC_19(VAR_17);

  VAR_19 = VAR_17->fw_status->intr;
  VAR_19 &= VAR_15;
  if (!VAR_19) {
   VAR_21 = 1;
   continue;
  }

  if (FUNC_11(VAR_19 & VAR_9)) {
   FUNC_13("HW watchdog interrupt received! starting recovery.");
   VAR_17->watchdog_recovery = 1;
   VAR_18 = -VAR_1;


   goto out;
  }

  if (FUNC_11(VAR_19 & VAR_10)) {
   FUNC_13("SW watchdog interrupt received! "
         "starting recovery.");
   VAR_17->watchdog_recovery = 1;
   VAR_18 = -VAR_1;


   goto out;
  }

  if (FUNC_1(VAR_19 & VAR_4)) {
   FUNC_12(VAR_0, "WL1271_ACX_INTR_DATA");

   VAR_18 = FUNC_20(VAR_17, VAR_17->fw_status);
   if (VAR_18 < 0)
    goto out;


   FUNC_8(&VAR_17->wl_lock, VAR_23);
   if (!FUNC_10(VAR_12, &VAR_17->flags) &&
       FUNC_16(VAR_17) > 0) {
    FUNC_9(&VAR_17->wl_lock, VAR_23);




    VAR_18 = FUNC_21(VAR_17);
    if (VAR_18 < 0)
     goto out;
   } else {
    FUNC_9(&VAR_17->wl_lock, VAR_23);
   }


   VAR_18 = FUNC_18(VAR_17);
   if (VAR_18 < 0)
    goto out;


   VAR_22 = FUNC_6(&VAR_17->deferred_tx_queue) +
          FUNC_6(&VAR_17->deferred_rx_queue);
   if (VAR_22 > VAR_11)
    FUNC_15(VAR_17);
  }

  if (VAR_19 & VAR_5) {
   FUNC_12(VAR_0, "WL1271_ACX_INTR_EVENT_A");
   VAR_18 = FUNC_14(VAR_17, 0);
   if (VAR_18 < 0)
    goto out;
  }

  if (VAR_19 & VAR_6) {
   FUNC_12(VAR_0, "WL1271_ACX_INTR_EVENT_B");
   VAR_18 = FUNC_14(VAR_17, 1);
   if (VAR_18 < 0)
    goto out;
  }

  if (VAR_19 & VAR_8)
   FUNC_12(VAR_0,
         "WL1271_ACX_INTR_INIT_COMPLETE");

  if (VAR_19 & VAR_7)
   FUNC_12(VAR_0, "WL1271_ACX_INTR_HW_AVAILABLE");
 }

 FUNC_3(VAR_17->dev);
 FUNC_4(VAR_17->dev);

out:
 return VAR_18;
}
