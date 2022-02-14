
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_port_info {scalar_t__ port_state; int sched_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ice_port_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ice_port_info *VAR_2)
{
 if (!VAR_2 || VAR_2->port_state != VAR_1)
  return;

 VAR_2->port_state = VAR_0;
 FUNC_2(&VAR_2->sched_lock);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->sched_lock);
 FUNC_1(&VAR_2->sched_lock);
}
