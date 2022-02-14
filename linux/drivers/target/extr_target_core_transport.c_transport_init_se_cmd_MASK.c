
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct target_core_fabric_ops {int dummy; } ;
struct se_session {int dummy; } ;
struct se_cmd {int data_direction; int sam_task_attr; unsigned char* sense_buffer; int state_active; int data_length; struct se_session* se_sess; struct target_core_fabric_ops const* se_tfo; int cmd_kref; int work; int t_state_lock; int * abrt_compl; int * free_compl; int t_transport_stop_comp; int state_list; int se_cmd_list; int se_qf_node; int se_delayed_node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(
 struct se_cmd *VAR_0,
 const struct target_core_fabric_ops *VAR_1,
 struct se_session *VAR_2,
 u32 VAR_3,
 int VAR_4,
 int VAR_5,
 unsigned char *VAR_6)
{
 FUNC_0(&VAR_0->se_delayed_node);
 FUNC_0(&VAR_0->se_qf_node);
 FUNC_0(&VAR_0->se_cmd_list);
 FUNC_0(&VAR_0->state_list);
 FUNC_2(&VAR_0->t_transport_stop_comp);
 VAR_0->free_compl = ((void*)0);
 VAR_0->abrt_compl = ((void*)0);
 FUNC_4(&VAR_0->t_state_lock);
 FUNC_1(&VAR_0->work, ((void*)0));
 FUNC_3(&VAR_0->cmd_kref);

 VAR_0->se_tfo = VAR_1;
 VAR_0->se_sess = VAR_2;
 VAR_0->data_length = VAR_3;
 VAR_0->data_direction = VAR_4;
 VAR_0->sam_task_attr = VAR_5;
 VAR_0->sense_buffer = VAR_6;

 VAR_0->state_active = 0;
}
