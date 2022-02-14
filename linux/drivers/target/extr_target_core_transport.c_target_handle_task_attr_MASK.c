
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {int delayed_cmd_lock; int delayed_cmd_list; int dev_ordered_sync; int simple_cmds; TYPE_1__* transport; } ;
struct se_cmd {int sam_task_attr; int * t_task_cdb; int se_delayed_node; int se_cmd_flags; struct se_device* se_dev; } ;
struct TYPE_2__ {int transport_flags; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct se_cmd *VAR_2)
{
 struct se_device *VAR_3 = VAR_2->se_dev;

 if (VAR_3->transport->transport_flags & VAR_1)
  return 0;

 VAR_2->se_cmd_flags |= VAR_0;





 switch (VAR_2->sam_task_attr) {
 case 129:
  FUNC_3("Added HEAD_OF_QUEUE for CDB: 0x%02x\n",
    VAR_2->t_task_cdb[0]);
  return 0;
 case 128:
  FUNC_0(&VAR_3->dev_ordered_sync);

  FUNC_3("Added ORDERED for CDB: 0x%02x to ordered list\n",
    VAR_2->t_task_cdb[0]);





  if (!FUNC_1(&VAR_3->simple_cmds))
   return 0;
  break;
 default:



  FUNC_0(&VAR_3->simple_cmds);
  break;
 }

 if (FUNC_1(&VAR_3->dev_ordered_sync) == 0)
  return 0;

 FUNC_4(&VAR_3->delayed_cmd_lock);
 FUNC_2(&VAR_2->se_delayed_node, &VAR_3->delayed_cmd_list);
 FUNC_5(&VAR_3->delayed_cmd_lock);

 FUNC_3("Added CDB: 0x%02x Task Attr: 0x%02x to delayed CMD listn",
  VAR_2->t_task_cdb[0], VAR_2->sam_task_attr);
 return 1;
}
