
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int queued_cmdsn; int cmdsn; int max_cmdsn; int exp_cmdsn; } ;
struct iscsi_conn {struct iscsi_session* session; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_session*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct iscsi_conn *VAR_1)
{
 struct iscsi_session *VAR_2 = VAR_1->session;




 if (!FUNC_1(VAR_2->queued_cmdsn, VAR_2->max_cmdsn)) {
  FUNC_0(VAR_2, "iSCSI CmdSN closed. ExpCmdSn "
      "%u MaxCmdSN %u CmdSN %u/%u\n",
      VAR_2->exp_cmdsn, VAR_2->max_cmdsn,
      VAR_2->cmdsn, VAR_2->queued_cmdsn);
  return -VAR_0;
 }
 return 0;
}
