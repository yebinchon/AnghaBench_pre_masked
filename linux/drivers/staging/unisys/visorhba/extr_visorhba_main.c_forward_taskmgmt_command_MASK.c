
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct visorhba_devdata {int idr; TYPE_4__* dev; int privlock; scalar_t__ serverchangingstate; scalar_t__ serverdown; } ;
struct TYPE_6__ {int lun; int id; int channel; } ;
struct TYPE_7__ {int tasktype; int handle; TYPE_2__ vdest; } ;
struct uiscmdrsp {TYPE_3__ scsitaskmgmt; int cmdtype; } ;
struct scsi_device {int sdev_gendev; int lun; int id; int channel; TYPE_1__* host; } ;
typedef enum task_mgmt_types { ____Placeholder_task_mgmt_types } task_mgmt_types ;
struct TYPE_8__ {int visorchannel; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct visorhba_devdata*,int ,int *) ;
 int FUNC_1 (int *,struct uiscmdrsp*) ;
 int FUNC_2 (struct visorhba_devdata*,int) ;
 int FUNC_3 (int *,char*,int,...) ;
 struct uiscmdrsp* FUNC_4 (struct visorhba_devdata*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int *,struct uiscmdrsp*,int *,int*) ;
 scalar_t__ FUNC_8 (int ,int ,struct uiscmdrsp*) ;
 int FUNC_9 (int ,int,int ) ;

__attribute__((used)) static int FUNC_10(enum task_mgmt_types VAR_4,
        struct scsi_device *VAR_5)
{
 struct uiscmdrsp *VAR_6;
 struct visorhba_devdata *VAR_7 =
  (struct visorhba_devdata *)VAR_5->host->hostdata;
 int VAR_8 = 0xffff;
 wait_queue_head_t VAR_9;
 int VAR_10 = 0;

 if (VAR_7->serverdown || VAR_7->serverchangingstate)
  return VAR_1;

 VAR_10 = FUNC_0(VAR_7, VAR_0,
        ((void*)0));
 if (VAR_10 < 0)
  return VAR_1;

 VAR_6 = FUNC_4(VAR_7, VAR_10);

 FUNC_5(&VAR_9);


 VAR_6->cmdtype = VAR_0;
 FUNC_7(&VAR_7->idr, &VAR_7->privlock, VAR_6,
       &VAR_9, &VAR_8);


 VAR_6->scsitaskmgmt.tasktype = VAR_4;
 VAR_6->scsitaskmgmt.vdest.channel = VAR_5->channel;
 VAR_6->scsitaskmgmt.vdest.id = VAR_5->id;
 VAR_6->scsitaskmgmt.vdest.lun = VAR_5->lun;
 VAR_6->scsitaskmgmt.handle = VAR_10;

 FUNC_3(&VAR_5->sdev_gendev,
  "visorhba: initiating type=%d taskmgmt command\n", VAR_4);
 if (FUNC_8(VAR_7->dev->visorchannel,
          VAR_2,
          VAR_6))
  goto err_del_scsipending_ent;




 if (!FUNC_9(VAR_9, VAR_8 != 0xffff,
    FUNC_6(45000)))
  goto err_del_scsipending_ent;

 FUNC_3(&VAR_5->sdev_gendev,
  "visorhba: taskmgmt type=%d success; result=0x%x\n",
   VAR_4, VAR_8);
 FUNC_1(&VAR_7->idr, VAR_6);
 return VAR_3;

err_del_scsipending_ent:
 FUNC_3(&VAR_5->sdev_gendev,
  "visorhba: taskmgmt type=%d not executed\n", VAR_4);
 FUNC_2(VAR_7, VAR_10);
 FUNC_1(&VAR_7->idr, VAR_6);
 return VAR_1;
}
