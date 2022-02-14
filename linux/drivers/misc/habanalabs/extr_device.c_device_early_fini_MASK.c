
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_device {TYPE_1__* asic_funcs; int cq_wq; int eq_wq; int hl_chip_info; int idle_busy_ts_arr; int kernel_cb_mgr; int fpriv_list_lock; int send_cpu_message_lock; int debug_lock; int mmu_cache_lock; } ;
struct TYPE_2__ {int (* early_fini ) (struct hl_device*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hl_device*) ;
 int FUNC_2 (struct hl_device*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hl_device*) ;

__attribute__((used)) static void FUNC_6(struct hl_device *VAR_0)
{
 FUNC_4(&VAR_0->mmu_cache_lock);
 FUNC_4(&VAR_0->debug_lock);
 FUNC_4(&VAR_0->send_cpu_message_lock);

 FUNC_4(&VAR_0->fpriv_list_lock);

 FUNC_2(VAR_0, &VAR_0->kernel_cb_mgr);

 FUNC_3(VAR_0->idle_busy_ts_arr);
 FUNC_3(VAR_0->hl_chip_info);

 FUNC_0(VAR_0->eq_wq);
 FUNC_0(VAR_0->cq_wq);

 FUNC_1(VAR_0);

 if (VAR_0->asic_funcs->early_fini)
  VAR_0->asic_funcs->early_fini(VAR_0);
}
