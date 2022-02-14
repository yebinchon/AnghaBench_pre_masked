
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_conn {int cmd_lock; } ;
struct TYPE_2__ {int transport_state; } ;
struct iscsi_cmd {int i_conn_node; TYPE_1__ se_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_cmd*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct iscsi_conn *VAR_1, struct iscsi_cmd *VAR_2)
{
 FUNC_3(&VAR_1->cmd_lock);
 if (!FUNC_2(&VAR_2->i_conn_node) &&
     !(VAR_2->se_cmd.transport_state & VAR_0))
  FUNC_1(&VAR_2->i_conn_node);
 FUNC_4(&VAR_1->cmd_lock);

 FUNC_0(VAR_2, 1);
}
