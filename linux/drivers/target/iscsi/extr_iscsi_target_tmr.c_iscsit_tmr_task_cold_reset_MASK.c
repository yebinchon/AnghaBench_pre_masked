
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_tmr_req {int dummy; } ;
struct iscsi_session {TYPE_2__* se_sess; } ;
struct iscsi_node_attrib {int tmr_cold_reset; } ;
struct iscsi_conn {struct iscsi_session* sess; } ;
struct TYPE_4__ {TYPE_1__* se_node_acl; } ;
struct TYPE_3__ {int initiatorname; } ;


 struct iscsi_node_attrib* FUNC_0 (struct iscsi_session*) ;
 int FUNC_1 (char*,int ) ;

int FUNC_2(
 struct iscsi_conn *VAR_0,
 struct iscsi_tmr_req *VAR_1,
 unsigned char *VAR_2)
{
 struct iscsi_session *VAR_3 = VAR_0->sess;
 struct iscsi_node_attrib *VAR_4 = FUNC_0(VAR_3);

 if (!VAR_4->tmr_cold_reset) {
  FUNC_1("TMR Opcode TARGET_COLD_RESET authorization"
   " failed for Initiator Node: %s\n",
   VAR_3->se_sess->se_node_acl->initiatorname);
  return -1;
 }



 return 0;
}
