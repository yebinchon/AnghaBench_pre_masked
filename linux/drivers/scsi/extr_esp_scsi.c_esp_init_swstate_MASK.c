
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esp {TYPE_1__* target; int esp_cmd_pool; int active_cmds; int queued_cmds; } ;
struct TYPE_2__ {scalar_t__ nego_goal_tags; scalar_t__ nego_goal_width; scalar_t__ nego_goal_offset; scalar_t__ nego_goal_period; scalar_t__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct esp *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->queued_cmds);
 FUNC_0(&VAR_1->active_cmds);
 FUNC_0(&VAR_1->esp_cmd_pool);





 for (VAR_2 = 0 ; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->target[VAR_2].flags = 0;
  VAR_1->target[VAR_2].nego_goal_period = 0;
  VAR_1->target[VAR_2].nego_goal_offset = 0;
  VAR_1->target[VAR_2].nego_goal_width = 0;
  VAR_1->target[VAR_2].nego_goal_tags = 0;
 }
}
