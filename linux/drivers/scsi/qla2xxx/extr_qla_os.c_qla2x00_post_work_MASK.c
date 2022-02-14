
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {int iocb_work; TYPE_1__* hw; int work_lock; int dpc_flags; int work_list; } ;
struct qla_work_evt {int list; } ;
struct TYPE_2__ {int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int *) ;

int
FUNC_5(struct scsi_qla_host *VAR_2, struct qla_work_evt *VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5 = 0;

 FUNC_2(&VAR_2->work_lock, VAR_4);
 FUNC_0(&VAR_3->list, &VAR_2->work_list);

 if (!FUNC_4(VAR_0, &VAR_2->dpc_flags))
  VAR_5 = 1;

 FUNC_3(&VAR_2->work_lock, VAR_4);

 if (VAR_5)
  FUNC_1(VAR_2->hw->wq, &VAR_2->iocb_work);

 return VAR_1;
}
