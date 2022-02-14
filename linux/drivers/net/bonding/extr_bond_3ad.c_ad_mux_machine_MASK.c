
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int port_state; } ;
struct port {scalar_t__ sm_mux_state; int sm_vars; int actor_oper_port_state; int ntt; TYPE_4__* aggregator; int sm_mux_timer_counter; int actor_port_number; TYPE_3__* slave; TYPE_1__ partner_oper; } ;
typedef scalar_t__ mux_states_t ;
struct TYPE_9__ {int is_active; } ;
struct TYPE_8__ {int dev; TYPE_2__* bond; } ;
struct TYPE_7__ {int dev; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct port*) ;
 int FUNC_3 (struct port*) ;
 int FUNC_4 (struct port*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (struct port*,int*) ;
 int FUNC_7 (struct port*,int*) ;
 int FUNC_8 (int ,int ,char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct port *VAR_9, bool *VAR_10)
{
 mux_states_t VAR_11;




 VAR_11 = VAR_9->sm_mux_state;

 if (VAR_9->sm_vars & VAR_0) {
  VAR_9->sm_mux_state = 129;
 } else {
  switch (VAR_9->sm_mux_state) {
  case 129:
   if ((VAR_9->sm_vars & VAR_3)
       || (VAR_9->sm_vars & VAR_4))

    VAR_9->sm_mux_state = 128;
   break;
  case 128:

   if (!(VAR_9->sm_vars & VAR_3)) {
    VAR_9->sm_vars &= ~VAR_2;





    FUNC_5(VAR_9->aggregator, FUNC_1(VAR_9->aggregator));
    VAR_9->sm_mux_state = 129;
    break;
   }


   if (VAR_9->sm_mux_timer_counter
       && !(--VAR_9->sm_mux_timer_counter))
    VAR_9->sm_vars |= VAR_2;






   FUNC_5(VAR_9->aggregator, FUNC_1(VAR_9->aggregator));




   if ((VAR_9->sm_vars & VAR_1)
       && !VAR_9->sm_mux_timer_counter)
    VAR_9->sm_mux_state = 131;
   break;
  case 131:



   if ((VAR_9->sm_vars & VAR_3) &&
       (VAR_9->partner_oper.port_state & VAR_7) &&
       !FUNC_2(VAR_9)) {
    if (VAR_9->aggregator->is_active)
     VAR_9->sm_mux_state =
         130;
   } else if (!(VAR_9->sm_vars & VAR_3) ||
       (VAR_9->sm_vars & VAR_4)) {

    VAR_9->sm_vars &= ~VAR_2;





    FUNC_5(VAR_9->aggregator, FUNC_1(VAR_9->aggregator));
    VAR_9->sm_mux_state = 129;
   } else if (VAR_9->aggregator->is_active) {
    VAR_9->actor_oper_port_state |=
        VAR_7;
   }
   break;
  case 130:
   if (!(VAR_9->sm_vars & VAR_3) ||
       (VAR_9->sm_vars & VAR_4) ||
       !(VAR_9->partner_oper.port_state & VAR_7) ||
       !(VAR_9->actor_oper_port_state & VAR_7)) {
    VAR_9->sm_mux_state = 131;
   } else {




    if (VAR_9->aggregator &&
        VAR_9->aggregator->is_active &&
        !FUNC_4(VAR_9)) {

     FUNC_3(VAR_9);
    }
   }
   break;
  default:
   break;
  }
 }


 if (VAR_9->sm_mux_state != VAR_11) {
  FUNC_8(VAR_9->slave->bond->dev, VAR_9->slave->dev,
     "Mux Machine: Port=%d, Last State=%d, Curr State=%d\n",
     VAR_9->actor_port_number,
     VAR_11,
     VAR_9->sm_mux_state);
  switch (VAR_9->sm_mux_state) {
  case 129:
   VAR_9->actor_oper_port_state &= ~VAR_7;
   FUNC_6(VAR_9,
          VAR_10);
   VAR_9->actor_oper_port_state &= ~VAR_5;
   VAR_9->actor_oper_port_state &= ~VAR_6;
   VAR_9->ntt = 1;
   break;
  case 128:
   VAR_9->sm_mux_timer_counter = FUNC_0(VAR_8, 0);
   break;
  case 131:
   if (VAR_9->aggregator->is_active)
    VAR_9->actor_oper_port_state |=
        VAR_7;
   else
    VAR_9->actor_oper_port_state &=
        ~VAR_7;
   VAR_9->actor_oper_port_state &= ~VAR_5;
   VAR_9->actor_oper_port_state &= ~VAR_6;
   FUNC_6(VAR_9,
          VAR_10);
   VAR_9->ntt = 1;
   break;
  case 130:
   VAR_9->actor_oper_port_state |= VAR_5;
   VAR_9->actor_oper_port_state |= VAR_6;
   VAR_9->actor_oper_port_state |= VAR_7;
   FUNC_7(VAR_9,
         VAR_10);
   VAR_9->ntt = 1;
   break;
  default:
   break;
  }
 }
}
