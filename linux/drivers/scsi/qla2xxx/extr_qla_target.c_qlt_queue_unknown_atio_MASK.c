
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct qla_tgt_sess_op {int cmd_list; int atio; TYPE_3__* vha; } ;
struct qla_tgt {scalar_t__ tgt_stop; } ;
struct atio_from_isp {int dummy; } ;
struct TYPE_6__ {struct qla_tgt* qla_tgt; } ;
struct TYPE_8__ {TYPE_2__* hw; int unknown_atio_work; int cmd_list_lock; int unknown_atio_list; int vp_idx; TYPE_1__ vha_tgt; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_7__ {int base_qpair; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct qla_tgt_sess_op* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,struct atio_from_isp*,int) ;
 int FUNC_4 (int ,TYPE_3__*,int,char*,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *,struct atio_from_isp*,int ,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(scsi_qla_host_t *VAR_2,
 struct atio_from_isp *VAR_3, uint8_t VAR_4)
{
 struct qla_tgt_sess_op *VAR_5;
 struct qla_tgt *VAR_6 = VAR_2->vha_tgt.qla_tgt;
 unsigned long VAR_7;

 if (VAR_6->tgt_stop) {
  FUNC_4(VAR_1, VAR_2, 0x502c,
      "qla_target(%d): dropping unknown ATIO_TYPE7, because tgt is being stopped",
      VAR_2->vp_idx);
  goto out_term;
 }

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (VAR_5 == ((void*)0))
  goto out_term;

 VAR_5->vha = VAR_2;
 FUNC_3(&VAR_5->atio, VAR_3, sizeof(*VAR_3));
 FUNC_0(&VAR_5->cmd_list);

 FUNC_7(&VAR_2->cmd_list_lock, VAR_7);
 FUNC_2(&VAR_5->cmd_list, &VAR_2->unknown_atio_list);
 FUNC_8(&VAR_2->cmd_list_lock, VAR_7);

 FUNC_6(&VAR_2->unknown_atio_work, 1);

out:
 return;

out_term:
 FUNC_5(VAR_2->hw->base_qpair, ((void*)0), VAR_3, VAR_4, 0);
 goto out;
}
