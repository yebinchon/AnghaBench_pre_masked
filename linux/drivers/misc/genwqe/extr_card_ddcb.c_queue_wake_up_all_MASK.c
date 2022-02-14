
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddcb_queue {unsigned int ddcb_max; size_t ddcb_act; int ddcb_lock; int busy_waitq; int * ddcb_waitqs; } ;
struct genwqe_dev {struct ddcb_queue queue; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct genwqe_dev *VAR_0)
{
 unsigned int VAR_1;
 unsigned long VAR_2;
 struct ddcb_queue *VAR_3 = &VAR_0->queue;

 FUNC_0(&VAR_3->ddcb_lock, VAR_2);

 for (VAR_1 = 0; VAR_1 < VAR_3->ddcb_max; VAR_1++)
  FUNC_2(&VAR_3->ddcb_waitqs[VAR_3->ddcb_act]);

 FUNC_2(&VAR_3->busy_waitq);
 FUNC_1(&VAR_3->ddcb_lock, VAR_2);

 return 0;
}
