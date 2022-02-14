
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {int dev_qf_count; int qf_cmd_lock; } ;
struct se_cmd {TYPE_1__* se_dev; int se_qf_node; int t_state; } ;
struct TYPE_2__ {int qf_work_queue; int qf_cmd_lock; int qf_cmd_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct se_cmd *VAR_5, struct se_device *VAR_6,
     int VAR_7, bool VAR_8)
{
 if (VAR_7 == -VAR_0 || VAR_7 == -VAR_1) {
  VAR_5->t_state = (VAR_8) ? VAR_4 :
       VAR_3;
 } else {
  FUNC_2("Got unknown fabric queue status: %d\n", VAR_7);
  VAR_5->t_state = VAR_2;
 }

 FUNC_4(&VAR_6->qf_cmd_lock);
 FUNC_1(&VAR_5->se_qf_node, &VAR_5->se_dev->qf_cmd_list);
 FUNC_0(&VAR_6->dev_qf_count);
 FUNC_5(&VAR_5->se_dev->qf_cmd_lock);

 FUNC_3(&VAR_5->se_dev->qf_work_queue);
}
