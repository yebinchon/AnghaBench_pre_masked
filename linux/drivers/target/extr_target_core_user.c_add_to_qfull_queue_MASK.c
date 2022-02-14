
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_dev {unsigned int qfull_time_out; int cmd_time_out; int name; int qfull_queue; int qfull_timer; } ;
struct tcmu_cmd {int cmd_id; int queue_entry; struct tcmu_dev* tcmu_dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct tcmu_cmd*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_3(struct tcmu_cmd *VAR_2)
{
 struct tcmu_dev *VAR_3 = VAR_2->tcmu_dev;
 unsigned int VAR_4;
 int VAR_5;





 if (!VAR_3->qfull_time_out)
  return -VAR_0;
 else if (VAR_3->qfull_time_out > 0)
  VAR_4 = VAR_3->qfull_time_out;
 else if (VAR_3->cmd_time_out)
  VAR_4 = VAR_3->cmd_time_out;
 else
  VAR_4 = VAR_1;

 VAR_5 = FUNC_2(VAR_2, VAR_4, &VAR_3->qfull_timer);
 if (VAR_5)
  return VAR_5;

 FUNC_0(&VAR_2->queue_entry, &VAR_3->qfull_queue);
 FUNC_1("adding cmd %u on dev %s to ring space wait queue\n",
   VAR_2->cmd_id, VAR_3->name);
 return 0;
}
