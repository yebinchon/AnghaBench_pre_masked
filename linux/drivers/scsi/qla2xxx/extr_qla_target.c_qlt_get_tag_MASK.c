
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct se_session {scalar_t__ sess_cmd_map; int sess_tag_pool; } ;
struct scsi_lun {int dummy; } ;
struct TYPE_13__ {int map_tag; int map_cpu; } ;
struct qla_tgt_cmd {int vp_idx; int reset_count; int unpacked_lun; int jiffies_at_alloc; scalar_t__ trc_flags; int conf_compl_supported; int loop_id; struct fc_port* sess; TYPE_2__ se_cmd; TYPE_8__* vha; int tgt; int state; int atio; int cmd_type; } ;
struct fc_port {int conf_compl_supported; int loop_id; struct se_session* se_sess; } ;
struct TYPE_14__ {int lun; } ;
struct TYPE_15__ {TYPE_3__ fcp_cmnd; } ;
struct TYPE_16__ {TYPE_4__ isp24; } ;
struct atio_from_isp {TYPE_5__ u; } ;
struct TYPE_12__ {int qla_tgt; } ;
struct TYPE_19__ {int vp_idx; TYPE_7__* hw; TYPE_1__ vha_tgt; } ;
typedef TYPE_8__ scsi_qla_host_t ;
struct TYPE_18__ {TYPE_6__* base_qpair; } ;
struct TYPE_17__ {int chip_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,struct atio_from_isp*,int) ;
 int FUNC_2 (struct qla_tgt_cmd*,int ,int) ;
 int FUNC_3 (TYPE_8__*,struct qla_tgt_cmd*) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (struct scsi_lun*) ;

__attribute__((used)) static struct qla_tgt_cmd *FUNC_7(scsi_qla_host_t *VAR_2,
           struct fc_port *VAR_3,
           struct atio_from_isp *VAR_4)
{
 struct se_session *VAR_5 = VAR_3->se_sess;
 struct qla_tgt_cmd *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_5(&VAR_5->sess_tag_pool, &VAR_8);
 if (VAR_7 < 0)
  return ((void*)0);

 VAR_6 = &((struct qla_tgt_cmd *)VAR_5->sess_cmd_map)[VAR_7];
 FUNC_2(VAR_6, 0, sizeof(struct qla_tgt_cmd));
 VAR_6->cmd_type = VAR_1;
 FUNC_1(&VAR_6->atio, VAR_4, sizeof(*VAR_4));
 VAR_6->state = VAR_0;
 VAR_6->tgt = VAR_2->vha_tgt.qla_tgt;
 FUNC_4(VAR_2);
 VAR_6->vha = VAR_2;
 VAR_6->se_cmd.map_tag = VAR_7;
 VAR_6->se_cmd.map_cpu = VAR_8;
 VAR_6->sess = VAR_3;
 VAR_6->loop_id = VAR_3->loop_id;
 VAR_6->conf_compl_supported = VAR_3->conf_compl_supported;

 VAR_6->trc_flags = 0;
 VAR_6->jiffies_at_alloc = FUNC_0();

 VAR_6->unpacked_lun = FUNC_6(
     (struct scsi_lun *)&VAR_4->u.isp24.fcp_cmnd.lun);
 FUNC_3(VAR_2, VAR_6);
 VAR_6->reset_count = VAR_2->hw->base_qpair->chip_reset;
 VAR_6->vp_idx = VAR_2->vp_idx;

 return VAR_6;
}
