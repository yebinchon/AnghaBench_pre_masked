
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {struct qla_tgt* qla_tgt; } ;
struct scsi_qla_host {int host_no; int vp_idx; TYPE_1__ vha_tgt; struct qla_hw_data* hw; } ;
struct TYPE_7__ {int task_flags; int lun; int seq_id; int status; } ;
struct TYPE_6__ {int status_subcode; int nport_handle; } ;
struct TYPE_8__ {TYPE_3__ isp2x; TYPE_2__ isp24; } ;
struct imm_ntfy_from_isp {TYPE_4__ u; } ;
struct qla_tgt {int link_reinit_iocb_pending; struct imm_ntfy_from_isp link_reinit_iocb; } ;
struct qla_hw_data {int base_qpair; int hardware_lock; } ;
struct atio_from_isp {int dummy; } ;


 int FUNC_0 (struct qla_hw_data*,struct atio_from_isp*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct imm_ntfy_from_isp*,struct imm_ntfy_from_isp*,int) ;
 int FUNC_4 (int ,struct scsi_qla_host*,int,char*,int ,...) ;
 int VAR_3 ;
 int FUNC_5 (struct scsi_qla_host*,struct imm_ntfy_from_isp*) ;
 int FUNC_6 (struct scsi_qla_host*,struct imm_ntfy_from_isp*) ;
 int FUNC_7 (struct scsi_qla_host*,struct imm_ntfy_from_isp*,int ) ;
 int FUNC_8 (int ,struct imm_ntfy_from_isp*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct scsi_qla_host *VAR_4,
 struct imm_ntfy_from_isp *VAR_5)
{
 struct qla_hw_data *VAR_6 = VAR_4->hw;
 uint32_t VAR_7 = 0;
 int VAR_8 = 1;
 uint16_t VAR_9;

 FUNC_2(&VAR_6->hardware_lock);

 VAR_9 = FUNC_1(VAR_5->u.isp2x.status);
 switch (VAR_9) {
 case 132:
 {
  FUNC_4(VAR_3, VAR_4, 0xf032,
      "qla_target(%d): LIP reset (loop %#x), subcode %x\n",
      VAR_4->vp_idx, FUNC_1(VAR_5->u.isp24.nport_handle),
      VAR_5->u.isp24.status_subcode);

  if (FUNC_7(VAR_4, VAR_5, VAR_0) == 0)
   VAR_8 = 0;
  break;
 }

 case 133:
 {
  struct qla_tgt *VAR_10 = VAR_4->vha_tgt.qla_tgt;

  FUNC_4(VAR_3, VAR_4, 0xf033,
      "qla_target(%d): LINK REINIT (loop %#x, "
      "subcode %x)\n", VAR_4->vp_idx,
      FUNC_1(VAR_5->u.isp24.nport_handle),
      VAR_5->u.isp24.status_subcode);
  if (VAR_10->link_reinit_iocb_pending) {
   FUNC_8(VAR_6->base_qpair,
       &VAR_10->link_reinit_iocb, 0, 0, 0, 0, 0, 0);
  }
  FUNC_3(&VAR_10->link_reinit_iocb, VAR_5, sizeof(*VAR_5));
  VAR_10->link_reinit_iocb_pending = 1;




  VAR_8 = 0;
  break;
 }

 case 129:
  FUNC_4(VAR_3, VAR_4, 0xf034,
      "qla_target(%d): Port logout (loop "
      "%#x, subcode %x)\n", VAR_4->vp_idx,
      FUNC_1(VAR_5->u.isp24.nport_handle),
      VAR_5->u.isp24.status_subcode);

  if (FUNC_7(VAR_4, VAR_5, VAR_2) == 0)
   VAR_8 = 0;

  break;

 case 135:
  FUNC_4(VAR_3, VAR_4, 0xf035,
      "qla_target(%d): Global TPRLO (%x)\n", VAR_4->vp_idx, VAR_9);
  if (FUNC_7(VAR_4, VAR_5, VAR_1) == 0)
   VAR_8 = 0;

  break;

 case 130:
  FUNC_4(VAR_3, VAR_4, 0xf036,
      "qla_target(%d): Port config changed (%x)\n", VAR_4->vp_idx,
      VAR_9);
  if (FUNC_7(VAR_4, VAR_5, VAR_0) == 0)
   VAR_8 = 0;

  break;

 case 136:
  FUNC_4(VAR_3, VAR_4, 0xf06a,
      "qla_target(%d): Link failure detected\n",
      VAR_4->vp_idx);

  if (FUNC_7(VAR_4, VAR_5, VAR_1) == 0)
   VAR_8 = 0;
  break;

 case 134:
  FUNC_4(VAR_3, VAR_4, 0xf06b,
      "qla_target(%d): Cannot provide requested "
      "capability (IOCB overflowed the immediate notify "
      "resource count)\n", VAR_4->vp_idx);
  break;

 case 138:
  FUNC_4(VAR_3, VAR_4, 0xf037,
      "qla_target(%d): Abort Task (S %08x I %#x -> "
      "L %#x)\n", VAR_4->vp_idx,
      FUNC_1(VAR_5->u.isp2x.seq_id),
      FUNC_0(VAR_6, (struct atio_from_isp *)VAR_5),
      FUNC_1(VAR_5->u.isp2x.lun));
  if (FUNC_6(VAR_4, VAR_5) == 0)
   VAR_8 = 0;
  break;

 case 128:
  FUNC_4(VAR_3, VAR_4, 0xf06c,
      "qla_target(%d): Out of resources, host %ld\n",
      VAR_4->vp_idx, VAR_4->host_no);
  break;

 case 131:
  FUNC_4(VAR_3, VAR_4, 0xf038,
      "qla_target(%d): Immediate notify task %x\n",
      VAR_4->vp_idx, VAR_5->u.isp2x.task_flags);
  break;

 case 137:
  if (FUNC_5(VAR_4, VAR_5) == 0)
   VAR_8 = 0;
  break;
 default:
  FUNC_4(VAR_3, VAR_4, 0xf06d,
      "qla_target(%d): Received unknown immediate "
      "notify status %x\n", VAR_4->vp_idx, VAR_9);
  break;
 }

 if (VAR_8)
  FUNC_8(VAR_6->base_qpair, VAR_5, VAR_7, 0, 0, 0,
      0, 0);
}
