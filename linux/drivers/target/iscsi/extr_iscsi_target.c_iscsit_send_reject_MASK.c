
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_reject {int reason; int statsn; } ;
struct iscsi_conn {TYPE_1__* conn_transport; int cid; } ;
struct iscsi_cmd {int buf_ptr; int * pdu; } ;
struct TYPE_2__ {int (* iscsit_xmit_pdu ) (struct iscsi_conn*,struct iscsi_cmd*,int *,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,struct iscsi_reject*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (struct iscsi_conn*,struct iscsi_cmd*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(
 struct iscsi_cmd *VAR_1,
 struct iscsi_conn *VAR_2)
{
 struct iscsi_reject *VAR_3 = (struct iscsi_reject *)&VAR_1->pdu[0];

 FUNC_0(VAR_1, VAR_2, VAR_3);

 FUNC_2("Built Reject PDU StatSN: 0x%08x, Reason: 0x%02x,"
  " CID: %hu\n", FUNC_1(VAR_3->statsn), VAR_3->reason, VAR_2->cid);

 return VAR_2->conn_transport->iscsit_xmit_pdu(VAR_2, VAR_1, ((void*)0),
           VAR_1->buf_ptr,
           VAR_0);
}
