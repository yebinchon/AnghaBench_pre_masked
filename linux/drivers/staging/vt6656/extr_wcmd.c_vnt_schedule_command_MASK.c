
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {scalar_t__ free_cmd_queue; int* cmd_queue; size_t cmd_enqueue_idx; int cmd_running; } ;
typedef enum vnt_cmd { ____Placeholder_vnt_cmd } vnt_cmd ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct vnt_private*) ;

int FUNC_2(struct vnt_private *VAR_1, enum vnt_cmd VAR_2)
{
 if (VAR_1->free_cmd_queue == 0)
  return 0;

 VAR_1->cmd_queue[VAR_1->cmd_enqueue_idx] = VAR_2;

 FUNC_0(VAR_1->cmd_enqueue_idx, VAR_0);
 VAR_1->free_cmd_queue--;

 if (!VAR_1->cmd_running)
  FUNC_1(VAR_1);

 return 1;
}
