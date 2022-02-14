
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct scsi_qla_host {TYPE_2__* hw; } ;
struct TYPE_18__ {TYPE_9__* sp; } ;
struct TYPE_19__ {TYPE_7__ iosb; } ;
struct qla_work_evt {TYPE_8__ u; } ;
struct ct_sns_pkt {int dummy; } ;
struct TYPE_14__ {int * rsp; int rsp_dma; int rsp_allocated_size; int * req; int req_dma; int req_allocated_size; } ;
struct TYPE_15__ {TYPE_3__ ctarg; } ;
struct TYPE_16__ {TYPE_4__ u; int timer; } ;
struct TYPE_17__ {TYPE_5__ iocb_cmd; } ;
struct TYPE_20__ {int rc; int retry_count; int (* free ) (TYPE_9__*) ;TYPE_6__ u; int name; struct scsi_qla_host* vha; } ;
typedef TYPE_9__ srb_t ;
struct TYPE_13__ {TYPE_1__* pdev; } ;
struct TYPE_12__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (struct ct_sns_pkt*,int ,int) ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,int ,...) ;
 int VAR_4 ;
 struct qla_work_evt* FUNC_4 (struct scsi_qla_host*,int ) ;
 int FUNC_5 (struct scsi_qla_host*,struct qla_work_evt*) ;
 int FUNC_6 (TYPE_9__*) ;

__attribute__((used)) static void FUNC_7(srb_t *VAR_5, int VAR_6)
{
 struct scsi_qla_host *VAR_7 = VAR_5->vha;
 struct ct_sns_pkt *VAR_8;
 struct qla_work_evt *VAR_9;

 VAR_5->rc = VAR_6;
 if (VAR_6 == VAR_3) {
  FUNC_3(VAR_4, VAR_7, 0x204f,
      "Async done-%s exiting normally.\n",
      VAR_5->name);
 } else if (VAR_6 == VAR_2) {
  FUNC_3(VAR_4, VAR_7, 0x204f,
      "Async done-%s timeout\n", VAR_5->name);
 } else {
  VAR_8 = (struct ct_sns_pkt *)VAR_5->u.iocb_cmd.u.ctarg.rsp;
  FUNC_2(VAR_8, 0, sizeof(*VAR_8));
  VAR_5->retry_count++;
  if (VAR_5->retry_count > 3)
   goto err;

  FUNC_3(VAR_4, VAR_7, 0x204f,
      "Async done-%s fail rc %x.  Retry count %d\n",
      VAR_5->name, VAR_6, VAR_5->retry_count);

  VAR_9 = FUNC_4(VAR_7, VAR_0);
  if (!VAR_9)
   goto err2;

  FUNC_0(&VAR_5->u.iocb_cmd.timer);
  VAR_9->u.iosb.sp = VAR_5;
  FUNC_5(VAR_7, VAR_9);
  return;
 }

err:
 VAR_9 = FUNC_4(VAR_7, VAR_1);
err2:
 if (!VAR_9) {

  if (VAR_5->u.iocb_cmd.u.ctarg.req) {
   FUNC_1(&VAR_7->hw->pdev->dev,
       VAR_5->u.iocb_cmd.u.ctarg.req_allocated_size,
       VAR_5->u.iocb_cmd.u.ctarg.req,
       VAR_5->u.iocb_cmd.u.ctarg.req_dma);
   VAR_5->u.iocb_cmd.u.ctarg.req = ((void*)0);
  }

  if (VAR_5->u.iocb_cmd.u.ctarg.rsp) {
   FUNC_1(&VAR_7->hw->pdev->dev,
       VAR_5->u.iocb_cmd.u.ctarg.rsp_allocated_size,
       VAR_5->u.iocb_cmd.u.ctarg.rsp,
       VAR_5->u.iocb_cmd.u.ctarg.rsp_dma);
   VAR_5->u.iocb_cmd.u.ctarg.rsp = ((void*)0);
  }

  VAR_5->free(VAR_5);

  return;
 }

 VAR_9->u.iosb.sp = VAR_5;
 FUNC_5(VAR_7, VAR_9);
}
