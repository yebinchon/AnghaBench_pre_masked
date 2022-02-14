
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_login {int first_request; struct iscsi_login* req_buf; void* rsp_buf; struct iscsi_conn* conn; } ;
struct iscsi_conn {struct iscsi_login* conn_login; struct iscsi_login* login; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_login*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct iscsi_login *FUNC_3(struct iscsi_conn *VAR_2)
{
 struct iscsi_login *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct iscsi_login), VAR_0);
 if (!VAR_3) {
  FUNC_2("Unable to allocate memory for struct iscsi_login.\n");
  return ((void*)0);
 }
 VAR_2->login = VAR_3;
 VAR_3->conn = VAR_2;
 VAR_3->first_request = 1;

 VAR_3->req_buf = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3->req_buf) {
  FUNC_2("Unable to allocate memory for response buffer.\n");
  goto out_login;
 }

 VAR_3->rsp_buf = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3->rsp_buf) {
  FUNC_2("Unable to allocate memory for request buffer.\n");
  goto out_req_buf;
 }

 VAR_2->conn_login = VAR_3;

 return VAR_3;

out_req_buf:
 FUNC_0(VAR_3->req_buf);
out_login:
 FUNC_0(VAR_3);
 return ((void*)0);
}
