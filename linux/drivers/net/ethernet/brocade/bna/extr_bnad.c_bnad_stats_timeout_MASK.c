
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct bnad {int bna_lock; int bna; int run_flags; int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct bnad* VAR_1 ;
 struct bnad* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_2 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct timer_list *VAR_3)
{
 struct bnad *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 unsigned long VAR_5;

 if (!FUNC_2(VAR_4->netdev) ||
  !FUNC_5(VAR_0, &VAR_4->run_flags))
  return;

 FUNC_3(&VAR_4->bna_lock, VAR_5);
 FUNC_0(&VAR_4->bna);
 FUNC_4(&VAR_4->bna_lock, VAR_5);
}
