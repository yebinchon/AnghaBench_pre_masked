
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad {int stats_timer; int bna_lock; int run_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct bnad *VAR_1)
{
 int VAR_2 = 0;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->bna_lock, VAR_3);
 if (FUNC_3(VAR_0, &VAR_1->run_flags))
  VAR_2 = 1;
 FUNC_2(&VAR_1->bna_lock, VAR_3);
 if (VAR_2)
  FUNC_0(&VAR_1->stats_timer);
}
