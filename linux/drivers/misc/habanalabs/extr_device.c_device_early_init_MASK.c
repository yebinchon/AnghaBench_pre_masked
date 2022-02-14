
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwmon_chip_info {int dummy; } ;
struct hl_device_idle_busy_ts {int dummy; } ;
struct hl_device {int asic_type; TYPE_1__* asic_funcs; int * cq_wq; int * eq_wq; int hl_chip_info; int in_reset; int fpriv_list_lock; int fpriv_list; int hw_queues_mirror_lock; int hw_queues_mirror_list; int mmu_cache_lock; int debug_lock; int send_cpu_message_lock; int kernel_cb_mgr; int idle_busy_ts_arr; int dev; int asic_name; } ;
struct TYPE_2__ {int (* early_init ) (struct hl_device*) ;int (* early_fini ) (struct hl_device*) ;} ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct hl_device*) ;
 int FUNC_6 (struct hl_device*) ;
 int FUNC_7 (struct hl_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (struct hl_device*) ;
 int FUNC_16 (struct hl_device*) ;

__attribute__((used)) static int FUNC_17(struct hl_device *VAR_6)
{
 int VAR_7;

 switch (VAR_6->asic_type) {
 case 128:
  FUNC_5(VAR_6);
  FUNC_14(VAR_6->asic_name, "GOYA", sizeof(VAR_6->asic_name));
  break;
 default:
  FUNC_4(VAR_6->dev, "Unrecognized ASIC type %d\n",
   VAR_6->asic_type);
  return -VAR_0;
 }

 VAR_7 = VAR_6->asic_funcs->early_init(VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7)
  goto early_fini;

 VAR_6->cq_wq = FUNC_1("hl-free-jobs", VAR_4, 0);
 if (VAR_6->cq_wq == ((void*)0)) {
  FUNC_4(VAR_6->dev, "Failed to allocate CQ workqueue\n");
  VAR_7 = -VAR_1;
  goto asid_fini;
 }

 VAR_6->eq_wq = FUNC_1("hl-events", VAR_4, 0);
 if (VAR_6->eq_wq == ((void*)0)) {
  FUNC_4(VAR_6->dev, "Failed to allocate EQ workqueue\n");
  VAR_7 = -VAR_1;
  goto free_cq_wq;
 }

 VAR_6->hl_chip_info = FUNC_11(sizeof(struct hwmon_chip_info),
     VAR_2);
 if (!VAR_6->hl_chip_info) {
  VAR_7 = -VAR_1;
  goto free_eq_wq;
 }

 VAR_6->idle_busy_ts_arr = FUNC_10(VAR_3,
     sizeof(struct hl_device_idle_busy_ts),
     (VAR_2 | VAR_5));
 if (!VAR_6->idle_busy_ts_arr) {
  VAR_7 = -VAR_1;
  goto free_chip_info;
 }

 FUNC_8(&VAR_6->kernel_cb_mgr);

 FUNC_12(&VAR_6->send_cpu_message_lock);
 FUNC_12(&VAR_6->debug_lock);
 FUNC_12(&VAR_6->mmu_cache_lock);
 FUNC_0(&VAR_6->hw_queues_mirror_list);
 FUNC_13(&VAR_6->hw_queues_mirror_lock);
 FUNC_0(&VAR_6->fpriv_list);
 FUNC_12(&VAR_6->fpriv_list_lock);
 FUNC_2(&VAR_6->in_reset, 0);

 return 0;

free_chip_info:
 FUNC_9(VAR_6->hl_chip_info);
free_eq_wq:
 FUNC_3(VAR_6->eq_wq);
free_cq_wq:
 FUNC_3(VAR_6->cq_wq);
asid_fini:
 FUNC_6(VAR_6);
early_fini:
 if (VAR_6->asic_funcs->early_fini)
  VAR_6->asic_funcs->early_fini(VAR_6);

 return VAR_7;
}
