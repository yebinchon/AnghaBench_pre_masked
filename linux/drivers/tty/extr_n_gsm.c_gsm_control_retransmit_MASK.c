
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct gsm_mux {scalar_t__ cretries; int t2; int control_lock; int t2_timer; int event; struct gsm_control* pending_cmd; } ;
struct gsm_control {int done; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gsm_mux* FUNC_0 (int ,struct timer_list*,int ) ;
 struct gsm_mux* VAR_2 ;
 int FUNC_1 (struct gsm_mux*,struct gsm_control*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_5)
{
 struct gsm_mux *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_4);
 struct gsm_control *VAR_7;
 unsigned long VAR_8;
 FUNC_3(&VAR_6->control_lock, VAR_8);
 VAR_7 = VAR_6->pending_cmd;
 if (VAR_7) {
  VAR_6->cretries--;
  if (VAR_6->cretries == 0) {
   VAR_6->pending_cmd = ((void*)0);
   VAR_7->error = -VAR_0;
   VAR_7->done = 1;
   FUNC_4(&VAR_6->control_lock, VAR_8);
   FUNC_5(&VAR_6->event);
   return;
  }
  FUNC_1(VAR_6, VAR_7);
  FUNC_2(&VAR_6->t2_timer, VAR_3 + VAR_6->t2 * VAR_1 / 100);
 }
 FUNC_4(&VAR_6->control_lock, VAR_8);
}
