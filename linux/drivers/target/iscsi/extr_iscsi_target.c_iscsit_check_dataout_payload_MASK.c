
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_data {int dummy; } ;
struct iscsi_conn {TYPE_1__* conn_transport; } ;
struct iscsi_cmd {int cmd_flags; int se_cmd; int istate_lock; int i_state; struct iscsi_conn* conn; } ;
struct TYPE_2__ {int (* iscsit_get_dataout ) (struct iscsi_conn*,struct iscsi_cmd*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iscsi_cmd*,unsigned char*,int) ;
 int FUNC_1 (struct iscsi_cmd*) ;
 int FUNC_2 (struct iscsi_cmd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct iscsi_conn*,struct iscsi_cmd*,int) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct iscsi_cmd *VAR_7, struct iscsi_data *VAR_8,
        bool VAR_9)
{
 struct iscsi_conn *VAR_10 = VAR_7->conn;
 int VAR_11, VAR_12;




 VAR_11 = FUNC_0(VAR_7, (unsigned char *)VAR_8, VAR_9);
 if ((VAR_11 == VAR_0) || (VAR_11 == VAR_3))
  return 0;
 else if (VAR_11 == VAR_1) {
  FUNC_1(VAR_7);
  VAR_10->conn_transport->iscsit_get_dataout(VAR_10, VAR_7, 0);
 } else if (VAR_11 == VAR_2) {




  FUNC_3(&VAR_7->istate_lock);
  VAR_12 = (VAR_7->cmd_flags & VAR_5);
  VAR_7->cmd_flags |= VAR_4;
  VAR_7->i_state = VAR_6;
  FUNC_4(&VAR_7->istate_lock);

  FUNC_2(VAR_7);
  if (VAR_12)
   return 0;
  FUNC_6(&VAR_7->se_cmd);
  return 0;
 } else
  return -1;

 return 0;
}
