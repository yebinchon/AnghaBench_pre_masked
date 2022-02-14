
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct scsi_qla_host {TYPE_7__* hw; } ;
struct TYPE_21__ {TYPE_14__* sp; } ;
struct TYPE_22__ {TYPE_12__ iosb; } ;
struct qla_work_evt {TYPE_13__ u; } ;
struct event_arg {int rc; int id; TYPE_14__* sp; int port_name; } ;
struct TYPE_24__ {int port_name; } ;
struct TYPE_25__ {TYPE_1__ gpn_id; } ;
struct ct_sns_rsp {TYPE_2__ rsp; } ;
struct TYPE_26__ {int port_id; } ;
struct TYPE_27__ {TYPE_3__ port_id; } ;
struct ct_sns_req {TYPE_4__ req; } ;
struct TYPE_31__ {int * rsp; int rsp_dma; int rsp_allocated_size; int * req; int req_dma; int req_allocated_size; } ;
struct TYPE_32__ {TYPE_8__ ctarg; } ;
struct TYPE_19__ {TYPE_9__ u; } ;
struct TYPE_20__ {TYPE_10__ iocb_cmd; } ;
struct TYPE_23__ {int gen1; int (* free ) (TYPE_14__*) ;TYPE_11__ u; struct scsi_qla_host* vha; int elem; int name; } ;
typedef TYPE_14__ srb_t ;
typedef int ea ;
struct TYPE_28__ {int sess_lock; } ;
struct TYPE_30__ {TYPE_6__* pdev; TYPE_5__ tgt; } ;
struct TYPE_29__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct event_arg*,int ,int) ;
 int FUNC_5 (int ,struct scsi_qla_host*,int,char*,int ,int,int,int ,...) ;
 int VAR_3 ;
 int FUNC_6 (struct scsi_qla_host*,struct event_arg*) ;
 int FUNC_7 (struct scsi_qla_host*,int *) ;
 struct qla_work_evt* FUNC_8 (struct scsi_qla_host*,int ) ;
 int FUNC_9 (struct scsi_qla_host*,struct qla_work_evt*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (TYPE_14__*) ;
 int FUNC_13 (TYPE_14__*) ;
 int FUNC_14 (TYPE_14__*) ;

__attribute__((used)) static void FUNC_15(srb_t *VAR_4, int VAR_5)
{
 struct scsi_qla_host *VAR_6 = VAR_4->vha;
 struct ct_sns_req *VAR_7 =
     (struct ct_sns_req *)VAR_4->u.iocb_cmd.u.ctarg.req;
 struct ct_sns_rsp *VAR_8 =
     (struct ct_sns_rsp *)VAR_4->u.iocb_cmd.u.ctarg.rsp;
 struct event_arg VAR_9;
 struct qla_work_evt *VAR_10;
 unsigned long VAR_11;

 if (VAR_5)
  FUNC_5(VAR_3, VAR_6, 0x2066,
      "Async done-%s fail res %x rscn gen %d ID %3phC. %8phC\n",
      VAR_4->name, VAR_5, VAR_4->gen1, VAR_7->req.port_id.port_id,
      VAR_8->rsp.gpn_id.port_name);
 else
  FUNC_5(VAR_3, VAR_6, 0x2066,
      "Async done-%s good rscn gen %d ID %3phC. %8phC\n",
      VAR_4->name, VAR_4->gen1, VAR_7->req.port_id.port_id,
      VAR_8->rsp.gpn_id.port_name);

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 FUNC_3(VAR_9.port_name, VAR_8->rsp.gpn_id.port_name, VAR_2);
 VAR_9.sp = VAR_4;
 VAR_9.id = FUNC_0(VAR_7->req.port_id.port_id);
 VAR_9.rc = VAR_5;

 FUNC_10(&VAR_6->hw->tgt.sess_lock, VAR_11);
 FUNC_2(&VAR_4->elem);
 FUNC_11(&VAR_6->hw->tgt.sess_lock, VAR_11);

 if (VAR_5) {
  if (VAR_5 == VAR_1) {
   FUNC_7(VAR_4->vha, &VAR_9.id);
   VAR_4->free(VAR_4);
   return;
  }
 } else if (VAR_4->gen1) {

  FUNC_7(VAR_4->vha, &VAR_9.id);
  VAR_4->free(VAR_4);
  return;
 }

 FUNC_6(VAR_6, &VAR_9);

 VAR_10 = FUNC_8(VAR_6, VAR_0);
 if (!VAR_10) {

  FUNC_1(&VAR_6->hw->pdev->dev,
      VAR_4->u.iocb_cmd.u.ctarg.req_allocated_size,
      VAR_4->u.iocb_cmd.u.ctarg.req,
      VAR_4->u.iocb_cmd.u.ctarg.req_dma);
  VAR_4->u.iocb_cmd.u.ctarg.req = ((void*)0);

  FUNC_1(&VAR_6->hw->pdev->dev,
      VAR_4->u.iocb_cmd.u.ctarg.rsp_allocated_size,
      VAR_4->u.iocb_cmd.u.ctarg.rsp,
      VAR_4->u.iocb_cmd.u.ctarg.rsp_dma);
  VAR_4->u.iocb_cmd.u.ctarg.rsp = ((void*)0);

  VAR_4->free(VAR_4);
  return;
 }

 VAR_10->u.iosb.sp = VAR_4;
 FUNC_9(VAR_6, VAR_10);
}
