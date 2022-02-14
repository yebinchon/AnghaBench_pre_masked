
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scsi_lun {int scsi_lun; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct sas_task {int task_proto; struct hisi_sas_slot* lldd_task; struct domain_device* dev; struct scsi_cmnd* uldd_task; } ;
struct hisi_sas_tmf_task {int tag_of_task_to_be_managed; int tmf; } ;
struct hisi_sas_slot {int idx; } ;
struct domain_device {int dummy; } ;
struct TYPE_2__ {int lun; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct domain_device*,int ,struct hisi_sas_tmf_task*) ;
 int FUNC_1 (int ,struct scsi_lun*) ;

__attribute__((used)) static int FUNC_2(struct sas_task *VAR_2)
{
 struct scsi_lun VAR_3;
 struct hisi_sas_tmf_task VAR_4;
 int VAR_5 = 129;

 if (VAR_2->lldd_task && VAR_2->task_proto & VAR_0) {
  struct scsi_cmnd *VAR_6 = VAR_2->uldd_task;
  struct domain_device *VAR_7 = VAR_2->dev;
  struct hisi_sas_slot *VAR_8 = VAR_2->lldd_task;
  u32 VAR_9 = VAR_8->idx;

  FUNC_1(VAR_6->device->lun, &VAR_3);
  VAR_4.tmf = VAR_1;
  VAR_4.tag_of_task_to_be_managed = VAR_9;

  VAR_5 = FUNC_0(VAR_7,
        VAR_3.scsi_lun,
        &VAR_4);
  switch (VAR_5) {

  case 128:

  case 129:
  case 130:
   break;
  default:
   VAR_5 = 129;
   break;
  }
 }
 return VAR_5;
}
