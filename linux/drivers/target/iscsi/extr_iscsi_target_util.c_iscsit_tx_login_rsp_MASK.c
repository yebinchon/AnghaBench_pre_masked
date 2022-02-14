
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct iscsi_login_rsp {int itt; void* status_detail; void* status_class; int opcode; } ;
struct iscsi_login {int login_failed; int * rsp; } ;
struct iscsi_conn {TYPE_1__* conn_transport; int login_itt; struct iscsi_login* conn_login; } ;
struct TYPE_2__ {int (* iscsit_put_login_tx ) (struct iscsi_conn*,struct iscsi_login*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_conn*,void*,void*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_login*,int ) ;

int FUNC_3(struct iscsi_conn *VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct iscsi_login_rsp *VAR_5;
 struct iscsi_login *VAR_6 = VAR_2->conn_login;

 VAR_6->login_failed = 1;
 FUNC_0(VAR_2, VAR_3, VAR_4);

 FUNC_1(&VAR_6->rsp[0], 0, VAR_0);

 VAR_5 = (struct iscsi_login_rsp *)&VAR_6->rsp[0];
 VAR_5->opcode = VAR_1;
 VAR_5->status_class = VAR_3;
 VAR_5->status_detail = VAR_4;
 VAR_5->itt = VAR_2->login_itt;

 return VAR_2->conn_transport->iscsit_put_login_tx(VAR_2, VAR_6, 0);
}
