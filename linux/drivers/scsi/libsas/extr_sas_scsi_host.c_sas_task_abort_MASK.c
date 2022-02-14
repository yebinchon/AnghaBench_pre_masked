
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int request; } ;
struct TYPE_3__ {int (* function ) (TYPE_1__*) ;} ;
struct sas_task_slow {TYPE_1__ timer; } ;
struct sas_task {int dev; struct sas_task_slow* slow_task; struct scsi_cmnd* uldd_task; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sas_task*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(struct sas_task *VAR_0)
{
 struct scsi_cmnd *VAR_1 = VAR_0->uldd_task;


 if (!VAR_1) {
  struct sas_task_slow *VAR_2 = VAR_0->slow_task;

  if (!VAR_2)
   return;
  if (!FUNC_1(&VAR_2->timer))
   return;
  VAR_2->timer.function(&VAR_2->timer);
  return;
 }

 if (FUNC_2(VAR_0->dev))
  FUNC_3(VAR_0);
 else
  FUNC_0(VAR_1->request);
}
