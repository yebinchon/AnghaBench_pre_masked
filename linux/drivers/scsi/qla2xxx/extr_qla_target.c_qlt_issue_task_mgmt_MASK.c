
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_10__ {TYPE_1__* qla_tgt; } ;
struct scsi_qla_host {int vp_idx; TYPE_2__ vha_tgt; struct qla_hw_data* hw; } ;
struct TYPE_16__ {int cpuid; } ;
struct TYPE_11__ {int imm_ntfy; } ;
struct qla_tgt_mgmt_cmd {int tmr_func; int flags; int work; TYPE_8__ se_cmd; int qpair; int unpacked_lun; struct scsi_qla_host* vha; int reset_count; TYPE_3__ orig_iocb; struct fc_port* sess; } ;
struct qla_qpair_hint {int cpuid; int qpair; } ;
struct qla_hw_data {TYPE_4__* base_qpair; } ;
struct fc_port {struct scsi_qla_host* vha; } ;
struct TYPE_13__ {int s_id; } ;
struct TYPE_14__ {TYPE_5__ fcp_hdr; } ;
struct TYPE_15__ {TYPE_6__ isp24; } ;
struct atio_from_isp {TYPE_7__ u; } ;
struct TYPE_12__ {int chip_reset; } ;
struct TYPE_9__ {struct qla_qpair_hint* qphints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct scsi_qla_host*,int ,int ) ;
 int FUNC_2 (int *,void*,int) ;
 struct qla_tgt_mgmt_cmd* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct qla_tgt_mgmt_cmd*,int ,int) ;
 int FUNC_5 (int ,struct scsi_qla_host*,int,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct qla_qpair_hint* FUNC_6 (struct scsi_qla_host*,int ) ;
 int FUNC_7 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct fc_port *VAR_6, u64 VAR_7,
 int VAR_8, void *VAR_9, int VAR_10)
{
 struct scsi_qla_host *VAR_11 = VAR_6->vha;
 struct qla_hw_data *VAR_12 = VAR_11->hw;
 struct qla_tgt_mgmt_cmd *VAR_13;
 struct atio_from_isp *VAR_14 = (struct atio_from_isp *)VAR_9;
 struct qla_qpair_hint *VAR_15 = &VAR_11->vha_tgt.qla_tgt->qphints[0];

 VAR_13 = FUNC_3(VAR_3, VAR_1);
 if (!VAR_13) {
  FUNC_5(VAR_2, VAR_11, 0x10009,
      "qla_target(%d): Allocation of management "
      "command failed, some commands and their data could "
      "leak\n", VAR_11->vp_idx);
  return -VAR_0;
 }
 FUNC_4(VAR_13, 0, sizeof(*VAR_13));
 VAR_13->sess = VAR_6;

 if (VAR_9) {
  FUNC_2(&VAR_13->orig_iocb.imm_ntfy, VAR_9,
      sizeof(VAR_13->orig_iocb.imm_ntfy));
 }
 VAR_13->tmr_func = VAR_8;
 VAR_13->flags = VAR_10;
 VAR_13->reset_count = VAR_12->base_qpair->chip_reset;
 VAR_13->qpair = VAR_15->qpair;
 VAR_13->vha = VAR_11;
 VAR_13->se_cmd.cpuid = VAR_15->cpuid;
 VAR_13->unpacked_lun = VAR_7;

 switch (VAR_8) {
 case 131:
 case 132:
 case 134:
  FUNC_1(VAR_11, VAR_7, VAR_14->u.isp24.fcp_hdr.s_id);

 case 133:
  VAR_15 = FUNC_6(VAR_11, VAR_13->unpacked_lun);
  VAR_13->qpair = VAR_15->qpair;
  VAR_13->se_cmd.cpuid = VAR_15->cpuid;
  break;

 case 128:
 case 129:
 case 130:
 case 135:
 default:

  break;
 }

 FUNC_0(&VAR_13->work, VAR_5);
 FUNC_7(VAR_13->se_cmd.cpuid, VAR_4,
     &VAR_13->work);

 return 0;
}
