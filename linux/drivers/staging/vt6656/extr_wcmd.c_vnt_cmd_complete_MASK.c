
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {scalar_t__ free_cmd_queue; int cmd_running; int command; int* cmd_queue; size_t cmd_dequeue_idx; int command_state; } ;


 int FUNC_0 (size_t,scalar_t__) ;
 scalar_t__ VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int FUNC_1 (struct vnt_private*,int ) ;

__attribute__((used)) static int FUNC_2(struct vnt_private *VAR_7)
{
 VAR_7->command_state = VAR_3;
 if (VAR_7->free_cmd_queue == VAR_0) {

  VAR_7->cmd_running = 0;
  return 1;
 }

 VAR_7->command = VAR_7->cmd_queue[VAR_7->cmd_dequeue_idx];

 FUNC_0(VAR_7->cmd_dequeue_idx, VAR_0);
 VAR_7->free_cmd_queue++;
 VAR_7->cmd_running = 1;

 switch (VAR_7->command) {
 case 130:
  VAR_7->command_state = VAR_4;
  break;

 case 128:
  VAR_7->command_state = VAR_6;
  break;

 case 132:
  VAR_7->command_state = VAR_1;
  break;

 case 129:
  VAR_7->command_state = VAR_5;
  break;

 case 131:
  VAR_7->command_state = VAR_2;
  break;

 default:
  break;
 }

 FUNC_1(VAR_7, 0);

 return 1;
}
