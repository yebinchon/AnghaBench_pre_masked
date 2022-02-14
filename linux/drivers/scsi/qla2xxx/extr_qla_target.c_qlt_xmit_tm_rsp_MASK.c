
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {int online; } ;
struct scsi_qla_host {struct qla_hw_data* hw; TYPE_1__ flags; } ;
struct TYPE_17__ {scalar_t__ entry_type; } ;
struct TYPE_18__ {TYPE_4__ raw; } ;
struct TYPE_19__ {TYPE_5__ u; } ;
struct TYPE_15__ {int status_subcode; } ;
struct TYPE_16__ {TYPE_2__ isp24; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
struct TYPE_20__ {TYPE_6__ atio; TYPE_10__ imm_ntfy; } ;
struct qla_tgt_mgmt_cmd {int fc_tm_rsp; TYPE_7__ orig_iocb; TYPE_11__* sess; int flags; int reset_count; struct qla_qpair* qpair; } ;
struct qla_qpair {int qp_lock_ptr; int chip_reset; } ;
struct TYPE_22__ {TYPE_8__* tgt_ops; } ;
struct qla_hw_data {TYPE_9__ tgt; int base_qpair; } ;
struct TYPE_21__ {int (* free_mcmd ) (struct qla_tgt_mgmt_cmd*) ;} ;
struct TYPE_13__ {struct qla_tgt_mgmt_cmd* port_name; struct scsi_qla_host* vha; } ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,struct qla_tgt_mgmt_cmd*,int ,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (struct qla_qpair*,struct qla_tgt_mgmt_cmd*,int ) ;
 int FUNC_3 (struct qla_tgt_mgmt_cmd*) ;
 int FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (int ,TYPE_10__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (struct qla_tgt_mgmt_cmd*) ;
 int FUNC_9 (struct qla_tgt_mgmt_cmd*) ;

void FUNC_10(struct qla_tgt_mgmt_cmd *VAR_5)
{
 struct scsi_qla_host *VAR_6 = VAR_5->sess->vha;
 struct qla_hw_data *VAR_7 = VAR_6->hw;
 unsigned long VAR_8;
 struct qla_qpair *VAR_9 = VAR_5->qpair;
 bool VAR_10 = 1;

 FUNC_0(VAR_4, VAR_6, 0xf013,
     "TM response mcmd (%p) status %#x state %#x",
     VAR_5, VAR_5->fc_tm_rsp, VAR_5->flags);

 FUNC_6(VAR_9->qp_lock_ptr, VAR_8);

 if (!VAR_6->flags.online || VAR_5->reset_count != VAR_9->chip_reset) {




  FUNC_0(VAR_2, VAR_6, 0xe100,
   "RESET-TMR online/active/old-count/new-count = %d/%d/%d/%d.\n",
   VAR_6->flags.online, FUNC_1(VAR_6),
   VAR_5->reset_count, VAR_9->chip_reset);
  VAR_7->tgt.tgt_ops->free_mcmd(VAR_5);
  FUNC_7(VAR_9->qp_lock_ptr, VAR_8);
  return;
 }

 if (VAR_5->flags == VAR_1) {
  switch (VAR_5->orig_iocb.imm_ntfy.u.isp24.status_subcode) {
  case 130:
  case 129:
  case 128:
   FUNC_0(VAR_3, VAR_6, 0x2106,
       "TM response logo %8phC status %#x state %#x",
       VAR_5->sess->port_name, VAR_5->fc_tm_rsp,
       VAR_5->flags);
   FUNC_4(VAR_5->sess);
   break;
  default:
   FUNC_5(VAR_6->hw->base_qpair,
       &VAR_5->orig_iocb.imm_ntfy, 0, 0, 0, 0, 0, 0);
   break;
  }
 } else {
  if (VAR_5->orig_iocb.atio.u.raw.entry_type == VAR_0) {
   FUNC_3(VAR_5);
   VAR_10 = 0;
  } else
   FUNC_2(VAR_9, VAR_5,
       VAR_5->fc_tm_rsp);
 }
 if (VAR_10)
  VAR_7->tgt.tgt_ops->free_mcmd(VAR_5);

 FUNC_7(VAR_9->qp_lock_ptr, VAR_8);
}
