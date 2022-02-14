
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct tcm_qla2xxx_nacl {struct fc_port* fc_port; } ;
struct tcm_qla2xxx_lport {scalar_t__ lport_loopid_map; } ;
struct tcm_qla2xxx_fc_loopid {struct se_node_acl* se_nacl; } ;
struct se_session {int dummy; } ;
struct se_node_acl {int initiatorname; } ;
struct fc_port {struct se_session* se_sess; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(
 struct tcm_qla2xxx_lport *VAR_0,
 struct se_node_acl *VAR_1,
 struct tcm_qla2xxx_nacl *VAR_2,
 struct se_session *VAR_3,
 struct fc_port *VAR_4,
 uint16_t VAR_5)
{
 struct se_node_acl *VAR_6;
 struct tcm_qla2xxx_fc_loopid *VAR_7;

 FUNC_0("set_sess_by_loop_id: Using loop_id: 0x%04x\n", VAR_5);

 VAR_7 = &((struct tcm_qla2xxx_fc_loopid *)
   VAR_0->lport_loopid_map)[VAR_5];

 VAR_6 = VAR_7->se_nacl;
 if (!VAR_6) {
  FUNC_0("Setting up new fc_loopid->se_nacl to new_se_nacl\n");
  VAR_7->se_nacl = VAR_1;
  if (VAR_4->se_sess != VAR_3)
   VAR_4->se_sess = VAR_3;
  if (VAR_2->fc_port != VAR_4)
   VAR_2->fc_port = VAR_4;
  return;
 }

 if (VAR_2->fc_port) {
  if (VAR_1 == ((void*)0)) {
   FUNC_0("Clearing nacl->fc_port and fc_loopid->se_nacl\n");
   VAR_7->se_nacl = ((void*)0);
   VAR_2->fc_port = ((void*)0);
   return;
  }

  FUNC_0("Replacing existing nacl->fc_port and fc_loopid->se_nacl\n");
  VAR_7->se_nacl = VAR_1;
  if (VAR_4->se_sess != VAR_3)
   VAR_4->se_sess = VAR_3;
  if (VAR_2->fc_port != VAR_4)
   VAR_2->fc_port = VAR_4;
  return;
 }

 if (VAR_1 == ((void*)0)) {
  FUNC_0("Clearing fc_loopid->se_nacl\n");
  VAR_7->se_nacl = ((void*)0);
  return;
 }

 FUNC_0("Replacing existing fc_loopid->se_nacl w/o active nacl->fc_port\n");
 VAR_7->se_nacl = VAR_1;
 if (VAR_4->se_sess != VAR_3)
  VAR_4->se_sess = VAR_3;
 if (VAR_2->fc_port != VAR_4)
  VAR_2->fc_port = VAR_4;

 FUNC_0("Setup nacl->fc_port %p by loop_id for se_nacl: %p, initiatorname: %s\n",
     VAR_2->fc_port, VAR_1, VAR_1->initiatorname);
}
