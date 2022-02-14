
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_4__ {int timer_mod; } ;
struct bfad_s {int hal_tmo; int bfad_lock; TYPE_1__ bfa; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct list_head*) ;
 int FUNC_1 (TYPE_1__*,struct list_head*) ;
 int FUNC_2 (TYPE_1__*,struct list_head*) ;
 int FUNC_3 (int *) ;
 struct bfad_s* VAR_1 ;
 struct bfad_s* FUNC_4 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct list_head*) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

void
FUNC_10(struct timer_list *VAR_4)
{
 struct bfad_s *VAR_5 = FUNC_4(VAR_5, VAR_4, VAR_2);
 unsigned long VAR_6;
 struct list_head VAR_7;

 FUNC_8(&VAR_5->bfad_lock, VAR_6);

 FUNC_3(&VAR_5->bfa.timer_mod);

 FUNC_0(&VAR_5->bfa, &VAR_7);
 FUNC_9(&VAR_5->bfad_lock, VAR_6);

 if (!FUNC_5(&VAR_7)) {
  FUNC_2(&VAR_5->bfa, &VAR_7);
  FUNC_8(&VAR_5->bfad_lock, VAR_6);
  FUNC_1(&VAR_5->bfa, &VAR_7);
  FUNC_9(&VAR_5->bfad_lock, VAR_6);
 }

 FUNC_6(&VAR_5->hal_tmo,
    VAR_3 + FUNC_7(VAR_0));
}
