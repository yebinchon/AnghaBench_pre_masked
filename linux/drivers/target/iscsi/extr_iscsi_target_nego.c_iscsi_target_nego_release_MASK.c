
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_login {struct iscsi_login* rsp_buf; struct iscsi_login* req_buf; } ;
struct iscsi_conn {struct iscsi_login* conn_login; } ;


 int FUNC_0 (struct iscsi_login*) ;

void FUNC_1(struct iscsi_conn *VAR_0)
{
 struct iscsi_login *VAR_1 = VAR_0->conn_login;

 if (!VAR_1)
  return;

 FUNC_0(VAR_1->req_buf);
 FUNC_0(VAR_1->rsp_buf);
 FUNC_0(VAR_1);

 VAR_0->conn_login = ((void*)0);
}
