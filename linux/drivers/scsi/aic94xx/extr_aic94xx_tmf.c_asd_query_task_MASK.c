
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int LUN; } ;
struct sas_task {TYPE_1__ ssp_task; int dev; struct asd_ascb* lldd_task; } ;
struct asd_ascb {int tc_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;

int FUNC_1(struct sas_task *VAR_2)
{
 struct asd_ascb *VAR_3 = VAR_2->lldd_task;
 int VAR_4;

 if (VAR_3) {
  VAR_4 = VAR_3->tc_index;
  return FUNC_0(VAR_2->dev, VAR_2->ssp_task.LUN,
         VAR_0, VAR_4);
 }
 return VAR_1;
}
