
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {TYPE_2__* hw; } ;
struct rsp_que {int dummy; } ;
struct qla_tgt_sess_op {int work; struct rsp_que* rsp; int chip_reset; struct scsi_qla_host* vha; int atio; } ;
typedef int response_t ;
struct TYPE_4__ {TYPE_1__* base_qpair; } ;
struct TYPE_3__ {int chip_reset; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct qla_tgt_sess_op* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct scsi_qla_host*,struct rsp_que*,int *) ;
 int FUNC_4 (int ,int *) ;

void
FUNC_5(struct scsi_qla_host *VAR_3, struct rsp_que *VAR_4,
    response_t *VAR_5)
{
 struct qla_tgt_sess_op *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);

 if (!VAR_6) {



  FUNC_3(VAR_3, VAR_4, VAR_5);
  return;
 }

 FUNC_2(&VAR_6->atio, VAR_5, sizeof(*VAR_5));
 VAR_6->vha = VAR_3;
 VAR_6->chip_reset = VAR_3->hw->base_qpair->chip_reset;
 VAR_6->rsp = VAR_4;
 FUNC_0(&VAR_6->work, VAR_2);
 FUNC_4(VAR_1, &VAR_6->work);
 return;
}
