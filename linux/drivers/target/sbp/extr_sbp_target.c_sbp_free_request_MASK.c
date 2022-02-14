
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int dummy; } ;
struct se_cmd {struct se_session* se_sess; } ;
struct sbp_target_request {int cmd_buf; int pg_tbl; struct se_cmd se_cmd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct se_session*,struct se_cmd*) ;

__attribute__((used)) static void FUNC_2(struct sbp_target_request *VAR_0)
{
 struct se_cmd *VAR_1 = &VAR_0->se_cmd;
 struct se_session *VAR_2 = VAR_1->se_sess;

 FUNC_0(VAR_0->pg_tbl);
 FUNC_0(VAR_0->cmd_buf);

 FUNC_1(VAR_2, VAR_1);
}
