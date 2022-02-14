
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ipr_ioa_cfg {int hrrq_num; scalar_t__ sdt_state; TYPE_2__* host; int queue; int used_res_q; scalar_t__ reset_work_q; int work_q; scalar_t__ in_reset_reload; int reset_wait_q; TYPE_1__* hrrq; } ;
struct TYPE_4__ {int * host_lock; } ;
struct TYPE_3__ {int removing_ioa; int _lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (struct ipr_ioa_cfg*) ;
 int FUNC_4 (struct ipr_ioa_cfg*,int ) ;
 int FUNC_5 (int *) ;
 struct ipr_ioa_cfg* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_6)
{
 unsigned long VAR_7 = 0;
 struct ipr_ioa_cfg *VAR_8 = FUNC_6(VAR_6);
 int VAR_9;
 unsigned long VAR_10;
 VAR_1;

 FUNC_8(VAR_8->host->host_lock, VAR_7);
 while (VAR_8->in_reset_reload) {
  FUNC_10(VAR_8->host->host_lock, VAR_7);
  FUNC_11(VAR_8->reset_wait_q, !VAR_8->in_reset_reload);
  FUNC_8(VAR_8->host->host_lock, VAR_7);
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->hrrq_num; VAR_9++) {
  FUNC_7(&VAR_8->hrrq[VAR_9]._lock);
  VAR_8->hrrq[VAR_9].removing_ioa = 1;
  FUNC_9(&VAR_8->hrrq[VAR_9]._lock);
 }
 FUNC_12();
 FUNC_4(VAR_8, VAR_2);

 FUNC_10(VAR_8->host->host_lock, VAR_7);
 FUNC_11(VAR_8->reset_wait_q, !VAR_8->in_reset_reload);
 FUNC_1(&VAR_8->work_q);
 if (VAR_8->reset_work_q)
  FUNC_2(VAR_8->reset_work_q);
 FUNC_0(&VAR_8->used_res_q);
 FUNC_8(VAR_8->host->host_lock, VAR_7);

 FUNC_8(&VAR_5, VAR_10);
 FUNC_5(&VAR_8->queue);
 FUNC_10(&VAR_5, VAR_10);

 if (VAR_8->sdt_state == VAR_0)
  VAR_8->sdt_state = VAR_4;
 FUNC_10(VAR_8->host->host_lock, VAR_7);

 FUNC_3(VAR_8);

 VAR_3;
}
