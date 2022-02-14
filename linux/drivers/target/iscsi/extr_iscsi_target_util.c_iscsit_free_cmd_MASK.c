
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {scalar_t__ se_sess; scalar_t__ se_tfo; } ;
struct iscsi_cmd {int i_conn_node; struct se_cmd se_cmd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct iscsi_cmd*,int) ;
 int FUNC_2 (struct iscsi_cmd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct se_cmd*,int) ;

void FUNC_6(struct iscsi_cmd *VAR_0, bool VAR_1)
{
 struct se_cmd *VAR_2 = VAR_0->se_cmd.se_tfo ? &VAR_0->se_cmd : ((void*)0);
 int VAR_3;

 FUNC_0(!FUNC_3(&VAR_0->i_conn_node));

 FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {
  VAR_3 = FUNC_5(VAR_2, VAR_1);
  if (!VAR_3 && VAR_1 && VAR_2->se_sess) {
   FUNC_1(VAR_0, VAR_1);
   FUNC_4(VAR_2);
  }
 } else {
  FUNC_2(VAR_0);
 }
}
