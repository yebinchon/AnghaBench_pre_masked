
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {scalar_t__ sdt_state; int hrrq_num; int in_ioa_bringdown; int scsi_unblock; int work_q; TYPE_2__* hrrq; int reset_wait_q; scalar_t__ in_reset_reload; int * reset_cmd; scalar_t__ reset_retries; TYPE_1__* pdev; } ;
typedef enum ipr_shutdown_type { ____Placeholder_ipr_shutdown_type } ipr_shutdown_type ;
struct TYPE_4__ {int ioa_is_dead; int removing_ioa; int _lock; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ipr_ioa_cfg*,int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ipr_ioa_cfg*) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct ipr_ioa_cfg *VAR_8,
       enum ipr_shutdown_type VAR_9)
{
 int VAR_10;

 if (VAR_8->hrrq[VAR_2].ioa_is_dead)
  return;

 if (VAR_8->in_reset_reload) {
  if (VAR_8->sdt_state == VAR_1)
   VAR_8->sdt_state = VAR_6;
  else if (VAR_8->sdt_state == VAR_5)
   VAR_8->sdt_state = VAR_0;
 }

 if (VAR_8->reset_retries++ >= VAR_3) {
  FUNC_1(&VAR_8->pdev->dev,
   "IOA taken offline - error recovery failed\n");

  VAR_8->reset_retries = 0;
  for (VAR_10 = 0; VAR_10 < VAR_8->hrrq_num; VAR_10++) {
   FUNC_4(&VAR_8->hrrq[VAR_10]._lock);
   VAR_8->hrrq[VAR_10].ioa_is_dead = 1;
   FUNC_5(&VAR_8->hrrq[VAR_10]._lock);
  }
  FUNC_7();

  if (VAR_8->in_ioa_bringdown) {
   VAR_8->reset_cmd = ((void*)0);
   VAR_8->in_reset_reload = 0;
   FUNC_2(VAR_8);
   FUNC_6(&VAR_8->reset_wait_q);

   if (!VAR_8->hrrq[VAR_2].removing_ioa) {
    VAR_8->scsi_unblock = 1;
    FUNC_3(&VAR_8->work_q);
   }
   return;
  } else {
   VAR_8->in_ioa_bringdown = 1;
   VAR_9 = VAR_4;
  }
 }

 FUNC_0(VAR_8, VAR_7,
    VAR_9);
}
