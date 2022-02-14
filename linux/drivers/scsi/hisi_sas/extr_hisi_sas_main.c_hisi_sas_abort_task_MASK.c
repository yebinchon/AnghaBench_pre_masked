
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct scsi_lun {int scsi_lun; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct sas_task {int task_state_flags; int task_proto; struct hisi_sas_slot* lldd_task; struct domain_device* dev; struct scsi_cmnd* uldd_task; int task_state_lock; } ;
struct hisi_sas_tmf_task {int tag_of_task_to_be_managed; int tmf; } ;
struct hisi_sas_slot {size_t dlvry_queue; int * task; int idx; } ;
struct hisi_sas_device {int dummy; } ;
struct hisi_sas_cq {int tasklet; } ;
struct hisi_hba {struct hisi_sas_cq* cq; struct device* dev; } ;
struct domain_device {scalar_t__ dev_type; struct hisi_sas_device* lldd_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct hisi_hba* FUNC_2 (struct domain_device*) ;
 int FUNC_3 (struct domain_device*,int ,struct hisi_sas_tmf_task*) ;
 int FUNC_4 (struct hisi_hba*,struct domain_device*) ;
 int FUNC_5 (struct hisi_hba*,struct sas_task*,struct hisi_sas_slot*) ;
 int FUNC_6 (struct hisi_hba*,struct domain_device*,int ,int ) ;
 int FUNC_7 (struct domain_device*) ;
 int FUNC_8 (int ,struct scsi_lun*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct sas_task *VAR_13)
{
 struct scsi_lun VAR_14;
 struct hisi_sas_tmf_task VAR_15;
 struct domain_device *VAR_16 = VAR_13->dev;
 struct hisi_sas_device *VAR_17 = VAR_16->lldd_dev;
 struct hisi_hba *VAR_18;
 struct device *VAR_19;
 int VAR_20 = VAR_11;
 unsigned long VAR_21;

 if (!VAR_17)
  return VAR_11;

 VAR_18 = FUNC_2(VAR_13->dev);
 VAR_19 = VAR_18->dev;

 FUNC_9(&VAR_13->task_state_lock, VAR_21);
 if (VAR_13->task_state_flags & VAR_8) {
  struct hisi_sas_slot *VAR_22 = VAR_13->lldd_task;
  struct hisi_sas_cq *VAR_23;

  if (VAR_22) {




   VAR_23 = &VAR_18->cq[VAR_22->dlvry_queue];
   FUNC_11(&VAR_23->tasklet);
  }
  FUNC_10(&VAR_13->task_state_lock, VAR_21);
  VAR_20 = VAR_10;
  goto out;
 }
 VAR_13->task_state_flags |= VAR_7;
 FUNC_10(&VAR_13->task_state_lock, VAR_21);

 if (VAR_13->lldd_task && VAR_13->task_proto & VAR_4) {
  struct scsi_cmnd *VAR_24 = VAR_13->uldd_task;
  struct hisi_sas_slot *VAR_25 = VAR_13->lldd_task;
  u16 VAR_26 = VAR_25->idx;
  int VAR_27;

  FUNC_8(VAR_24->device->lun, &VAR_14);
  VAR_15.tmf = VAR_9;
  VAR_15.tag_of_task_to_be_managed = VAR_26;

  VAR_20 = FUNC_3(VAR_13->dev, VAR_14.scsi_lun,
        &VAR_15);

  VAR_27 = FUNC_6(VAR_18, VAR_16,
         VAR_0, VAR_26);
  if (VAR_27 < 0) {
   FUNC_0(VAR_19, "abort task: internal abort (%d)\n", VAR_27);
   return VAR_11;
  }
  if (VAR_20 == VAR_10 && VAR_27 != VAR_12) {
   if (VAR_13->lldd_task)
    FUNC_5(VAR_18, VAR_13, VAR_25);
  }
 } else if (VAR_13->task_proto & VAR_2 ||
  VAR_13->task_proto & VAR_5) {
  if (VAR_13->dev->dev_type == VAR_6) {
   VAR_20 = FUNC_6(VAR_18, VAR_16,
         VAR_1,
         0);
   if (VAR_20 < 0) {
    FUNC_0(VAR_19, "abort task: internal abort failed\n");
    goto out;
   }
   FUNC_4(VAR_18, VAR_16);
   VAR_20 = FUNC_7(VAR_16);
  }
 } else if (VAR_13->lldd_task && VAR_13->task_proto & VAR_3) {

  struct hisi_sas_slot *VAR_28 = VAR_13->lldd_task;
  u32 VAR_29 = VAR_28->idx;
  struct hisi_sas_cq *VAR_30 = &VAR_18->cq[VAR_28->dlvry_queue];

  VAR_20 = FUNC_6(VAR_18, VAR_16,
        VAR_0, VAR_29);
  if (((VAR_20 < 0) || (VAR_20 == VAR_11)) &&
     VAR_13->lldd_task) {




   FUNC_11(&VAR_30->tasklet);
   VAR_28->task = ((void*)0);
  }
 }

out:
 if (VAR_20 != VAR_10)
  FUNC_1(VAR_19, "abort task: rc=%d\n", VAR_20);
 return VAR_20;
}
