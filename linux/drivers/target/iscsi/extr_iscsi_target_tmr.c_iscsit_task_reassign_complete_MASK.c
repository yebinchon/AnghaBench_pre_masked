
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tmr_req {struct iscsi_cmd* ref_cmd; } ;
struct iscsi_conn {int cid; } ;
struct iscsi_cmd {int iscsi_opcode; int init_task_tag; struct iscsi_conn* conn; } ;




 int FUNC_0 (struct iscsi_tmr_req*,struct iscsi_conn*) ;
 int FUNC_1 (struct iscsi_tmr_req*,struct iscsi_conn*) ;
 int FUNC_2 (char*,int,int ,int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(
 struct iscsi_tmr_req *VAR_0,
 struct iscsi_conn *VAR_1)
{
 struct iscsi_cmd *VAR_2;
 int VAR_3 = 0;

 if (!VAR_0->ref_cmd) {
  FUNC_3("TMR Request is missing a RefCmd struct iscsi_cmd.\n");
  return -1;
 }
 VAR_2 = VAR_0->ref_cmd;

 VAR_2->conn = VAR_1;

 switch (VAR_2->iscsi_opcode) {
 case 129:
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  break;
 default:
   FUNC_3("Illegal iSCSI Opcode 0x%02x during"
   " command reallegiance\n", VAR_2->iscsi_opcode);
  return -1;
 }

 if (VAR_3 != 0)
  return VAR_3;

 FUNC_2("Completed connection reallegiance for Opcode: 0x%02x,"
  " ITT: 0x%08x to CID: %hu.\n", VAR_2->iscsi_opcode,
   VAR_2->init_task_tag, VAR_1->cid);

 return 0;
}
