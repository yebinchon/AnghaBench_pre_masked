
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_task {struct ata_queued_cmd* uldd_task; } ;
struct completion {int dummy; } ;
struct ata_queued_cmd {struct completion* private_data; int err_mask; int flags; TYPE_1__* scsicmd; } ;
struct TYPE_2__ {int request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct completion*) ;

void FUNC_2(struct sas_task *VAR_3)
{
 struct ata_queued_cmd *VAR_4 = VAR_3->uldd_task;
 struct completion *VAR_5;


 if (VAR_4->scsicmd) {
  FUNC_0(VAR_4->scsicmd->request);
  return;
 }


 VAR_4->flags &= ~VAR_1;
 VAR_4->flags |= VAR_2;
 VAR_4->err_mask |= VAR_0;
 VAR_5 = VAR_4->private_data;
 FUNC_1(VAR_5);
}
