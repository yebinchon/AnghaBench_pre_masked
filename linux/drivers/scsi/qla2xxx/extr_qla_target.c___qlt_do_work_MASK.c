
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


typedef int uint32_t ;
struct TYPE_18__ {struct qla_tgt_cmd* tag; } ;
struct TYPE_12__ {unsigned char* cdb; int task_attr; scalar_t__ wrdata; scalar_t__ rddata; } ;
struct TYPE_13__ {TYPE_1__ fcp_cmnd; struct qla_tgt_cmd* exchange_addr; } ;
struct TYPE_14__ {TYPE_2__ isp24; } ;
struct atio_from_isp {TYPE_3__ u; } ;
struct qla_tgt_cmd {TYPE_7__ se_cmd; struct atio_from_isp atio; int trc_flags; int cmd_lock; scalar_t__ aborted; scalar_t__ cmd_in_wq; struct qla_qpair* qpair; struct fc_port* sess; TYPE_6__* vha; } ;
struct qla_qpair {int qp_lock_ptr; } ;
struct TYPE_16__ {TYPE_4__* tgt_ops; } ;
struct qla_hw_data {TYPE_5__ tgt; } ;
struct fc_port {int se_sess; } ;
struct TYPE_17__ {struct qla_hw_data* hw; } ;
typedef TYPE_6__ scsi_qla_host_t ;
struct TYPE_15__ {int (* handle_cmd ) (TYPE_6__*,struct qla_tgt_cmd*,unsigned char*,int ,int,int,int) ;int (* put_sess ) (struct fc_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct atio_from_isp*) ;
 int FUNC_1 (int ,TYPE_6__*,int,char*,struct qla_tgt_cmd*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (struct qla_qpair*,int *,struct atio_from_isp*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (TYPE_6__*,struct qla_tgt_cmd*,unsigned char*,int ,int,int,int) ;
 int FUNC_9 (struct fc_port*) ;
 int FUNC_10 (struct fc_port*) ;
 int FUNC_11 (int ,TYPE_7__*) ;

__attribute__((used)) static void FUNC_12(struct qla_tgt_cmd *VAR_7)
{
 scsi_qla_host_t *VAR_8 = VAR_7->vha;
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 struct fc_port *VAR_10 = VAR_7->sess;
 struct atio_from_isp *VAR_11 = &VAR_7->atio;
 unsigned char *VAR_12;
 unsigned long VAR_13;
 uint32_t VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18 = 0;
 struct qla_qpair *VAR_19 = VAR_7->qpair;

 VAR_7->cmd_in_wq = 0;
 VAR_7->trc_flags |= VAR_3;

 if (VAR_7->aborted) {
  FUNC_1(VAR_6, VAR_8, 0xf082,
      "cmd with tag %u is aborted\n",
      VAR_7->atio.u.isp24.exchange_addr);
  goto out_term;
 }

 FUNC_5(&VAR_7->cmd_lock);
 VAR_12 = &VAR_11->u.isp24.fcp_cmnd.cdb[0];
 VAR_7->se_cmd.tag = VAR_11->u.isp24.exchange_addr;

 if (VAR_11->u.isp24.fcp_cmnd.rddata &&
     VAR_11->u.isp24.fcp_cmnd.wrdata) {
  VAR_18 = 1;
  VAR_17 = VAR_2;
 } else if (VAR_11->u.isp24.fcp_cmnd.rddata)
  VAR_17 = VAR_0;
 else if (VAR_11->u.isp24.fcp_cmnd.wrdata)
  VAR_17 = VAR_2;
 else
  VAR_17 = VAR_1;

 VAR_16 = FUNC_3(VAR_8,
     VAR_11->u.isp24.fcp_cmnd.task_attr);
 VAR_14 = FUNC_0(VAR_11);

 VAR_15 = VAR_9->tgt.tgt_ops->handle_cmd(VAR_8, VAR_7, VAR_12, VAR_14,
              VAR_16, VAR_17, VAR_18);
 if (VAR_15 != 0)
  goto out_term;



 VAR_9->tgt.tgt_ops->put_sess(VAR_10);
 return;

out_term:
 FUNC_1(VAR_5, VAR_8, 0x3060, "Terminating work cmd %p", VAR_7);




 VAR_7->trc_flags |= VAR_4;
 FUNC_6(VAR_19->qp_lock_ptr, VAR_13);
 FUNC_4(VAR_19, ((void*)0), &VAR_7->atio, 1, 0);

 FUNC_2(VAR_8);
 FUNC_11(VAR_10->se_sess, &VAR_7->se_cmd);
 FUNC_7(VAR_19->qp_lock_ptr, VAR_13);

 VAR_9->tgt.tgt_ops->put_sess(VAR_10);
}
