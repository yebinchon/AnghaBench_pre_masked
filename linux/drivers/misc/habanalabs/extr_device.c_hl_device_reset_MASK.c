
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hl_device_reset_work {int reset_work; struct hl_device* hdev; } ;
struct TYPE_5__ {int completion_queues_count; } ;
struct hl_device {int disabled; int hard_reset_pending; int device_cpu_disabled; int in_reset; int soft_reset_cnt; int dev; int hard_reset_cnt; TYPE_4__* asic_funcs; int max_power; int * kernel_ctx; TYPE_3__* compute_ctx; int fpriv_list_lock; scalar_t__ cs_active_cnt; TYPE_2__* idle_busy_ts_arr; scalar_t__ idle_busy_ts_idx; int * completion_queue; TYPE_1__ asic_prop; int event_queue; int send_cpu_message_lock; int init_done; } ;
struct TYPE_8__ {int (* hw_init ) (struct hl_device*) ;int (* test_queues ) (struct hl_device*) ;int (* soft_reset_late_init ) (struct hl_device*) ;int (* hw_fini ) (struct hl_device*,int) ;int (* halt_engines ) (struct hl_device*,int) ;int (* hw_queues_unlock ) (struct hl_device*) ;int (* hw_queues_lock ) (struct hl_device*) ;} ;
struct TYPE_7__ {scalar_t__ thread_ctx_switch_wait_token; int thread_ctx_switch_token; } ;
struct TYPE_6__ {void* idle_to_busy_ts; void* busy_to_idle_ts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_4 ;
 int FUNC_6 (struct hl_device*) ;
 int FUNC_7 (struct hl_device*) ;
 int FUNC_8 (struct hl_device*) ;
 int FUNC_9 (struct hl_device*,int *) ;
 int FUNC_10 (struct hl_device*) ;
 int FUNC_11 (struct hl_device*,int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct hl_device*,int *) ;
 int FUNC_14 (struct hl_device*,int) ;
 int FUNC_15 (struct hl_device*) ;
 int FUNC_16 (struct hl_device*) ;
 int FUNC_17 (struct hl_device*,int ) ;
 int FUNC_18 (struct hl_device*) ;
 int FUNC_19 (struct hl_device*) ;
 int FUNC_20 (int *) ;
 void* FUNC_21 (int ,int ) ;
 void* FUNC_22 (int,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct hl_device*) ;
 int FUNC_27 (struct hl_device*) ;
 int FUNC_28 (struct hl_device*,int) ;
 int FUNC_29 (struct hl_device*,int) ;
 int FUNC_30 (struct hl_device*) ;
 int FUNC_31 (struct hl_device*) ;
 int FUNC_32 (struct hl_device*) ;

int FUNC_33(struct hl_device *VAR_5, bool VAR_6,
   bool VAR_7)
{
 int VAR_8, VAR_9;

 if (!VAR_5->init_done) {
  FUNC_4(VAR_5->dev,
   "Can't reset before initialization is done\n");
  return 0;
 }






 if (!VAR_7) {

  VAR_9 = FUNC_1(&VAR_5->in_reset, 0, 1);
  if (VAR_9)
   return 0;


  VAR_5->disabled = 1;




  VAR_5->asic_funcs->hw_queues_lock(VAR_5);
  VAR_5->asic_funcs->hw_queues_unlock(VAR_5);


  FUNC_23(&VAR_5->fpriv_list_lock);
  FUNC_24(&VAR_5->fpriv_list_lock);

  FUNC_4(VAR_5->dev, "Going to RESET device!\n");
 }

again:
 if ((VAR_6) && (!VAR_7)) {
  struct hl_device_reset_work *VAR_10;

  VAR_5->hard_reset_pending = 1;

  VAR_10 = FUNC_22(sizeof(*VAR_10),
      VAR_2);
  if (!VAR_10) {
   VAR_9 = -VAR_1;
   goto out_err;
  }






  FUNC_0(&VAR_10->reset_work,
    VAR_4);
  VAR_10->hdev = VAR_5;
  FUNC_25(&VAR_10->reset_work);

  return 0;
 }

 if (VAR_6) {
  FUNC_7(VAR_5);





  FUNC_23(&VAR_5->send_cpu_message_lock);
  FUNC_24(&VAR_5->send_cpu_message_lock);
 }






 VAR_5->asic_funcs->halt_engines(VAR_5, VAR_6);


 FUNC_10(VAR_5);





 if (VAR_7)
  FUNC_6(VAR_5);


 if ((VAR_6) && (FUNC_12(VAR_5->kernel_ctx) == 1))
  VAR_5->kernel_ctx = ((void*)0);


 VAR_5->asic_funcs->hw_fini(VAR_5, VAR_6);

 if (VAR_6) {
  FUNC_18(VAR_5);
  FUNC_15(VAR_5);
  FUNC_13(VAR_5, &VAR_5->event_queue);
 }


 FUNC_14(VAR_5, VAR_6);
 for (VAR_8 = 0 ; VAR_8 < VAR_5->asic_prop.completion_queues_count ; VAR_8++)
  FUNC_9(VAR_5, &VAR_5->completion_queue[VAR_8]);

 VAR_5->idle_busy_ts_idx = 0;
 VAR_5->idle_busy_ts_arr[0].busy_to_idle_ts = FUNC_21(0, 0);
 VAR_5->idle_busy_ts_arr[0].idle_to_busy_ts = FUNC_21(0, 0);

 if (VAR_5->cs_active_cnt)
  FUNC_3(VAR_5->dev, "CS active cnt %d is not 0 during reset\n",
   VAR_5->cs_active_cnt);

 FUNC_23(&VAR_5->fpriv_list_lock);


 if (VAR_5->compute_ctx) {
  FUNC_2(&VAR_5->compute_ctx->thread_ctx_switch_token, 1);
  VAR_5->compute_ctx->thread_ctx_switch_wait_token = 0;
 }

 FUNC_24(&VAR_5->fpriv_list_lock);



 if (VAR_6) {
  VAR_5->device_cpu_disabled = 0;
  VAR_5->hard_reset_pending = 0;

  if (VAR_5->kernel_ctx) {
   FUNC_3(VAR_5->dev,
    "kernel ctx was alive during hard reset, something is terribly wrong\n");
   VAR_9 = -VAR_0;
   goto out_err;
  }

  VAR_9 = FUNC_16(VAR_5);
  if (VAR_9) {
   FUNC_4(VAR_5->dev,
    "Failed to initialize MMU S/W after hard reset\n");
   goto out_err;
  }


  VAR_5->kernel_ctx = FUNC_22(sizeof(*VAR_5->kernel_ctx),
      VAR_3);
  if (!VAR_5->kernel_ctx) {
   VAR_9 = -VAR_1;
   goto out_err;
  }

  VAR_5->compute_ctx = ((void*)0);

  VAR_9 = FUNC_11(VAR_5, VAR_5->kernel_ctx, 1);
  if (VAR_9) {
   FUNC_4(VAR_5->dev,
    "failed to init kernel ctx in hard reset\n");
   FUNC_20(VAR_5->kernel_ctx);
   VAR_5->kernel_ctx = ((void*)0);
   goto out_err;
  }
 }

 VAR_9 = VAR_5->asic_funcs->hw_init(VAR_5);
 if (VAR_9) {
  FUNC_4(VAR_5->dev,
   "failed to initialize the H/W after reset\n");
  goto out_err;
 }

 VAR_5->disabled = 0;


 VAR_9 = VAR_5->asic_funcs->test_queues(VAR_5);
 if (VAR_9) {
  FUNC_4(VAR_5->dev,
   "Failed to detect if device is alive after reset\n");
  goto out_err;
 }

 if (VAR_6) {
  VAR_9 = FUNC_8(VAR_5);
  if (VAR_9) {
   FUNC_4(VAR_5->dev,
    "Failed late init after hard reset\n");
   goto out_err;
  }

  VAR_9 = FUNC_19(VAR_5);
  if (VAR_9) {
   FUNC_4(VAR_5->dev,
    "Failed to init memory module after hard reset\n");
   goto out_err;
  }

  FUNC_17(VAR_5, VAR_5->max_power);
 } else {
  VAR_9 = VAR_5->asic_funcs->soft_reset_late_init(VAR_5);
  if (VAR_9) {
   FUNC_4(VAR_5->dev,
    "Failed late init after soft reset\n");
   goto out_err;
  }
 }

 FUNC_2(&VAR_5->in_reset, 0);

 if (VAR_6)
  VAR_5->hard_reset_cnt++;
 else
  VAR_5->soft_reset_cnt++;

 FUNC_5(VAR_5->dev, "Successfully finished resetting the device\n");

 return 0;

out_err:
 VAR_5->disabled = 1;

 if (VAR_6) {
  FUNC_4(VAR_5->dev,
   "Failed to reset! Device is NOT usable\n");
  VAR_5->hard_reset_cnt++;
 } else {
  FUNC_4(VAR_5->dev,
   "Failed to do soft-reset, trying hard reset\n");
  VAR_5->soft_reset_cnt++;
  VAR_6 = 1;
  goto again;
 }

 FUNC_2(&VAR_5->in_reset, 0);

 return VAR_9;
}
