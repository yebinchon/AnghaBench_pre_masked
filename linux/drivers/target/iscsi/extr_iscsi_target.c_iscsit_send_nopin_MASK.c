
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_nopin {int dummy; } ;
struct iscsi_conn {TYPE_1__* conn_transport; } ;
struct iscsi_cmd {int buf_ptr_size; int buf_ptr; int * pdu; } ;
struct TYPE_2__ {int (* iscsit_xmit_pdu ) (struct iscsi_conn*,struct iscsi_cmd*,int *,int ,int ) ;} ;


 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,struct iscsi_nopin*,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_cmd*,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct iscsi_cmd *VAR_0, struct iscsi_conn *VAR_1)
{
 struct iscsi_nopin *VAR_2 = (struct iscsi_nopin *)&VAR_0->pdu[0];

 FUNC_0(VAR_0, VAR_1, VAR_2, 1);





 FUNC_1("Echoing back %u bytes of ping data.\n", VAR_0->buf_ptr_size);

 return VAR_1->conn_transport->iscsit_xmit_pdu(VAR_1, VAR_0, ((void*)0),
           VAR_0->buf_ptr,
           VAR_0->buf_ptr_size);
}
