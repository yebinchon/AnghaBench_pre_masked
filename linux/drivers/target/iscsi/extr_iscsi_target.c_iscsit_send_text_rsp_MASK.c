
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_text_rsp {int dummy; } ;
struct iscsi_conn {TYPE_1__* conn_transport; } ;
struct iscsi_cmd {int buf_ptr; scalar_t__ pdu; } ;
struct TYPE_2__ {int (* iscsit_xmit_pdu ) (struct iscsi_conn*,struct iscsi_cmd*,int *,int ,int) ;int transport_type; } ;


 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,struct iscsi_text_rsp*,int ) ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_cmd*,int *,int ,int) ;

__attribute__((used)) static int FUNC_2(
 struct iscsi_cmd *VAR_0,
 struct iscsi_conn *VAR_1)
{
 struct iscsi_text_rsp *VAR_2 = (struct iscsi_text_rsp *)VAR_0->pdu;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2,
    VAR_1->conn_transport->transport_type);
 if (VAR_3 < 0)
  return VAR_3;

 return VAR_1->conn_transport->iscsit_xmit_pdu(VAR_1, VAR_0, ((void*)0),
           VAR_0->buf_ptr,
           VAR_3);
}
