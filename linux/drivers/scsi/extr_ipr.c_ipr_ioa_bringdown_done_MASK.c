
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {int scsi_unblock; int hrrq_num; int reset_wait_q; TYPE_1__* hrrq; scalar_t__ reset_retries; scalar_t__ in_reset_reload; int work_q; } ;
struct ipr_cmnd {TYPE_2__* hrrq; int queue; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_4__ {int hrrq_free_q; } ;
struct TYPE_3__ {int ioa_is_dead; int _lock; int removing_ioa; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct ipr_cmnd *VAR_5)
{
 struct ipr_ioa_cfg *VAR_6 = VAR_5->ioa_cfg;
 int VAR_7;

 VAR_0;
 if (!VAR_6->hrrq[VAR_1].removing_ioa) {
  VAR_4;
  VAR_6->scsi_unblock = 1;
  FUNC_1(&VAR_6->work_q);
 }

 VAR_6->in_reset_reload = 0;
 VAR_6->reset_retries = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6->hrrq_num; VAR_7++) {
  FUNC_2(&VAR_6->hrrq[VAR_7]._lock);
  VAR_6->hrrq[VAR_7].ioa_is_dead = 1;
  FUNC_3(&VAR_6->hrrq[VAR_7]._lock);
 }
 FUNC_5();

 FUNC_0(&VAR_5->queue, &VAR_5->hrrq->hrrq_free_q);
 FUNC_4(&VAR_6->reset_wait_q);
 VAR_3;

 return VAR_2;
}
