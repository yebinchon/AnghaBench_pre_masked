
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct se_session {scalar_t__ sess_cmd_map; int sess_tag_pool; } ;
struct iscsi_conn {TYPE_2__* conn_transport; TYPE_1__* sess; } ;
struct TYPE_6__ {int map_tag; int map_cpu; } ;
struct iscsi_cmd {int dataout_timer; int r2t_lock; int error_lock; int istate_lock; int dataout_timeout_lock; int datain_lock; int cmd_r2t_list; int datain_list; int i_conn_node; int data_direction; struct iscsi_conn* conn; TYPE_3__ se_cmd; } ;
struct TYPE_5__ {int priv_size; } ;
struct TYPE_4__ {struct se_session* se_sess; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct se_session*,int,int*) ;
 int FUNC_2 (struct iscsi_cmd*,int ,int) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;

struct iscsi_cmd *FUNC_6(struct iscsi_conn *VAR_2, int VAR_3)
{
 struct iscsi_cmd *VAR_4;
 struct se_session *VAR_5 = VAR_2->sess->se_sess;
 int VAR_6, VAR_7, VAR_8;

 VAR_7 = FUNC_3(&VAR_5->sess_tag_pool, &VAR_8);
 if (VAR_7 < 0)
  VAR_7 = FUNC_1(VAR_5, VAR_3, &VAR_8);
 if (VAR_7 < 0)
  return ((void*)0);

 VAR_6 = sizeof(struct iscsi_cmd) + VAR_2->conn_transport->priv_size;
 VAR_4 = (struct iscsi_cmd *)(VAR_5->sess_cmd_map + (VAR_7 * VAR_6));
 FUNC_2(VAR_4, 0, VAR_6);

 VAR_4->se_cmd.map_tag = VAR_7;
 VAR_4->se_cmd.map_cpu = VAR_8;
 VAR_4->conn = VAR_2;
 VAR_4->data_direction = VAR_0;
 FUNC_0(&VAR_4->i_conn_node);
 FUNC_0(&VAR_4->datain_list);
 FUNC_0(&VAR_4->cmd_r2t_list);
 FUNC_4(&VAR_4->datain_lock);
 FUNC_4(&VAR_4->dataout_timeout_lock);
 FUNC_4(&VAR_4->istate_lock);
 FUNC_4(&VAR_4->error_lock);
 FUNC_4(&VAR_4->r2t_lock);
 FUNC_5(&VAR_4->dataout_timer, VAR_1, 0);

 return VAR_4;
}
