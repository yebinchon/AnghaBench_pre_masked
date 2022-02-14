
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcm_qla2xxx_lport {int dummy; } ;
struct se_session {int dummy; } ;
struct qla_tgt {struct qla_hw_data* ha; } ;
struct qla_hw_data {int pdev; } ;
struct fc_port {struct se_session* se_sess; struct qla_tgt* tgt; } ;
struct TYPE_4__ {struct tcm_qla2xxx_lport* target_lport_ptr; } ;
struct TYPE_5__ {TYPE_1__ vha_tgt; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct se_session*) ;
 int FUNC_6 (struct se_session*) ;

__attribute__((used)) static void FUNC_7(struct fc_port *VAR_0)
{
 struct qla_tgt *VAR_1 = VAR_0->tgt;
 struct qla_hw_data *VAR_2 = VAR_1->ha;
 scsi_qla_host_t *VAR_3 = FUNC_3(VAR_2->pdev);
 struct se_session *VAR_4;
 struct tcm_qla2xxx_lport *VAR_5;

 FUNC_0(FUNC_2());

 VAR_4 = VAR_0->se_sess;
 if (!VAR_4) {
  FUNC_4("struct fc_port->se_sess is NULL\n");
  FUNC_1();
  return;
 }

 VAR_5 = VAR_3->vha_tgt.target_lport_ptr;
 if (!VAR_5) {
  FUNC_4("Unable to locate struct tcm_qla2xxx_lport\n");
  FUNC_1();
  return;
 }
 FUNC_6(VAR_4);

 FUNC_5(VAR_4);
}
