
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scsi_lun {int scsi_lun; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct sas_task_slow {int completion; } ;
struct sas_task {int task_state_flags; int task_proto; int task_state_lock; struct sas_task_slow* slow_task; struct scsi_cmnd* uldd_task; struct domain_device* dev; int lldd_task; } ;
struct pm8001_tmf_task {int tag_of_task_to_be_managed; int tmf; } ;
struct pm8001_phy {int reset_success; scalar_t__ port_reset_status; int * reset_completion; int * enable_completion; } ;
struct pm8001_hba_info {scalar_t__ chip_id; struct pm8001_phy* phy; } ;
struct pm8001_device {int attached_phy; int sas_device; int * setds_completion; } ;
struct domain_device {struct pm8001_device* lldd_dev; } ;
struct TYPE_4__ {int (* phy_ctl_req ) (struct pm8001_hba_info*,int,int ) ;int (* set_dev_state_req ) (struct pm8001_hba_info*,struct pm8001_device*,int) ;} ;
struct TYPE_3__ {int lun; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct scsi_lun*) ;
 int FUNC_4 (struct domain_device*) ;
 int FUNC_5 (struct pm8001_hba_info*,struct pm8001_device*,int ,int,int) ;
 struct pm8001_hba_info* FUNC_6 (struct domain_device*) ;
 int FUNC_7 (struct sas_task*,int*) ;
 int FUNC_8 (struct domain_device*,int ,struct pm8001_tmf_task*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (struct pm8001_hba_info*,struct pm8001_device*,int) ;
 int FUNC_14 (struct pm8001_hba_info*,int,int ) ;
 int FUNC_15 (struct pm8001_hba_info*,struct pm8001_device*,int) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;

int FUNC_19(struct sas_task *VAR_16)
{
 unsigned long VAR_17;
 u32 VAR_18;
 struct domain_device *VAR_19 ;
 struct pm8001_hba_info *VAR_20;
 struct scsi_lun VAR_21;
 struct pm8001_device *VAR_22;
 struct pm8001_tmf_task VAR_23;
 int VAR_24 = VAR_12, VAR_25;
 u32 VAR_26;
 struct sas_task_slow VAR_27;
 if (FUNC_16(!VAR_16 || !VAR_16->lldd_task || !VAR_16->dev))
  return VAR_12;
 VAR_19 = VAR_16->dev;
 VAR_22 = VAR_19->lldd_dev;
 VAR_20 = FUNC_6(VAR_19);
 VAR_26 = VAR_22->attached_phy;
 VAR_24 = FUNC_7(VAR_16, &VAR_18);
 if (VAR_24 == 0) {
  FUNC_9("no tag for task:%p\n", VAR_16);
  return VAR_12;
 }
 FUNC_11(&VAR_16->task_state_lock, VAR_17);
 if (VAR_16->task_state_flags & VAR_9) {
  FUNC_12(&VAR_16->task_state_lock, VAR_17);
  return VAR_11;
 }
 VAR_16->task_state_flags |= VAR_8;
 if (VAR_16->slow_task == ((void*)0)) {
  FUNC_2(&VAR_27.completion);
  VAR_16->slow_task = &VAR_27;
 }
 FUNC_12(&VAR_16->task_state_lock, VAR_17);
 if (VAR_16->task_proto & VAR_6) {
  struct scsi_cmnd *VAR_28 = VAR_16->uldd_task;
  FUNC_3(VAR_28->device->lun, &VAR_21);
  VAR_23.tmf = VAR_10;
  VAR_23.tag_of_task_to_be_managed = VAR_18;
  VAR_24 = FUNC_8(VAR_19, VAR_21.scsi_lun, &VAR_23);
  FUNC_5(VAR_20, VAR_22,
   VAR_22->sas_device, 0, VAR_18);
 } else if (VAR_16->task_proto & VAR_4 ||
  VAR_16->task_proto & VAR_7) {
  if (VAR_20->chip_id == VAR_13) {
   FUNC_0(VAR_15);
   FUNC_0(VAR_14);
   struct pm8001_phy *VAR_29 = VAR_20->phy + VAR_26;


   VAR_22->setds_completion = &VAR_14;
   VAR_2->set_dev_state_req(VAR_20,
    VAR_22, 0x03);
   FUNC_17(&VAR_14);


   FUNC_10(&VAR_14);
   VAR_29->reset_success = 0;
   VAR_29->enable_completion = &VAR_14;
   VAR_29->reset_completion = &VAR_15;
   VAR_25 = VAR_2->phy_ctl_req(VAR_20, VAR_26,
    VAR_1);
   if (VAR_25)
    goto out;
   FUNC_1(VAR_20,
    FUNC_9("Waiting for local phy ctl\n"));
   FUNC_17(&VAR_14);
   if (!VAR_29->reset_success)
    goto out;


   FUNC_1(VAR_20,
    FUNC_9("Waiting for Port reset\n"));
   FUNC_17(&VAR_15);
   if (VAR_29->port_reset_status) {
    FUNC_4(VAR_19);
    goto out;
   }







   VAR_25 = FUNC_5(VAR_20,
    VAR_22, VAR_22->sas_device, 1, VAR_18);
   if (VAR_25)
    goto out;
   VAR_25 = FUNC_18(
    &VAR_16->slow_task->completion,
    VAR_3 * VAR_0);
   if (!VAR_25)
    goto out;


   FUNC_10(&VAR_14);
   VAR_22->setds_completion = &VAR_14;
   VAR_2->set_dev_state_req(VAR_20,
    VAR_22, 0x01);
   FUNC_17(&VAR_14);
  } else {
   VAR_24 = FUNC_5(VAR_20,
    VAR_22, VAR_22->sas_device, 0, VAR_18);
  }
  VAR_24 = VAR_11;
 } else if (VAR_16->task_proto & VAR_5) {

  VAR_24 = FUNC_5(VAR_20, VAR_22,
   VAR_22->sas_device, 0, VAR_18);

 }
out:
 FUNC_11(&VAR_16->task_state_lock, VAR_17);
 if (VAR_16->slow_task == &VAR_27)
  VAR_16->slow_task = ((void*)0);
 FUNC_12(&VAR_16->task_state_lock, VAR_17);
 if (VAR_24 != VAR_11)
  FUNC_9("rc= %d\n", VAR_24);
 return VAR_24;
}
