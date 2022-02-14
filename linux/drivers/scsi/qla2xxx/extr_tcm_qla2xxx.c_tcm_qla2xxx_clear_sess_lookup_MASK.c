
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcm_qla2xxx_nacl {int dummy; } ;
struct tcm_qla2xxx_lport {int dummy; } ;
struct se_session {int dummy; } ;
struct fc_port {int loop_id; int d_id; struct se_session* se_sess; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tcm_qla2xxx_lport*,int *,struct tcm_qla2xxx_nacl*,struct se_session*,struct fc_port*,int ) ;
 int FUNC_2 (struct tcm_qla2xxx_lport*,int *,struct tcm_qla2xxx_nacl*,struct se_session*,struct fc_port*,int ) ;

__attribute__((used)) static void FUNC_3(struct tcm_qla2xxx_lport *VAR_0,
  struct tcm_qla2xxx_nacl *VAR_1, struct fc_port *VAR_2)
{
 struct se_session *VAR_3 = VAR_2->se_sess;

 FUNC_2(VAR_0, ((void*)0), VAR_1, VAR_3,
         VAR_2, FUNC_0(VAR_2->d_id));
 FUNC_1(VAR_0, ((void*)0), VAR_1, VAR_3,
    VAR_2, VAR_2->loop_id);
}
