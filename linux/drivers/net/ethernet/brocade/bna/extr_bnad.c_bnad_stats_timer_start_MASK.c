
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad {int bna_lock; int stats_timer; int run_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct bnad *VAR_4)
{
 unsigned long VAR_5;

 FUNC_2(&VAR_4->bna_lock, VAR_5);
 if (!FUNC_4(VAR_0, &VAR_4->run_flags)) {
  FUNC_5(&VAR_4->stats_timer, VAR_2, 0);
  FUNC_0(&VAR_4->stats_timer,
     VAR_3 + FUNC_1(VAR_1));
 }
 FUNC_3(&VAR_4->bna_lock, VAR_5);
}
