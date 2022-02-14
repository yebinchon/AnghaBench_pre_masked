
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_conn {TYPE_1__* conn_transport; } ;
struct iscsi_cmd {scalar_t__ data_direction; int i_conn_node; struct iscsi_conn* conn; } ;
struct TYPE_2__ {int (* iscsit_unmap_cmd ) (struct iscsi_conn*,struct iscsi_cmd*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iscsi_cmd*) ;
 int FUNC_2 (struct iscsi_cmd*) ;
 int FUNC_3 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_4 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_5 (struct iscsi_cmd*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct iscsi_conn*,struct iscsi_cmd*) ;

void FUNC_8(struct iscsi_cmd *VAR_2, bool VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_2->conn;

 FUNC_0(!FUNC_6(&VAR_2->i_conn_node));

 if (VAR_2->data_direction == VAR_1) {
  FUNC_5(VAR_2);
  FUNC_2(VAR_2);
 }
 if (VAR_2->data_direction == VAR_0)
  FUNC_1(VAR_2);

 if (VAR_4 && VAR_3) {
  FUNC_3(VAR_2, VAR_4);
  FUNC_4(VAR_2, VAR_4);
 }

 if (VAR_4 && VAR_4->conn_transport->iscsit_unmap_cmd)
  VAR_4->conn_transport->iscsit_unmap_cmd(VAR_4, VAR_2);
}
