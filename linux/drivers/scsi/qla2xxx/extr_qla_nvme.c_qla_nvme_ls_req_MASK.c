
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int cmd_dma; int timeout_sec; int rsp_dma; int rsp_len; int cmd_len; scalar_t__ dl; scalar_t__ dir; struct nvmefc_ls_req* desc; } ;
struct TYPE_16__ {TYPE_4__ nvme; } ;
struct srb_iocb {TYPE_5__ u; } ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_nvme_rport {TYPE_7__* fcport; } ;
struct TYPE_12__ {int fw_started; } ;
struct qla_hw_data {TYPE_3__* pdev; TYPE_1__ flags; } ;
struct nvmefc_ls_req {int rqstlen; int rqstaddr; int timeout; int rspdma; int rsplen; struct nvme_private* private; } ;
struct nvme_private {TYPE_6__* sp; struct nvmefc_ls_req* fd; int cmd_lock; } ;
struct nvme_fc_remote_port {struct qla_nvme_rport* private; } ;
struct nvme_fc_local_port {int dummy; } ;
struct TYPE_13__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_17__ {char* name; int * priv; int nvme_ls_waitq; TYPE_2__ u; int cmd_kref; int put_fn; int done; int type; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_18__ {struct scsi_qla_host* vha; scalar_t__ deleted; } ;
typedef TYPE_7__ fc_port_t ;
struct TYPE_14__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,int) ;
 int VAR_5 ;
 TYPE_6__* FUNC_4 (struct scsi_qla_host*,TYPE_7__*,int ) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct nvme_fc_local_port *VAR_8,
    struct nvme_fc_remote_port *VAR_9, struct nvmefc_ls_req *VAR_10)
{
 struct qla_nvme_rport *VAR_11 = VAR_9->private;
 fc_port_t *VAR_12 = VAR_11->fcport;
 struct srb_iocb *VAR_13;
 struct nvme_private *VAR_14 = VAR_10->private;
 struct scsi_qla_host *VAR_15;
 int VAR_16 = VAR_2;
 struct qla_hw_data *VAR_17;
 srb_t *VAR_18;


 if (!VAR_12 || (VAR_12 && VAR_12->deleted))
  return VAR_16;

 VAR_15 = VAR_12->vha;
 VAR_17 = VAR_15->hw;

 if (!VAR_17->flags.fw_started)
  return VAR_16;


 VAR_18 = FUNC_4(VAR_15, VAR_12, VAR_1);
 if (!VAR_18)
  return VAR_16;

 VAR_18->type = VAR_4;
 VAR_18->name = "nvme_ls";
 VAR_18->done = VAR_7;
 VAR_18->put_fn = VAR_6;
 VAR_18->priv = (void *)VAR_14;
 VAR_14->sp = VAR_18;
 FUNC_2(&VAR_18->cmd_kref);
 FUNC_7(&VAR_14->cmd_lock);
 VAR_13 = &VAR_18->u.iocb_cmd;
 VAR_14->fd = VAR_10;
 VAR_13->u.nvme.desc = VAR_10;
 VAR_13->u.nvme.dir = 0;
 VAR_13->u.nvme.dl = 0;
 VAR_13->u.nvme.cmd_len = VAR_10->rqstlen;
 VAR_13->u.nvme.rsp_len = VAR_10->rsplen;
 VAR_13->u.nvme.rsp_dma = VAR_10->rspdma;
 VAR_13->u.nvme.timeout_sec = VAR_10->timeout;
 VAR_13->u.nvme.cmd_dma = FUNC_0(&VAR_17->pdev->dev, VAR_10->rqstaddr,
     VAR_10->rqstlen, VAR_0);
 FUNC_1(&VAR_17->pdev->dev, VAR_13->u.nvme.cmd_dma,
     VAR_10->rqstlen, VAR_0);

 VAR_16 = FUNC_6(VAR_18);
 if (VAR_16 != VAR_3) {
  FUNC_3(VAR_5, VAR_15, 0x700e,
      "qla2x00_start_sp failed = %d\n", VAR_16);
  FUNC_8(&VAR_18->nvme_ls_waitq);
  VAR_18->priv = ((void*)0);
  VAR_14->sp = ((void*)0);
  FUNC_5(VAR_18);
  return VAR_16;
 }

 return VAR_16;
}
