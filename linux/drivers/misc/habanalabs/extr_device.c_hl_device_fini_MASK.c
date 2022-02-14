
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int completion_queues_count; } ;
struct hl_device {int disabled; int hard_reset_pending; TYPE_2__* asic_funcs; int * completion_queue; TYPE_1__ asic_prop; int event_queue; int dev; scalar_t__ kernel_ctx; int fpriv_list_lock; int in_reset; } ;
typedef int ktime_t ;
struct TYPE_4__ {int (* sw_fini ) (struct hl_device*) ;int (* hw_fini ) (struct hl_device*,int) ;int (* halt_engines ) (struct hl_device*,int) ;int (* hw_queues_unlock ) (struct hl_device*) ;int (* hw_queues_lock ) (struct hl_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct hl_device*) ;
 int FUNC_5 (struct hl_device*) ;
 int FUNC_6 (struct hl_device*) ;
 int FUNC_7 (struct hl_device*) ;
 int FUNC_8 (struct hl_device*) ;
 int FUNC_9 (struct hl_device*,int *) ;
 int FUNC_10 (struct hl_device*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct hl_device*) ;
 int FUNC_13 (struct hl_device*,int *) ;
 int FUNC_14 (struct hl_device*) ;
 int FUNC_15 (struct hl_device*) ;
 int FUNC_16 (struct hl_device*) ;
 int FUNC_17 (struct hl_device*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int) ;
 scalar_t__ FUNC_20 (int ,int ) ;
 int FUNC_21 () ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (struct hl_device*) ;
 int FUNC_26 (struct hl_device*) ;
 int FUNC_27 (struct hl_device*,int) ;
 int FUNC_28 (struct hl_device*,int) ;
 int FUNC_29 (struct hl_device*) ;
 int FUNC_30 (int,int) ;

void FUNC_31(struct hl_device *VAR_1)
{
 int VAR_2, VAR_3;
 ktime_t VAR_4;

 FUNC_3(VAR_1->dev, "Removing device\n");
 VAR_4 = FUNC_19(FUNC_21(),
    VAR_0 * 1000 * 1000 * 4);
 VAR_3 = FUNC_1(&VAR_1->in_reset, 0, 1);
 while (VAR_3) {
  FUNC_30(50, 200);
  VAR_3 = FUNC_1(&VAR_1->in_reset, 0, 1);
  if (FUNC_20(FUNC_21(), VAR_4) > 0) {
   FUNC_0(1, "Failed to remove device because reset function did not finish\n");
   return;
  }
 }


 VAR_1->disabled = 1;




 VAR_1->asic_funcs->hw_queues_lock(VAR_1);
 VAR_1->asic_funcs->hw_queues_unlock(VAR_1);


 FUNC_22(&VAR_1->fpriv_list_lock);
 FUNC_23(&VAR_1->fpriv_list_lock);

 VAR_1->hard_reset_pending = 1;

 FUNC_15(VAR_1);

 FUNC_7(VAR_1);

 FUNC_12(VAR_1);






 VAR_1->asic_funcs->halt_engines(VAR_1, 1);


 FUNC_10(VAR_1);





 FUNC_6(VAR_1);

 FUNC_8(VAR_1);


 if ((VAR_1->kernel_ctx) && (FUNC_11(VAR_1->kernel_ctx) != 1))
  FUNC_2(VAR_1->dev, "kernel ctx is still alive\n");


 VAR_1->asic_funcs->hw_fini(VAR_1, 1);

 FUNC_17(VAR_1);

 FUNC_16(VAR_1);

 FUNC_13(VAR_1, &VAR_1->event_queue);

 for (VAR_2 = 0 ; VAR_2 < VAR_1->asic_prop.completion_queues_count ; VAR_2++)
  FUNC_9(VAR_1, &VAR_1->completion_queue[VAR_2]);
 FUNC_18(VAR_1->completion_queue);

 FUNC_14(VAR_1);


 VAR_1->asic_funcs->sw_fini(VAR_1);

 FUNC_5(VAR_1);


 FUNC_4(VAR_1);

 FUNC_24("removed device successfully\n");
}
