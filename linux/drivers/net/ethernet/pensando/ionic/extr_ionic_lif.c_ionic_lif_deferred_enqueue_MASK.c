
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_deferred_work {int list; } ;
struct ionic_deferred {int work; int lock; int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ionic_deferred *VAR_0,
           struct ionic_deferred_work *VAR_1)
{
 FUNC_2(&VAR_0->lock);
 FUNC_0(&VAR_1->list, &VAR_0->list);
 FUNC_3(&VAR_0->lock);
 FUNC_1(&VAR_0->work);
}
