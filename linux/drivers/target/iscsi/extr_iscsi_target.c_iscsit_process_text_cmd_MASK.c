
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_text {int opcode; int cmdsn; int exp_statsn; int ttt; } ;
struct iscsi_conn {int cmd_lock; int conn_cmd_list; } ;
struct iscsi_cmd {unsigned char* text_in_ptr; int targ_xfer_tag; int i_conn_node; int cmd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iscsi_conn*,int) ;
 int FUNC_2 (struct iscsi_cmd*,int ) ;
 int FUNC_3 (struct iscsi_cmd*,int ,unsigned char*) ;
 int FUNC_4 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 unsigned char* FUNC_9 (unsigned char*,char) ;
 scalar_t__ FUNC_10 (char*,unsigned char*,int) ;

int
FUNC_11(struct iscsi_conn *VAR_5, struct iscsi_cmd *VAR_6,
   struct iscsi_text *VAR_7)
{
 unsigned char *VAR_8 = VAR_6->text_in_ptr, *VAR_9;
 int VAR_10;

 if (!VAR_8) {
  VAR_6->targ_xfer_tag = FUNC_0(VAR_7->ttt);
  if (VAR_6->targ_xfer_tag == 0xFFFFFFFF) {
   FUNC_6("Unable to locate text_in buffer for sendtargets"
          " discovery\n");
   goto reject;
  }
  goto empty_sendtargets;
 }
 if (FUNC_10("SendTargets", VAR_8, 11) != 0) {
  FUNC_6("Received Text Data that is not"
   " SendTargets, cannot continue.\n");
  goto reject;
 }
 VAR_9 = FUNC_9(VAR_8, '=');
 if (!VAR_9) {
  FUNC_6("No \"=\" separator found in Text Data,"
   "  cannot continue.\n");
  goto reject;
 }
 if (!FUNC_10("=All", VAR_9, 4)) {
  VAR_6->cmd_flags |= VAR_1;
 } else if (!FUNC_10("=iqn.", VAR_9, 5) ||
     !FUNC_10("=eui.", VAR_9, 5)) {
  VAR_6->cmd_flags |= VAR_2;
 } else {
  FUNC_6("Unable to locate valid SendTargets=%s value\n", VAR_9);
  goto reject;
 }

 FUNC_7(&VAR_5->cmd_lock);
 FUNC_5(&VAR_6->i_conn_node, &VAR_5->conn_cmd_list);
 FUNC_8(&VAR_5->cmd_lock);

empty_sendtargets:
 FUNC_1(VAR_5, FUNC_0(VAR_7->exp_statsn));

 if (!(VAR_7->opcode & VAR_3)) {
  VAR_10 = FUNC_4(VAR_5, VAR_6,
    (unsigned char *)VAR_7, VAR_7->cmdsn);
  if (VAR_10 == VAR_0)
   return -1;

  return 0;
 }

 return FUNC_2(VAR_6, 0);

reject:
 return FUNC_3(VAR_6, VAR_4,
     (unsigned char *)VAR_7);
}
