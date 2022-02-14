
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ipr_ioa_cfg {int nvectors; int hrrq_num; int pdev; scalar_t__ sis64; scalar_t__ in_reset_reload; int reset_wait_q; TYPE_2__* host; TYPE_1__* hrrq; scalar_t__ iopoll_weight; } ;
typedef enum ipr_shutdown_type { ____Placeholder_ipr_shutdown_type } ipr_shutdown_type ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {int iopoll; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ipr_ioa_cfg*) ;
 int FUNC_1 (struct ipr_ioa_cfg*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct ipr_ioa_cfg* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_5)
{
 struct ipr_ioa_cfg *VAR_6 = FUNC_4(VAR_5);
 unsigned long VAR_7 = 0;
 enum ipr_shutdown_type VAR_8 = VAR_0;
 int VAR_9;

 FUNC_5(VAR_6->host->host_lock, VAR_7);
 if (VAR_6->iopoll_weight && VAR_6->sis64 && VAR_6->nvectors > 1) {
  VAR_6->iopoll_weight = 0;
  for (VAR_9 = 1; VAR_9 < VAR_6->hrrq_num; VAR_9++)
   FUNC_2(&VAR_6->hrrq[VAR_9].iopoll);
 }

 while (VAR_6->in_reset_reload) {
  FUNC_6(VAR_6->host->host_lock, VAR_7);
  FUNC_7(VAR_6->reset_wait_q, !VAR_6->in_reset_reload);
  FUNC_5(VAR_6->host->host_lock, VAR_7);
 }

 if (VAR_3 && VAR_4 == VAR_2 && VAR_6->sis64)
  VAR_8 = VAR_1;

 FUNC_1(VAR_6, VAR_8);
 FUNC_6(VAR_6->host->host_lock, VAR_7);
 FUNC_7(VAR_6->reset_wait_q, !VAR_6->in_reset_reload);
 if (VAR_3 && VAR_4 == VAR_2 && VAR_6->sis64) {
  FUNC_0(VAR_6);
  FUNC_3(VAR_6->pdev);
 }
}
