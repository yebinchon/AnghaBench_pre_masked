
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {int dev_cur_ordered_id; int dev_ordered_sync; int simple_cmds; TYPE_1__* transport; } ;
struct se_cmd {int se_cmd_flags; scalar_t__ sam_task_attr; struct se_device* se_dev; } ;
struct TYPE_2__ {int transport_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct se_device*) ;

__attribute__((used)) static void FUNC_3(struct se_cmd *VAR_5)
{
 struct se_device *VAR_6 = VAR_5->se_dev;

 if (VAR_6->transport->transport_flags & VAR_4)
  return;

 if (!(VAR_5->se_cmd_flags & VAR_0))
  goto restart;

 if (VAR_5->sam_task_attr == VAR_3) {
  FUNC_0(&VAR_6->simple_cmds);
  VAR_6->dev_cur_ordered_id++;
 } else if (VAR_5->sam_task_attr == VAR_1) {
  VAR_6->dev_cur_ordered_id++;
  FUNC_1("Incremented dev_cur_ordered_id: %u for HEAD_OF_QUEUE\n",
    VAR_6->dev_cur_ordered_id);
 } else if (VAR_5->sam_task_attr == VAR_2) {
  FUNC_0(&VAR_6->dev_ordered_sync);

  VAR_6->dev_cur_ordered_id++;
  FUNC_1("Incremented dev_cur_ordered_id: %u for ORDERED\n",
    VAR_6->dev_cur_ordered_id);
 }
 VAR_5->se_cmd_flags &= ~VAR_0;

restart:
 FUNC_2(VAR_6);
}
