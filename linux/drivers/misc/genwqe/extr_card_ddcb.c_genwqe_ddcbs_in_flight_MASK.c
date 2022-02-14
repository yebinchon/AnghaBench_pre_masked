
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddcb_queue {int ddcbs_in_flight; int ddcb_lock; } ;
struct genwqe_dev {struct ddcb_queue queue; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(struct genwqe_dev *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2 = 0;
 struct ddcb_queue *VAR_3 = &VAR_0->queue;

 FUNC_0(&VAR_3->ddcb_lock, VAR_1);
 VAR_2 += VAR_3->ddcbs_in_flight;
 FUNC_1(&VAR_3->ddcb_lock, VAR_1);

 return VAR_2;
}
