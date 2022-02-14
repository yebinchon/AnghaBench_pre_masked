
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int qla_tgt; } ;
struct scsi_qla_host {TYPE_3__ vha_tgt; int vp_idx; struct qla_hw_data* hw; } ;
struct TYPE_5__ {int sess_lock; TYPE_1__* tgt_ops; } ;
struct qla_hw_data {TYPE_2__ tgt; } ;
struct imm_ntfy_from_isp {int dummy; } ;
struct fc_port {int dummy; } ;
struct atio_from_isp {int dummy; } ;
struct TYPE_4__ {struct fc_port* (* find_sess_by_loop_id ) (struct scsi_qla_host*,int) ;} ;


 int FUNC_0 (struct qla_hw_data*,struct atio_from_isp*) ;
 int VAR_0 ;
 int FUNC_1 (struct scsi_qla_host*,struct imm_ntfy_from_isp*,struct fc_port*) ;
 int FUNC_2 (int ,struct scsi_qla_host*,int,char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,struct imm_ntfy_from_isp*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct fc_port* FUNC_6 (struct scsi_qla_host*,int) ;

__attribute__((used)) static int FUNC_7(struct scsi_qla_host *VAR_2,
 struct imm_ntfy_from_isp *VAR_3)
{
 struct qla_hw_data *VAR_4 = VAR_2->hw;
 struct fc_port *VAR_5;
 int VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_0(VAR_4, (struct atio_from_isp *)VAR_3);

 FUNC_4(&VAR_4->tgt.sess_lock, VAR_7);
 VAR_5 = VAR_4->tgt.tgt_ops->find_sess_by_loop_id(VAR_2, VAR_6);
 FUNC_5(&VAR_4->tgt.sess_lock, VAR_7);

 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_1, VAR_2, 0xf025,
      "qla_target(%d): task abort for unexisting "
      "session\n", VAR_2->vp_idx);
  return FUNC_3(VAR_2->vha_tgt.qla_tgt,
      VAR_0, VAR_3, sizeof(*VAR_3));
 }

 return FUNC_1(VAR_2, VAR_3, VAR_5);
}
