
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {struct nvmefc_fcp_req* desc; } ;
struct TYPE_12__ {TYPE_2__ nvme; } ;
struct srb_iocb {TYPE_3__ u; } ;
struct scsi_qla_host {int dummy; } ;
struct qla_qpair {int fw_started; } ;
struct qla_nvme_rport {TYPE_5__* fcport; } ;
struct nvmefc_fcp_req {struct nvme_private* private; } ;
struct nvme_private {TYPE_4__* sp; int cmd_lock; } ;
struct nvme_fc_remote_port {struct qla_nvme_rport* private; } ;
struct nvme_fc_local_port {int dummy; } ;
struct TYPE_10__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_13__ {char* name; struct qla_qpair* qpair; int * priv; int nvme_ls_waitq; TYPE_1__ u; struct scsi_qla_host* vha; int put_fn; int done; int type; int cmd_kref; } ;
typedef TYPE_4__ srb_t ;
struct TYPE_14__ {int nvme_flag; struct scsi_qla_host* vha; scalar_t__ deleted; } ;
typedef TYPE_5__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct scsi_qla_host*,int,char*,int) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (struct scsi_qla_host*,struct qla_qpair*,TYPE_5__*,int ) ;
 int FUNC_5 (struct qla_qpair*,TYPE_4__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct nvme_fc_local_port *VAR_9,
    struct nvme_fc_remote_port *VAR_10, void *VAR_11,
    struct nvmefc_fcp_req *VAR_12)
{
 fc_port_t *VAR_13;
 struct srb_iocb *VAR_14;
 struct scsi_qla_host *VAR_15;
 int VAR_16 = -VAR_1;
 srb_t *VAR_17;
 struct qla_qpair *VAR_18 = VAR_11;
 struct nvme_private *VAR_19 = VAR_12->private;
 struct qla_nvme_rport *VAR_20 = VAR_10->private;

 VAR_13 = VAR_20->fcport;

 if (!VAR_18 || !VAR_13 || (VAR_18 && !VAR_18->fw_started) ||
     (VAR_13 && VAR_13->deleted))
  return VAR_16;

 VAR_15 = VAR_13->vha;







 if (VAR_13->nvme_flag & VAR_3)
  return -VAR_0;


 VAR_17 = FUNC_4(VAR_15, VAR_18, VAR_13, VAR_2);
 if (!VAR_17)
  return -VAR_0;

 FUNC_0(&VAR_17->nvme_ls_waitq);
 FUNC_1(&VAR_17->cmd_kref);
 FUNC_6(&VAR_19->cmd_lock);
 VAR_17->priv = (void *)VAR_19;
 VAR_19->sp = VAR_17;
 VAR_17->type = VAR_5;
 VAR_17->name = "nvme_cmd";
 VAR_17->done = VAR_8;
 VAR_17->put_fn = VAR_7;
 VAR_17->qpair = VAR_18;
 VAR_17->vha = VAR_15;
 VAR_14 = &VAR_17->u.iocb_cmd;
 VAR_14->u.nvme.desc = VAR_12;

 VAR_16 = FUNC_3(VAR_17);
 if (VAR_16 != VAR_4) {
  FUNC_2(VAR_6, VAR_15, 0x212d,
      "qla2x00_start_nvme_mq failed = %d\n", VAR_16);
  FUNC_7(&VAR_17->nvme_ls_waitq);
  VAR_17->priv = ((void*)0);
  VAR_19->sp = ((void*)0);
  FUNC_5(VAR_17->qpair, VAR_17);
 }

 return VAR_16;
}
