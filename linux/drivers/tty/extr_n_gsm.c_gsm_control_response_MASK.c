
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gsm_mux {int control_lock; int event; struct gsm_control* pending_cmd; int t2_timer; } ;
struct gsm_control {unsigned int cmd; int done; int error; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gsm_mux *VAR_2, unsigned int VAR_3,
      const u8 *VAR_4, int VAR_5)
{
 struct gsm_control *VAR_6;
 unsigned long VAR_7;

 FUNC_1(&VAR_2->control_lock, VAR_7);

 VAR_6 = VAR_2->pending_cmd;

 VAR_3 |= 1;
 if (VAR_6 != ((void*)0) && (VAR_3 == VAR_6->cmd || VAR_3 == VAR_0)) {

  FUNC_0(&VAR_2->t2_timer);
  VAR_2->pending_cmd = ((void*)0);

  if (VAR_3 == VAR_0)
   VAR_6->error = -VAR_1;
  VAR_6->done = 1;
  FUNC_3(&VAR_2->event);
 }
 FUNC_2(&VAR_2->control_lock, VAR_7);
}
