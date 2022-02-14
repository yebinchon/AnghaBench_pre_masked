
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ resp; int stat; } ;
struct sas_task {int task_state_flags; TYPE_3__ task_status; struct hisi_sas_slot* lldd_task; TYPE_2__* slow_task; int task_done; int task_proto; struct domain_device* dev; } ;
struct hisi_sas_slot {size_t dlvry_queue; int * task; } ;
struct hisi_sas_dq {int dummy; } ;
struct hisi_sas_device {int device_id; } ;
struct hisi_sas_cq {int tasklet; } ;
struct hisi_hba {struct hisi_sas_cq* cq; int debugfs_work; int wq; scalar_t__ debugfs_itct; TYPE_1__* hw; struct device* dev; } ;
struct domain_device {int sas_addr; int tproto; struct hisi_sas_device* lldd_dev; } ;
struct device {int dummy; } ;
struct TYPE_9__ {scalar_t__ expires; int function; } ;
struct TYPE_7__ {int completion; TYPE_4__ timer; } ;
struct TYPE_6__ {int prep_abort; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct device*,char*,int ,struct sas_task*,scalar_t__,int) ;
 int FUNC_4 (struct device*,char*,...) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (struct hisi_hba*,int ,struct sas_task*,int,int,struct hisi_sas_dq*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (int ,int *) ;
 struct sas_task* FUNC_7 (int ) ;
 int FUNC_8 (struct sas_task*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct hisi_hba *VAR_15,
         struct domain_device *VAR_16, int VAR_17,
         int VAR_18, struct hisi_sas_dq *VAR_19)
{
 struct sas_task *VAR_20;
 struct hisi_sas_device *VAR_21 = VAR_16->lldd_dev;
 struct device *VAR_22 = VAR_15->dev;
 int VAR_23;







 if (!VAR_15->hw->prep_abort)
  return VAR_9;

 VAR_20 = FUNC_7(VAR_2);
 if (!VAR_20)
  return -VAR_1;

 VAR_20->dev = VAR_16;
 VAR_20->task_proto = VAR_16->tproto;
 VAR_20->task_done = VAR_12;
 VAR_20->slow_task->timer.function = VAR_13;
 VAR_20->slow_task->timer.expires = VAR_14 + VAR_4 * VAR_3;
 FUNC_1(&VAR_20->slow_task->timer);

 VAR_23 = FUNC_5(VAR_15, VAR_21->device_id,
      VAR_20, VAR_17, VAR_18, VAR_19);
 if (VAR_23) {
  FUNC_2(&VAR_20->slow_task->timer);
  FUNC_4(VAR_22, "internal task abort: executing internal task failed: %d\n",
   VAR_23);
  goto exit;
 }
 FUNC_10(&VAR_20->slow_task->completion);
 VAR_23 = VAR_9;


 if ((VAR_20->task_state_flags & VAR_6)) {
  if (VAR_11 && VAR_15->debugfs_itct)
   FUNC_6(VAR_15->wq, &VAR_15->debugfs_work);

  if (!(VAR_20->task_state_flags & VAR_7)) {
   struct hisi_sas_slot *VAR_24 = VAR_20->lldd_task;

   if (VAR_24) {
    struct hisi_sas_cq *VAR_25 =
     &VAR_15->cq[VAR_24->dlvry_queue];




    FUNC_9(&VAR_25->tasklet);
    VAR_24->task = ((void*)0);
   }
   FUNC_4(VAR_22, "internal task abort: timeout and not done.\n");

   VAR_23 = -VAR_0;
   goto exit;
  } else
   FUNC_4(VAR_22, "internal task abort: timeout.\n");
 }

 if (VAR_20->task_status.resp == VAR_5 &&
  VAR_20->task_status.stat == VAR_8) {
  VAR_23 = VAR_8;
  goto exit;
 }

 if (VAR_20->task_status.resp == VAR_5 &&
  VAR_20->task_status.stat == VAR_10) {
  VAR_23 = VAR_10;
  goto exit;
 }

exit:
 FUNC_3(VAR_22, "internal task abort: task to dev %016llx task=%pK resp: 0x%x sts 0x%x\n",
  FUNC_0(VAR_16->sas_addr), VAR_20,
  VAR_20->task_status.resp,
  VAR_20->task_status.stat);
 FUNC_8(VAR_20);

 return VAR_23;
}
