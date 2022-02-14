
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_endpt {int list; int lock; int state; } ;
struct TYPE_2__ {int misc_work; int eplock; int nr_zombies; int zombie; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct scif_endpt *VAR_2, bool VAR_3)
{
 if (!VAR_3)
  FUNC_1(&VAR_1.eplock);
 FUNC_4(&VAR_2->lock);
 VAR_2->state = VAR_0;
 FUNC_5(&VAR_2->lock);
 FUNC_0(&VAR_2->list, &VAR_1.zombie);
 VAR_1.nr_zombies++;
 if (!VAR_3)
  FUNC_2(&VAR_1.eplock);
 FUNC_3(&VAR_1.misc_work);
}
