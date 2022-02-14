
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {int hrrq_num; TYPE_1__* hrrq; } ;
struct ipr_cmnd {int done; TYPE_2__* hrrq; int queue; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_4__ {int hrrq_pending_q; } ;
struct TYPE_3__ {int _lock; scalar_t__ allow_interrupts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct ipr_cmnd *VAR_2)
{
 struct ipr_ioa_cfg *VAR_3 = VAR_2->ioa_cfg;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_3->hrrq_num; VAR_4++) {
  FUNC_1(&VAR_3->hrrq[VAR_4]._lock);
  VAR_3->hrrq[VAR_4].allow_interrupts = 0;
  FUNC_2(&VAR_3->hrrq[VAR_4]._lock);
 }
 FUNC_3();
 FUNC_0(&VAR_2->queue, &VAR_2->hrrq->hrrq_pending_q);
 VAR_2->done = VAR_1;
 return VAR_0;
}
