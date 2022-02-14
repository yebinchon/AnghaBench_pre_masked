
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int port_state; } ;
struct port {scalar_t__ sm_periodic_state; int sm_vars; int actor_oper_port_state; int ntt; scalar_t__ sm_periodic_timer_counter; int actor_port_number; TYPE_3__* slave; TYPE_1__ partner_oper; int is_enabled; } ;
typedef scalar_t__ periodic_states_t ;
struct TYPE_6__ {int dev; TYPE_2__* bond; } ;
struct TYPE_5__ {int dev; } ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct port *VAR_7)
{
 periodic_states_t VAR_8;


 VAR_8 = VAR_7->sm_periodic_state;


 if (((VAR_7->sm_vars & VAR_2) || !(VAR_7->sm_vars & VAR_3) || !VAR_7->is_enabled) ||
     (!(VAR_7->actor_oper_port_state & VAR_5) && !(VAR_7->partner_oper.port_state & VAR_5))
    ) {
  VAR_7->sm_periodic_state = 130;
 }

 else if (VAR_7->sm_periodic_timer_counter) {

  if (!(--VAR_7->sm_periodic_timer_counter)) {

   VAR_7->sm_periodic_state = 129;
  } else {



   switch (VAR_7->sm_periodic_state) {
   case 131:
    if (!(VAR_7->partner_oper.port_state
          & VAR_6))
     VAR_7->sm_periodic_state = 128;
    break;
   case 128:
    if ((VAR_7->partner_oper.port_state & VAR_6)) {
     VAR_7->sm_periodic_timer_counter = 0;
     VAR_7->sm_periodic_state = 129;
    }
    break;
   default:
    break;
   }
  }
 } else {
  switch (VAR_7->sm_periodic_state) {
  case 130:
   VAR_7->sm_periodic_state = 131;
   break;
  case 129:
   if (!(VAR_7->partner_oper.port_state &
       VAR_6))
    VAR_7->sm_periodic_state = 128;
   else
    VAR_7->sm_periodic_state = 131;
   break;
  default:
   break;
  }
 }


 if (VAR_7->sm_periodic_state != VAR_8) {
  FUNC_1(VAR_7->slave->bond->dev, VAR_7->slave->dev,
     "Periodic Machine: Port=%d, Last State=%d, Curr State=%d\n",
     VAR_7->actor_port_number, VAR_8,
     VAR_7->sm_periodic_state);
  switch (VAR_7->sm_periodic_state) {
  case 130:
   VAR_7->sm_periodic_timer_counter = 0;
   break;
  case 131:

   VAR_7->sm_periodic_timer_counter = FUNC_0(VAR_1, (u16)(VAR_0))-1;
   break;
  case 128:

   VAR_7->sm_periodic_timer_counter = FUNC_0(VAR_1, (u16)(VAR_4))-1;
   break;
  case 129:
   VAR_7->ntt = 1;
   break;
  default:
   break;
  }
 }
}
