
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct pqi_ctrl_info {TYPE_1__ heartbeat_timer; int previous_heartbeat_count; int num_interrupts; int previous_num_interrupts; int heartbeat_counter; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct pqi_ctrl_info*) ;

__attribute__((used)) static void FUNC_3(struct pqi_ctrl_info *VAR_2)
{
 if (!VAR_2->heartbeat_counter)
  return;

 VAR_2->previous_num_interrupts =
  FUNC_1(&VAR_2->num_interrupts);
 VAR_2->previous_heartbeat_count =
  FUNC_2(VAR_2);

 VAR_2->heartbeat_timer.expires =
  VAR_1 + VAR_0;
 FUNC_0(&VAR_2->heartbeat_timer);
}
