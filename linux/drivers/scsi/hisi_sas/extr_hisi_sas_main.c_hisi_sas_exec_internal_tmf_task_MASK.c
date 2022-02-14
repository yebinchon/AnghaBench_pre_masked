
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ resp; int stat; int residual; } ;
struct TYPE_6__ {int device_control_reg_update; int fis; } ;
struct sas_task {int task_state_flags; TYPE_3__ task_status; struct hisi_sas_slot* lldd_task; TYPE_2__* slow_task; int task_done; int ssp_task; TYPE_1__ ata_task; int task_proto; struct domain_device* dev; } ;
struct hisi_sas_tmf_task {int dummy; } ;
struct hisi_sas_slot {size_t dlvry_queue; int * task; } ;
struct hisi_sas_device {struct hisi_hba* hisi_hba; } ;
struct hisi_sas_cq {int tasklet; } ;
struct hisi_hba {struct hisi_sas_cq* cq; struct device* dev; } ;
struct domain_device {int sas_addr; int tproto; struct hisi_sas_device* lldd_dev; } ;
struct device {int dummy; } ;
struct TYPE_9__ {scalar_t__ expires; int function; } ;
struct TYPE_7__ {int completion; TYPE_4__ timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct device*,char*,...) ;
 scalar_t__ FUNC_4 (struct domain_device*) ;
 int FUNC_5 (struct device*,char*,...) ;
 int VAR_16 ;
 int FUNC_6 (struct sas_task*,int ,int,struct hisi_sas_tmf_task*) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_7 (int *,void*,int ) ;
 struct sas_task* FUNC_8 (int ) ;
 int FUNC_9 (struct sas_task*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct domain_device *VAR_19,
        void *VAR_20, u32 VAR_21,
        struct hisi_sas_tmf_task *VAR_22)
{
 struct hisi_sas_device *VAR_23 = VAR_19->lldd_dev;
 struct hisi_hba *VAR_24 = VAR_23->hisi_hba;
 struct device *VAR_25 = VAR_24->dev;
 struct sas_task *VAR_26;
 int VAR_27, VAR_28;

 for (VAR_28 = 0; VAR_28 < VAR_11; VAR_28++) {
  VAR_26 = FUNC_8(VAR_3);
  if (!VAR_26)
   return -VAR_2;

  VAR_26->dev = VAR_19;
  VAR_26->task_proto = VAR_19->tproto;

  if (FUNC_4(VAR_19)) {
   VAR_26->ata_task.device_control_reg_update = 1;
   FUNC_7(&VAR_26->ata_task.fis, VAR_20, VAR_21);
  } else {
   FUNC_7(&VAR_26->ssp_task, VAR_20, VAR_21);
  }
  VAR_26->task_done = VAR_16;

  VAR_26->slow_task->timer.function = VAR_17;
  VAR_26->slow_task->timer.expires = VAR_18 + VAR_12 * VAR_4;
  FUNC_1(&VAR_26->slow_task->timer);

  VAR_27 = FUNC_6(VAR_26, VAR_3, 1, VAR_22);

  if (VAR_27) {
   FUNC_2(&VAR_26->slow_task->timer);
   FUNC_3(VAR_25, "abort tmf: executing internal task failed: %d\n",
    VAR_27);
   goto ex_err;
  }

  FUNC_11(&VAR_26->slow_task->completion);
  VAR_27 = VAR_14;

  if ((VAR_26->task_state_flags & VAR_9)) {
   if (!(VAR_26->task_state_flags & VAR_10)) {
    struct hisi_sas_slot *VAR_29 = VAR_26->lldd_task;

    FUNC_3(VAR_25, "abort tmf: TMF task timeout and not done\n");
    if (VAR_29) {
     struct hisi_sas_cq *VAR_30 =
            &VAR_24->cq[VAR_29->dlvry_queue];




     FUNC_10(&VAR_30->tasklet);
     VAR_29->task = ((void*)0);
    }

    goto ex_err;
   } else
    FUNC_3(VAR_25, "abort tmf: TMF task timeout\n");
  }

  if (VAR_26->task_status.resp == VAR_8 &&
       VAR_26->task_status.stat == VAR_13) {
   VAR_27 = VAR_13;
   break;
  }

  if (VAR_26->task_status.resp == VAR_8 &&
   VAR_26->task_status.stat == VAR_15) {
   VAR_27 = VAR_15;
   break;
  }

  if (VAR_26->task_status.resp == VAR_8 &&
        VAR_26->task_status.stat == VAR_6) {



   FUNC_5(VAR_25, "abort tmf: task to dev %016llx resp: 0x%x sts 0x%x underrun\n",
     FUNC_0(VAR_19->sas_addr),
     VAR_26->task_status.resp,
     VAR_26->task_status.stat);
   VAR_27 = VAR_26->task_status.residual;
   break;
  }

  if (VAR_26->task_status.resp == VAR_8 &&
   VAR_26->task_status.stat == VAR_5) {
   FUNC_5(VAR_25, "abort tmf: blocked task error\n");
   VAR_27 = -VAR_1;
   break;
  }

  if (VAR_26->task_status.resp == VAR_8 &&
      VAR_26->task_status.stat == VAR_7) {
   FUNC_5(VAR_25, "abort tmf: open reject failed\n");
   VAR_27 = -VAR_0;
  } else {
   FUNC_5(VAR_25, "abort tmf: task to dev %016llx resp: 0x%x status 0x%x\n",
     FUNC_0(VAR_19->sas_addr),
     VAR_26->task_status.resp,
     VAR_26->task_status.stat);
  }
  FUNC_9(VAR_26);
  VAR_26 = ((void*)0);
 }
ex_err:
 if (VAR_28 == VAR_11)
  FUNC_5(VAR_25, "abort tmf: executing internal task failed!\n");
 FUNC_9(VAR_26);
 return VAR_27;
}
