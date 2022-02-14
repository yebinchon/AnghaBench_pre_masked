
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt1 {int lock; int * kthread; TYPE_1__** adaps; } ;
struct TYPE_2__ {scalar_t__ users; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pt1 *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_1(&VAR_1->lock);
 for (VAR_2 = 0, VAR_3 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_3 += VAR_1->adaps[VAR_2]->users;

 if (VAR_3 == 0 && VAR_1->kthread) {
  FUNC_0(VAR_1->kthread);
  VAR_1->kthread = ((void*)0);
 }
 FUNC_2(&VAR_1->lock);
}
