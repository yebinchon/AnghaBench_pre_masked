
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct vchiq_arm_state {int suspend_timer_running; TYPE_1__ suspend_timer; int suspend_timer_timeout; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;

inline void
FUNC_3(struct vchiq_arm_state *VAR_1)
{
 FUNC_1(&VAR_1->suspend_timer);
 VAR_1->suspend_timer.expires = VAR_0 +
  FUNC_2(VAR_1->suspend_timer_timeout);
 FUNC_0(&VAR_1->suspend_timer);
 VAR_1->suspend_timer_running = 1;
}
