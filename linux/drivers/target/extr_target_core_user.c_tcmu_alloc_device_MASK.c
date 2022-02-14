
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct tcmu_dev {int qfull_time_out; struct se_device se_dev; int data_blocks; int cmd_timer; int qfull_timer; int commands; int inflight_queue; int qfull_queue; int timedout_entry; int node; int cmdr_lock; int max_blocks; int cmd_time_out; struct se_hba* hba; int name; int kref; } ;
struct se_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tcmu_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int ) ;
 struct tcmu_dev* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static struct se_device *FUNC_9(struct se_hba *VAR_5, const char *VAR_6)
{
 struct tcmu_dev *VAR_7;

 VAR_7 = FUNC_6(sizeof(struct tcmu_dev), VAR_1);
 if (!VAR_7)
  return ((void*)0);
 FUNC_4(&VAR_7->kref);

 VAR_7->name = FUNC_5(VAR_6, VAR_1);
 if (!VAR_7->name) {
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 VAR_7->hba = VAR_5;
 VAR_7->cmd_time_out = VAR_2;
 VAR_7->qfull_time_out = -1;

 VAR_7->max_blocks = VAR_0;
 FUNC_7(&VAR_7->cmdr_lock);

 FUNC_0(&VAR_7->node);
 FUNC_0(&VAR_7->timedout_entry);
 FUNC_0(&VAR_7->qfull_queue);
 FUNC_0(&VAR_7->inflight_queue);
 FUNC_2(&VAR_7->commands);

 FUNC_8(&VAR_7->qfull_timer, VAR_4, 0);
 FUNC_8(&VAR_7->cmd_timer, VAR_3, 0);

 FUNC_1(&VAR_7->data_blocks, VAR_1);

 return &VAR_7->se_dev;
}
