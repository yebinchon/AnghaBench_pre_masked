
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sysfs_entry {int type; int attr; scalar_t__ name; } ;
struct qla_hw_data {int beacon_blink_led; TYPE_2__* isp_ops; } ;
struct TYPE_6__ {int kobj; } ;
struct Scsi_Host {TYPE_1__ shost_gendev; } ;
struct TYPE_8__ {struct qla_hw_data* hw; struct Scsi_Host* host; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_7__ {int (* beacon_off ) (TYPE_3__*) ;} ;


 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 struct sysfs_entry* VAR_0 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,int ) ;

void
FUNC_7(scsi_qla_host_t *VAR_1, bool VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_1->host;
 struct sysfs_entry *VAR_4;
 struct qla_hw_data *VAR_5 = VAR_1->hw;

 for (VAR_4 = VAR_0; VAR_4->name; VAR_4++) {
  if (VAR_4->type && !FUNC_1(VAR_5))
   continue;
  if (VAR_4->type == 2 && !FUNC_2(VAR_5))
   continue;
  if (VAR_4->type == 3 && !(FUNC_0(VAR_5)))
   continue;
  if (VAR_4->type == 0x27 &&
      (!FUNC_3(VAR_5) || !FUNC_4(VAR_5)))
   continue;

  FUNC_6(&VAR_3->shost_gendev.kobj,
      VAR_4->attr);
 }

 if (VAR_2 && VAR_5->beacon_blink_led == 1)
  VAR_5->isp_ops->beacon_off(VAR_1);
}
