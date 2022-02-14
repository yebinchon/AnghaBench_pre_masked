
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct bfa_timer_s {scalar_t__ timeout; int arg; int (* timercb ) (int ) ;int qe; } ;
struct bfa_timer_mod_s {struct list_head timer_q; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*,struct bfa_timer_s**) ;
 struct list_head* FUNC_2 (struct list_head*) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct list_head*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct bfa_timer_mod_s *VAR_1)
{
 struct list_head *VAR_2 = &VAR_1->timer_q;
 struct list_head *VAR_3, *VAR_4;
 struct bfa_timer_s *VAR_5;
 struct list_head VAR_6;

 FUNC_0(&VAR_6);

 VAR_3 = FUNC_2(VAR_2);

 while (VAR_3 != VAR_2) {
  VAR_4 = FUNC_2(VAR_3);

  VAR_5 = (struct bfa_timer_s *) VAR_3;
  if (VAR_5->timeout <= VAR_0) {
   VAR_5->timeout = 0;
   FUNC_4(&VAR_5->qe);
   FUNC_3(&VAR_5->qe, &VAR_6);
  } else {
   VAR_5->timeout -= VAR_0;
  }

  VAR_3 = VAR_4;
 }




 while (!FUNC_5(&VAR_6)) {
  FUNC_1(&VAR_6, &VAR_5);
  VAR_5->timercb(VAR_5->arg);
 }
}
