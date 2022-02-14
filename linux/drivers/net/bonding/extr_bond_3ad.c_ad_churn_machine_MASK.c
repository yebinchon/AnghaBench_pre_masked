
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port_state; } ;
struct port {int sm_vars; scalar_t__ sm_churn_actor_state; scalar_t__ sm_churn_partner_state; int actor_oper_port_state; int churn_partner_count; TYPE_1__ partner_oper; void* sm_churn_partner_timer_counter; int churn_actor_count; void* sm_churn_actor_timer_counter; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct port *VAR_7)
{
 if (VAR_7->sm_vars & VAR_5) {
  VAR_7->sm_vars &= ~VAR_5;
  VAR_7->sm_churn_actor_state = VAR_2;
  VAR_7->sm_churn_partner_state = VAR_2;
  VAR_7->sm_churn_actor_timer_counter =
   FUNC_0(VAR_0, 0);
  VAR_7->sm_churn_partner_timer_counter =
    FUNC_0(VAR_4, 0);
  return;
 }
 if (VAR_7->sm_churn_actor_timer_counter &&
     !(--VAR_7->sm_churn_actor_timer_counter) &&
     VAR_7->sm_churn_actor_state == VAR_2) {
  if (VAR_7->actor_oper_port_state & VAR_6) {
   VAR_7->sm_churn_actor_state = VAR_3;
  } else {
   VAR_7->churn_actor_count++;
   VAR_7->sm_churn_actor_state = VAR_1;
  }
 }
 if (VAR_7->sm_churn_partner_timer_counter &&
     !(--VAR_7->sm_churn_partner_timer_counter) &&
     VAR_7->sm_churn_partner_state == VAR_2) {
  if (VAR_7->partner_oper.port_state & VAR_6) {
   VAR_7->sm_churn_partner_state = VAR_3;
  } else {
   VAR_7->churn_partner_count++;
   VAR_7->sm_churn_partner_state = VAR_1;
  }
 }
}
