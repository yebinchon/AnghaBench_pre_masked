
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_arm_state {scalar_t__ suspend_timer_running; int suspend_timer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(struct vchiq_arm_state *VAR_0)
{
 if (VAR_0->suspend_timer_running) {
  FUNC_0(&VAR_0->suspend_timer);
  VAR_0->suspend_timer_running = 0;
 }
}
