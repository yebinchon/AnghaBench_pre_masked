
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_instance {int issuepend_done; int flag_ieee; int unload; int disableOnlineCtrlReset; int smp_affinity_enable; int msix_load_balance; scalar_t__ adapter_type; int work_init; scalar_t__ UnevenSpanSupport; scalar_t__ last_time; scalar_t__ flag; TYPE_1__* pdev; int reset_mutex; int completion_lock; int stream_lock; int hba_lock; int mfi_pool_lock; int crashdump_lock; int abort_cmd_wait_q; int int_cmd_wait_q; int total_io_count; int fw_outstanding; int internal_reset_pending_q; int cmd_pool; int adprecovery; int fw_crash_state; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct megasas_instance *VAR_10)
{
 VAR_10->fw_crash_state = VAR_4;

 VAR_7 = 0;
 VAR_10->issuepend_done = 1;
 FUNC_3(&VAR_10->adprecovery, VAR_0);




 FUNC_0(&VAR_10->cmd_pool);
 FUNC_0(&VAR_10->internal_reset_pending_q);

 FUNC_3(&VAR_10->fw_outstanding, 0);
 FUNC_2(&VAR_10->total_io_count, 0);

 FUNC_4(&VAR_10->int_cmd_wait_q);
 FUNC_4(&VAR_10->abort_cmd_wait_q);

 FUNC_6(&VAR_10->crashdump_lock);
 FUNC_6(&VAR_10->mfi_pool_lock);
 FUNC_6(&VAR_10->hba_lock);
 FUNC_6(&VAR_10->stream_lock);
 FUNC_6(&VAR_10->completion_lock);

 FUNC_5(&VAR_10->reset_mutex);

 if ((VAR_10->pdev->device == VAR_3) ||
     (VAR_10->pdev->device == VAR_2))
  VAR_10->flag_ieee = 1;

 VAR_5 = 0;
 VAR_10->flag = 0;
 VAR_10->unload = 1;
 VAR_10->last_time = 0;
 VAR_10->disableOnlineCtrlReset = 1;
 VAR_10->UnevenSpanSupport = 0;
 VAR_10->smp_affinity_enable = VAR_9 ? 1 : 0;
 VAR_10->msix_load_balance = 0;

 if (VAR_10->adapter_type != VAR_1)
  FUNC_1(&VAR_10->work_init, VAR_6);
 else
  FUNC_1(&VAR_10->work_init, VAR_8);
}
