
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {scalar_t__ expires; } ;
struct megasas_instance {struct timer_list sriov_heartbeat_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct timer_list*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct timer_list*,int ,int ) ;

void FUNC_2(struct megasas_instance *VAR_3)
{
 struct timer_list *VAR_4 = &VAR_3->sriov_heartbeat_timer;

 FUNC_1(VAR_4, VAR_2, 0);
 VAR_4->expires = VAR_1 + VAR_0;
 FUNC_0(VAR_4);
}
