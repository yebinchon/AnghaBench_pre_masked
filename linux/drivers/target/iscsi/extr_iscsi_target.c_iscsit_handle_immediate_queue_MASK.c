
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iscsit_transport {int (* iscsit_immediate_queue ) (struct iscsi_conn*,struct iscsi_cmd*,int ) ;} ;
struct iscsi_queue_req {int state; struct iscsi_cmd* cmd; } ;
struct iscsi_conn {int check_immediate_queue; struct iscsit_transport* conn_transport; } ;
struct iscsi_cmd {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 struct iscsi_queue_req* FUNC_1 (struct iscsi_conn*) ;
 int FUNC_2 (int ,struct iscsi_queue_req*) ;
 int VAR_0 ;
 int FUNC_3 (struct iscsi_conn*,struct iscsi_cmd*,int ) ;

__attribute__((used)) static int
FUNC_4(struct iscsi_conn *VAR_1)
{
 struct iscsit_transport *VAR_2 = VAR_1->conn_transport;
 struct iscsi_queue_req *VAR_3;
 struct iscsi_cmd *VAR_4;
 u8 VAR_5;
 int VAR_6;

 while ((VAR_3 = FUNC_1(VAR_1))) {
  FUNC_0(&VAR_1->check_immediate_queue, 0);
  VAR_4 = VAR_3->cmd;
  VAR_5 = VAR_3->state;
  FUNC_2(VAR_0, VAR_3);

  VAR_6 = VAR_2->iscsit_immediate_queue(VAR_1, VAR_4, VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}
