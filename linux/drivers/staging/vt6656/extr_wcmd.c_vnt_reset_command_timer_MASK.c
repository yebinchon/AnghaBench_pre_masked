
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int cmd_running; int command_state; scalar_t__ cmd_enqueue_idx; scalar_t__ cmd_dequeue_idx; int free_cmd_queue; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct vnt_private *VAR_2)
{
 VAR_2->free_cmd_queue = VAR_0;
 VAR_2->cmd_dequeue_idx = 0;
 VAR_2->cmd_enqueue_idx = 0;
 VAR_2->command_state = VAR_1;
 VAR_2->cmd_running = 0;
}
